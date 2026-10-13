<!-- SPDX-License-Identifier: AGPL-3.0-or-later -->
# sug-server

Game repository of Skyrim Underground (SUG). Server, shared and client code live together so one change can update all three. 

Engine-level code taken from [skymp](https://github.com/skyrim-multiplayer/skymp) is in `Engine/`, apart from the gameplay folders.

# Organization
SUG is based on SS14 repos in structure, naturally converted for what's actually needed for Skyrim Multiplayer.

| Folder | Purpose |
|---|---|
| `Engine/` | Engine code from skymp; see [Engine/README.md](Engine/README.md) |
| `Content.Server/` | Server gameplay |
| `Content.Shared/` | Code and definitions used by both server and client |
| `Content.Client/` | Client gameplay scripts and client-side game data |
| `Content.UI/` | In-game menus and their shared component library |
| `Tools/DevServer/` | Local test server for developers |
| `Tools/ServerManager/` | Server operations tooling |
| `bin/` | Build output (not committed) |
| `out/` | CMake and vcpkg intermediate files (not committed) |

## Prerequisites

- Windows x64.
- Visual Studio 2026 or Visual Studio Build Tools 2026 with the C++ desktop workload: MSVC toolset v145, a Windows SDK, and the bundled CMake (4.2 or newer) and vcpkg.
- `VCPKG_ROOT` set to a vcpkg installation. A Visual Studio developer shell sets it to the bundled copy; with a standalone vcpkg clone, set it to that clone instead.
- Node.js 24 with npm, on `PATH` (for the server's TypeScript host).

## Build

From a developer shell in the repository root (`VsDevCmd.bat -arch=x64 -host_arch=x64`, or the "x64 Native Tools Command Prompt"):

```bat
cmake --preset ninja-debug
cmake --build --preset ninja-debug
```

| Configure preset | Generator | Build presets |
|---|---|---|
| `ninja-debug` | Ninja, Debug | `ninja-debug` |
| `ninja-release` | Ninja, Release | `ninja-release` |
| `vs2026` | Visual Studio 18 2026, multi-config | `vs2026-debug`, `vs2026-release` |

The Ninja presets need the developer shell, because `cl`, `ninja` and `cmake` are not on `PATH` otherwise. Build files go to `out/build/<preset>/`. vcpkg builds ports in `out/vcpkg-bt/`, shared by all presets: the Visual Studio copy of vcpkg would otherwise build them under `out/build/<preset>/vcpkg_installed/vcpkg/blds`, where libsodium's source paths exceed Windows' 260-character limit. Unless long paths are enabled in Windows, keep the clone path at 75 characters or less (libsodium's longest source path needs it).

Built binaries go to `bin/`: `bin/server/scam_native.node` (the server's Node addon) and `bin/client/sug_net.dll`, each with its `.pdb` (and `.ilk` after a Ninja Debug build), and `bin/server/skymp5-server.js` with its `.map` (the TypeScript host, the same for every preset). Every preset writes the same files there, and a build does not relink a binary whose file in `bin/` is newer than its inputs. Before building with a different preset from the last one, delete `bin/server/scam_native.*` and `bin/client/sug_net.*`.

CMake options:
- `SUG_BUILD_SERVER` (default `ON`). `OFF` builds only the protocol and the client transport (`sug_net.dll`), without the server code and the server's vcpkg dependencies.
- `SUG_BUILD_TESTS` (default `ON`).
- `SUG_SKYRIM_DATA_DIR`: the Skyrim Special Edition `Data` folder used by tests that read game data. It is taken from the environment variable of the same name at the first configure; change it later with `-D SUG_SKYRIM_DATA_DIR=<path>`. Nothing is written to that folder.

### Dependencies and downloads

The first configure runs vcpkg in manifest mode (`vcpkg.json`, `vcpkg-configuration.json`) and builds every dependency from source, which takes a long time. Finished packages go to vcpkg's binary cache (`%LOCALAPPDATA%\vcpkg\archives`), so later configures are fast.

That first configure downloads the vcpkg registry at the pinned baseline, the pinned sources of each port, and the build tools some ports fetch through vcpkg (Strawberry Perl, NASM and jom for OpenSSL; an embedded Python and MSYS2 packages for others). Full builds of the three presets need about 10.4 GB in `out/` (measured 2026-10-12: 3.5 GB ninja-debug, 2.3 GB ninja-release, 4.6 GB vs2026 with both configurations). Two sources do not come from registry ports: `nic11/antigo` and `biaks/prometheus-cpp-lite` on GitHub, fetched by the overlay ports in `Engine/vcpkg/ports` and checked against the SHA512 in their portfiles.

vcpkg sends usage telemetry unless it is disabled. The presets set `VCPKG_DISABLE_METRICS=1` for configure, build and test. If you run `vcpkg` yourself, set `VCPKG_DISABLE_METRICS=1` first.

The `server_host` target runs `npm ci` in `Engine/Server/host` when `package-lock.json` changes, which downloads the host's npm packages at the versions pinned there from the npm registry (with `--no-audit --no-fund`, so no audit report is sent). The packages are bundled into `bin/server/skymp5-server.js`; nothing is installed at run time.

## Dev server

`Tools/DevServer` starts a local server from `bin/server` with the masters of your own Skyrim installation; see [Tools/DevServer/README.md](Tools/DevServer/README.md).

## Tests

The tests are built when `SUG_BUILD_SERVER` and `SUG_BUILD_TESTS` are on. Set `SUG_SKYRIM_DATA_DIR` before the first configure (see CMake options), then, in the developer shell:

```bat
cmake --build --preset ninja-debug
ctest --preset ninja-debug
```

| ctest name | Runs | Notes |
|---|---|---|
| `unit` | skymp's unit tests (`unit.exe`) | Tests tagged `[espm]` read the five masters (many also read `Skyrim - Misc.bsa`) from `SUG_SKYRIM_DATA_DIR`, and are skipped when `Skyrim.esm` is not there. Runs in `out/build/<preset>/` and writes there (for example `unit/data`). Binds UDP `127.0.0.1:7778`. The `NetworkingTest` case "Ctors" makes one DNS lookup for the unresolvable name `cococo` |
| `geo` | `geo_tests.exe` | Point-in-volume checks of `Engine/Server/geo` |
| `net_loopback` | `net_loopback_tests.exe` | Connects `bin/client/sug_net.dll` to the server transport on UDP `127.0.0.1:7781`: SUG's protocol identifier is accepted and a message arrives in the binary encoding; skymp's identifier `7_` is refused |
| `server_boot_smoke` | `node Engine/Tests/smoke/boot-smoke.mjs` (label `smoke`) | Registered only when `SUG_SKYRIM_DATA_DIR` is set at configure time. Starts `Tools/DevServer` from `bin/server` in a temporary run folder (deleted afterwards) on UDP `127.0.0.1:7790` and TCP 7791, checks that the five masters are loaded and the port is bound, then stops the server through its gamemode and checks a clean exit. Prints `SMOKE PASS` or the first failed step |

`net_loopback` and `server_boot_smoke` use the binaries in `bin/`, so run the tests of the preset you built last (see the `bin/` rule under Build).

## Licences

SUG code is AGPL-3.0-or-later (`LICENSE`); the scope is in `NOTICE`. Imported code keeps its own terms, and `ORIGINS.md` lists every imported file.

**Do not publish yet:** `Engine/Shared/serialization` and `Engine/Tests/unit` come from skymp folders that have no licence file. Do not push them to a public remote, or distribute binaries built from them (every binary, `sug_net.dll` included), until skymp confirms their licence or they are rewritten.

## Contributing

See `CONTRIBUTING.md` (commits are signed off under the Developer Certificate of Origin).
