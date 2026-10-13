<!-- SPDX-License-Identifier: AGPL-3.0-or-later -->
# Engine

Engine-level C++ taken from skymp at commit `2849e676`, kept apart from the `Content.*` gameplay
folders. Every imported file, with its upstream path, licence and any SUG change, is listed in
[ORIGINS.md](../ORIGINS.md).

Upstream library folder names are kept inside the area folders, so an upstream fix maps path to path.
Build files sit at the area level (`Shared/CMakeLists.txt`), never inside an imported folder.

## Folders

| Path | Contents |
|---|---|
| `CMakeLists.txt` | Finds the dependencies every area uses, then adds the areas |
| `cmake/SugTargetDefaults.cmake` | `sug_target_defaults(<target>)`: MSVC compile and link flags for every SUG C++ target |
| `vcpkg/triplets/` | `x64-windows-static-v145`: static libraries, static CRT, toolset v145 |
| `vcpkg/ports/` | Overlay ports for dependencies that are not in the vcpkg registry: `antigo`, `makeid` (vendored `MakeID.h`), `prometheus-cpp-lite` |
| `Shared/viet/` | skymp's utility library: buffers, promises, timers, task queue, save storage (MIT) |
| `Shared/serialization/` | skymp's archives for the binary (SLikeNet bit stream) and JSON message encodings (no licence file in skymp; see `NOTICE`) |
| `Shared/protocol/` | The wire protocol shared by server and client (AGPL-3.0): `messages/`, the wire types in `wire_types/` (inventory, equipment, appearance, animation), the networking interfaces in `mp_common/`, and SUG's protocol identifier in `ProtocolVersion.h`. Only binary messages go on the wire |
| `Client/` | Client transport; built in every configuration and has no server dependency |
| `Client/net/` | skymp's client transport (`MpClientPlugin`, the client half of `Networking.cpp`) and the C interface of `sug_net.dll` (AGPL-3.0) |
| `Server/` | Server-only code; the whole area is built only when `SUG_BUILD_SERVER` is on |
| `Server/libespm/` | skymp's reader for the game's plugin files (ESM, ESP): records, groups, compressed fields (MIT) |
| `Server/papyrus-vm/` | skymp's Papyrus virtual machine: `.pex` reader and interpreter, library only (MIT) |
| `Server/geo/` | SUG's point-in-volume test for activation volumes (`ConvexPolyhedron`), a clean rewrite of skymp's `geo` |
| `Server/localization_provider/` | skymp's translation lookup, used when the `lang` setting is set (AGPL-3.0) |
| `Server/mp_common/` | The server half of skymp's networking: SLikeNet server, user ids, metrics, `ServerCombined` (AGPL-3.0) |
| `Server/server_guest_lib/` | skymp's server simulation: world state, actors, inventory, Papyrus bindings, persistence (AGPL-3.0) |
| `Server/standard_scripts/` | skymp's 133 Papyrus stubs (one per script class, not Bethesda scripts), embedded as the last script source after `<dataDir>/scripts` and the `archives` BSAs (AGPL-3.0) |
| `Server/addon/` | skymp's Node-API addon: the `ScampServer` class that the TypeScript host drives (settings, tick, gamemode API, property bindings, Papyrus calls) (AGPL-3.0) |
| `Server/host/` | skymp's TypeScript host, bundled into `bin/server/skymp5-server.js`: reads `server-settings.json` from the working directory, runs the server tick, loads the gamemode and serves `/metrics`; the only login is a dev-only offline login until the launcher token login exists (AGPL-3.0) |
| `Tests/` | Tests; built when `SUG_BUILD_SERVER` and `SUG_BUILD_TESTS` are on |
| `Tests/unit/` | skymp's unit tests and their three Papyrus test scripts (no licence file in skymp; see `NOTICE`) |
| `Tests/mp_common/` | skymp's mock server (`NetworkingMock`), used only by the unit tests (AGPL-3.0) |
| `Tests/geo/` | Tests of `Server/geo` |
| `Tests/loopback/` | `sug_net.dll` against the server transport: SUG's protocol identifier is accepted, skymp's is refused |
| `Tests/smoke/` | Boot smoke test of `Tools/DevServer` (`boot-smoke.mjs`, ctest `server_boot_smoke`) and the gamemode it runs (`smoke-gamemode.js`) |

