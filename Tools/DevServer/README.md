<!-- SPDX-License-Identifier: AGPL-3.0-or-later -->
# Tools/DevServer

Starts a local server from the build output in `bin/server`, for development on one machine.

## Prerequisites

- Node.js 24 and the build prerequisites of the repository README.
- Skyrim Special Edition installed. The server reads the five masters and `Skyrim - Misc.bsa` from its `Data` folder and writes nothing there.

## Build

In a Visual Studio developer shell (`VsDevCmd.bat -arch=x64 -host_arch=x64`), from the repository root:

```bat
cmake --preset ninja-debug
cmake --build --preset ninja-debug --target scam_native server_host
```

`scam_native` builds the server's Node addon, `bin/server/scam_native.node`. `server_host` installs the host's npm packages with `npm ci` and bundles the TypeScript host into `bin/server/skymp5-server.js`. Every preset writes the same files to `bin/`, and a build does not relink a binary whose file there is newer than its inputs, so before building with a different preset from the last one, delete `bin/server/scam_native.*` and `bin/client/sug_net.*`.

## Run

```bat
set SUG_SKYRIM_DATA_DIR=<Skyrim Special Edition folder>\Data
Tools\DevServer\start-dev-server.cmd
```

`start-dev-server.cmd` runs `node Tools/DevServer/dev-server.mjs` and passes its arguments on. The script writes `server-settings.json` into the run folder, then starts `node --enable-source-maps bin/server/skymp5-server.js` there and exits with the server's exit code. It does not build anything.

| Option | Default | Meaning |
|---|---|---|
| `--data-dir <path>` | `SUG_SKYRIM_DATA_DIR` | The Skyrim Special Edition `Data` folder; one of the two is required |
| `--run-dir <path>` | `out/devserver` | The server's working directory |
| `--port <number>` | `port` of the settings file (7777) | UDP game port |
| `--gamemode <path>` | `gamemode.js` in the run folder | Gamemode script |
| `--settings <path>` | `Tools/DevServer/server-settings.example.json` | Settings to start from |

Relative paths are resolved against the current directory. Without a gamemode file the server logs that it does not exist and runs without one.
Examples:

```bat
Tools\DevServer\start-dev-server.cmd --gamemode path\to\gamemode.js
node Tools\DevServer\dev-server.mjs --run-dir out\devserver-2 --port 7790
```

Ctrl+C stops the server at once. There is no graceful shutdown yet, so saves still queued in memory can be lost.

## What is written where

- The run folder only: `server-settings.json` (rewritten at every start from the settings file and the options) and the world database in `world/` (`databaseDriver` `file`, `databaseName` `world`). Delete the run folder to start with an empty world.
- The gamemode is loaded through a temporary copy in the system temp folder, deleted after loading.
- Nothing is written to `bin/`, the rest of the repository or the Skyrim folder.

## Network

The server listens on UDP `port` (7777) for game clients and on TCP 3000 for `/metrics` (with any other `port`, on `port + 1`). The example settings bind both to `127.0.0.1` (`listenHost`, `uiListenHost`), so other machines cannot connect and Windows Firewall does not ask. `/metrics` answers 401 until `metricsAuth` (`user` and `password`) is set. For a test over the LAN, copy the settings file, set both keys to the machine's LAN address and pass the copy with `--settings`.

With these settings the server makes no outbound connection. MongoDB is used only with `databaseDriver` `mongodb`.

## devOfflineLogin

The example settings turn on `devOfflineLogin`: the server accepts any client that sends a numeric `profileId` and spawns that profile's character, with no password or token. Use it only on your own machine. Without it (the server default), every login is refused and the client is kicked, because the launcher token login is not implemented yet.