## Targets

| Target | Type | Built when | Links |
|---|---|---|---|
| `viet` | static library | `SUG_BUILD_SERVER` is on | spdlog; `MakeID.h` include directory |
| `serialization` | static library | always | SLikeNet, simdjson, nlohmann-json, spdlog |
| `protocol` | static library | always | serialization, fmt |
| `sug_net_core` | static library | always | protocol, ws2_32 |
| `sug_net` | shared library, `bin/client/sug_net.dll` | always | sug_net_core |
| `espm` | static library | `SUG_BUILD_SERVER` is on | viet, zlib, spdlog |
| `papyrus-vm-lib` | static library | `SUG_BUILD_SERVER` is on | viet, spdlog |
| `geo` | static library | `SUG_BUILD_SERVER` is on | none |
| `localization-provider` | static library | `SUG_BUILD_SERVER` is on | none |
| `mp_common` | static library | `SUG_BUILD_SERVER` is on | protocol, spdlog, fmt, ws2_32; prometheus-cpp-lite and `MakeID.h` headers; defines `MAX_PLAYERS=1000` |
| `server_standard_scripts` | static library (CMakeRC resources) | `SUG_BUILD_SERVER` is on | the `.pex` files of `Server/standard_scripts` |
| `server_guest_lib` | static library | `SUG_BUILD_SERVER` is on | viet, mp_common, espm, papyrus-vm-lib, geo, protocol, server_standard_scripts, antigo, rsm-bsa, mongo-cxx-driver |
| `scam_native` | Node addon (shared library), `bin/server/scam_native.node` | `SUG_BUILD_SERVER` is on | server_guest_lib, mp_common, localization-provider, node-addon-api (with Node's import library `node.lib`), antigo |
| `server_host` | custom target: `npm ci` when `host/package-lock.json` changes, then `npm run build` (`tsc` check, esbuild bundle) to `bin/server/skymp5-server.js` and its `.map` | `SUG_BUILD_SERVER` is on | the npm packages pinned in `host/package-lock.json`, bundled into the output |
| `unit` | executable, ctest `unit` | `SUG_BUILD_SERVER` and `SUG_BUILD_TESTS` are on | server_guest_lib, espm, sug_net_core, Catch2 |
| `geo_tests` | executable, ctest `geo` | `SUG_BUILD_SERVER` and `SUG_BUILD_TESTS` are on | geo, Catch2 |
| `net_loopback_tests` | executable, ctest `net_loopback` | `SUG_BUILD_SERVER` and `SUG_BUILD_TESTS` are on | sug_net_core, mp_common, Catch2; loads `bin/client/sug_net.dll` at run time (built first) |

## `sug_net.dll`

C exports: `CreateClient(host, port, password)`, `DestroyClient`, `IsConnected`,
`Tick(onPacket, state)`, `Send(jsonContent, reliable)` and `SendRaw(data, size, reliable)`.

- `CreateClient` connects with the protocol identifier from `ProtocolVersion.h` followed by
  `password` (null or empty for a server without a password). A server with a different identifier
  refuses the connection.
- `Send` takes a JSON message with a numeric `t` and sends it in the binary encoding. It throws a C++
  exception for JSON it cannot serialize, for example without a numeric `t` or with a message type
  that has no serializer, so a C caller must not pass such input.
- `Tick` reports connection events to `onPacket` and hands it each received binary message as JSON.
  A packet that is not a known binary message is dropped.
- The DLL also exports SLikeNet's C++ symbols: the static SLikeNet library from vcpkg carries
  `/EXPORT` directives, and the linker keeps them.
