<!-- SPDX-License-Identifier: AGPL-3.0-or-later -->
# Origins

Imported from skymp (https://github.com/skyrim-multiplayer/skymp) at commit
2849e676fe008925384b26f34476e382a30bd877 (2026-10-05). No skymp history is included (0002).
"modified YYYY-MM-DD" marks files SUG changed and when (AGPL-3.0 section 5(a)).

| Staged path | Upstream path | Upstream commit | Licence | Status | Reason |
|---|---|---|---|---|---|
| Engine/Client/net/client/main.cpp | skymp5-server/cpp/client/main.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | CL4: export `CreateClient(host, port, password)`; version 3.0.0 |
| Engine/Client/net/mp_common/MpClientPlugin.cpp | skymp5-server/cpp/mp_common/MpClientPlugin.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | CL3: no cwd-relative password file read (and so no viet); raw-bytes receive fallback removed, binary messages only (0005 section 6) |
| Engine/Client/net/mp_common/MpClientPlugin.h | skymp5-server/cpp/mp_common/MpClientPlugin.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | CL2: `CreateClient` takes the server password from the caller |
| Engine/Client/net/mp_common/NetworkingClient.cpp | skymp5-server/cpp/mp_common/Networking.cpp (include block rewritten; lines 19, 36-134, 317-325, 335-357) | 2849e676 | AGPL-3.0 | modified 2026-10-11 | CL1: client half of the `Networking.cpp` split, with no server code (0007 decision 4) |
| Engine/Server/addon/main.cc | skymp5-server/cpp/addon/main.cc | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/NapiHelper.h | skymp5-server/cpp/addon/NapiHelper.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/PapyrusUtils.h | skymp5-server/cpp/addon/PapyrusUtils.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/ActorNeighborsBinding.cpp | skymp5-server/cpp/addon/property_bindings/ActorNeighborsBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/ActorNeighborsBinding.h | skymp5-server/cpp/addon/property_bindings/ActorNeighborsBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/AngleBinding.cpp | skymp5-server/cpp/addon/property_bindings/AngleBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/AngleBinding.h | skymp5-server/cpp/addon/property_bindings/AngleBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/AppearanceBinding.cpp | skymp5-server/cpp/addon/property_bindings/AppearanceBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/AppearanceBinding.h | skymp5-server/cpp/addon/property_bindings/AppearanceBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/BaseDescBinding.cpp | skymp5-server/cpp/addon/property_bindings/BaseDescBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/BaseDescBinding.h | skymp5-server/cpp/addon/property_bindings/BaseDescBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/ConsoleCommandsAllowedBinding.cpp | skymp5-server/cpp/addon/property_bindings/ConsoleCommandsAllowedBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/ConsoleCommandsAllowedBinding.h | skymp5-server/cpp/addon/property_bindings/ConsoleCommandsAllowedBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/CustomPropertyBinding.cpp | skymp5-server/cpp/addon/property_bindings/CustomPropertyBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/CustomPropertyBinding.h | skymp5-server/cpp/addon/property_bindings/CustomPropertyBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/EquipmentBinding.cpp | skymp5-server/cpp/addon/property_bindings/EquipmentBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/EquipmentBinding.h | skymp5-server/cpp/addon/property_bindings/EquipmentBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/IdxBinding.cpp | skymp5-server/cpp/addon/property_bindings/IdxBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/IdxBinding.h | skymp5-server/cpp/addon/property_bindings/IdxBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/InventoryBinding.cpp | skymp5-server/cpp/addon/property_bindings/InventoryBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/InventoryBinding.h | skymp5-server/cpp/addon/property_bindings/InventoryBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/IsDeadBinding.cpp | skymp5-server/cpp/addon/property_bindings/IsDeadBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/IsDeadBinding.h | skymp5-server/cpp/addon/property_bindings/IsDeadBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/IsDisabledBinding.cpp | skymp5-server/cpp/addon/property_bindings/IsDisabledBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/IsDisabledBinding.h | skymp5-server/cpp/addon/property_bindings/IsDisabledBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/IsOnlineBinding.cpp | skymp5-server/cpp/addon/property_bindings/IsOnlineBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/IsOnlineBinding.h | skymp5-server/cpp/addon/property_bindings/IsOnlineBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/IsOpenBinding.cpp | skymp5-server/cpp/addon/property_bindings/IsOpenBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/IsOpenBinding.h | skymp5-server/cpp/addon/property_bindings/IsOpenBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/LastAnimEventBinding.cpp | skymp5-server/cpp/addon/property_bindings/LastAnimEventBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/LastAnimEventBinding.h | skymp5-server/cpp/addon/property_bindings/LastAnimEventBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/LocationalDataBinding.cpp | skymp5-server/cpp/addon/property_bindings/LocationalDataBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/LocationalDataBinding.h | skymp5-server/cpp/addon/property_bindings/LocationalDataBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/NeighborsBinding.cpp | skymp5-server/cpp/addon/property_bindings/NeighborsBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/NeighborsBinding.h | skymp5-server/cpp/addon/property_bindings/NeighborsBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/OnlinePlayersBinding.cpp | skymp5-server/cpp/addon/property_bindings/OnlinePlayersBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/OnlinePlayersBinding.h | skymp5-server/cpp/addon/property_bindings/OnlinePlayersBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/PercentagesBinding.cpp | skymp5-server/cpp/addon/property_bindings/PercentagesBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/PercentagesBinding.h | skymp5-server/cpp/addon/property_bindings/PercentagesBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/PosBinding.cpp | skymp5-server/cpp/addon/property_bindings/PosBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/PosBinding.h | skymp5-server/cpp/addon/property_bindings/PosBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/ProfileIdBinding.cpp | skymp5-server/cpp/addon/property_bindings/ProfileIdBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/ProfileIdBinding.h | skymp5-server/cpp/addon/property_bindings/ProfileIdBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/PropertyBinding.cpp | skymp5-server/cpp/addon/property_bindings/PropertyBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/PropertyBinding.h | skymp5-server/cpp/addon/property_bindings/PropertyBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/PropertyBindingFactory.cpp | skymp5-server/cpp/addon/property_bindings/PropertyBindingFactory.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/PropertyBindingFactory.h | skymp5-server/cpp/addon/property_bindings/PropertyBindingFactory.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/RespawnPercentagesBinding.cpp | skymp5-server/cpp/addon/property_bindings/RespawnPercentagesBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/RespawnPercentagesBinding.h | skymp5-server/cpp/addon/property_bindings/RespawnPercentagesBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/SpawnDelayBinding.cpp | skymp5-server/cpp/addon/property_bindings/SpawnDelayBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/SpawnDelayBinding.h | skymp5-server/cpp/addon/property_bindings/SpawnDelayBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/SpawnPointBinding.cpp | skymp5-server/cpp/addon/property_bindings/SpawnPointBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/SpawnPointBinding.h | skymp5-server/cpp/addon/property_bindings/SpawnPointBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/TemplateChainBinding.cpp | skymp5-server/cpp/addon/property_bindings/TemplateChainBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/TemplateChainBinding.h | skymp5-server/cpp/addon/property_bindings/TemplateChainBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/TypeBinding.cpp | skymp5-server/cpp/addon/property_bindings/TypeBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/TypeBinding.h | skymp5-server/cpp/addon/property_bindings/TypeBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/WorldOrCellDescBinding.cpp | skymp5-server/cpp/addon/property_bindings/WorldOrCellDescBinding.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/property_bindings/WorldOrCellDescBinding.h | skymp5-server/cpp/addon/property_bindings/WorldOrCellDescBinding.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/ScampServer.cpp | skymp5-server/cpp/addon/ScampServer.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | AD7-AD24: bots and the mock server removed (`ServerCombined` keeps the real server as its only child, so user ids are allocated as before), SweetPie formulas and `weaponStaminaModifiers`, client-JS signing, broadcast and event sources, packet history and the `_sp3*` reflection removed (0007 decision 3) |
| Engine/Server/addon/ScampServer.h | skymp5-server/cpp/addon/ScampServer.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | AD1-AD6: bots, the mock server, client-JS event sources, packet history and the `_sp3*` reflection methods removed (0007 decision 3) |
| Engine/Server/addon/ScampServerListener.cpp | skymp5-server/cpp/addon/ScampServerListener.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/addon/ScampServerListener.h | skymp5-server/cpp/addon/ScampServerListener.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/host/package.json | skymp5-server/package.json | 2849e676 | AGPL-3.0 | modified 2026-10-11 | TS8: npm in place of yarn; `build` bundles into `bin/server`; only the five runtime and three build packages the host uses, at current versions with no deprecated package (0001); `private` and a Node 24 `engines` field |
| Engine/Server/host/ts/index.ts | skymp5-server/ts/index.ts | 2849e676 | AGPL-3.0 | modified 2026-10-11 | TS1: no master, Discord or balance systems and no manifest generation (0007 decision 3); no `source-map-support` (Node's `--enable-source-maps`); dead ChakraCore retry loop and empty `customPacket` handler removed; `devOfflineLogin` passed to the login system |
| Engine/Server/host/ts/scampNative.ts | skymp5-server/ts/scampNative.ts | 2849e676 | AGPL-3.0 | modified 2026-10-11 | TS2: loads `scam_native.node` from the bundle's folder, not the working directory, so `bin/server` and the run folder can differ; `Bot`, `createBot` and `executeJavaScriptOnChakra` removed |
| Engine/Server/host/ts/settings.ts | skymp5-server/ts/settings.ts | 2849e676 | AGPL-3.0 | modified 2026-10-11 | TS3: reads only `server-settings.json`; no GitHub settings overlay, merge or settings files written (0007 decision 3); adds `devOfflineLogin`, off by default (0005 A3) |
| Engine/Server/host/ts/systems/login.ts | skymp5-server/ts/systems/login.ts | 2849e676 | AGPL-3.0 | modified 2026-10-11 | TS5: dev login only: with `devOfflineLogin` on, a numeric `profileId` logs in; any other login is refused and the user kicked until the token login of 0006 exists; no master session lookup or Discord calls |
| Engine/Server/host/ts/systems/metricsSystem.ts | skymp5-server/ts/systems/metricsSystem.ts | 2849e676 | AGPL-3.0 | modified 2026-10-11 | TS7: `@prometheus-io/client`, the renamed successor of the deprecated `prom-client`; `/rpc` metrics removed with `/rpc` |
| Engine/Server/host/ts/systems/spawn.ts | skymp5-server/ts/systems/spawn.ts | 2849e676 | AGPL-3.0 | modified 2026-10-11 | TS6: Discord roles and index removed; the spawn listener is no longer exposed to the gamemode as `_onSpawnAllowed` |
| Engine/Server/host/ts/systems/system.ts | skymp5-server/ts/systems/system.ts | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/host/ts/ui.ts | skymp5-server/ts/ui.ts | 2849e676 | AGPL-3.0 | modified 2026-10-11 | TS4: serves only `/metrics` (basic auth); no static `data` folder, `/rpc`, dev proxy probe or body parser (0007 decision 3); `@koa/router` in place of the deprecated `koa-router` |
| Engine/Server/host/tsconfig.json | skymp5-server/tsconfig.json | 2849e676 | AGPL-3.0 | modified 2026-10-11 | TS9: options TypeScript 7 accepts (`module` `preserve`, `moduleResolution` `bundler`, `types` `node`, `strict` off as upstream's code needs, `noEmit`); no output folder or path mapping |
| Engine/Server/libespm/include/libespm/ACHR.h | libespm/include/libespm/ACHR.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/ACTI.h | libespm/include/libespm/ACTI.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/ActorValue.h | libespm/include/libespm/ActorValue.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/ALCH.h | libespm/include/libespm/ALCH.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/AMMO.h | libespm/include/libespm/AMMO.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/ARMO.h | libespm/include/libespm/ARMO.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/BOOK.h | libespm/include/libespm/BOOK.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/Browser.h | libespm/include/libespm/Browser.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/BrowserInfo.h | libespm/include/libespm/BrowserInfo.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/CELL.h | libespm/include/libespm/CELL.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/CellOrGridPos.h | libespm/include/libespm/CellOrGridPos.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/COBJ.h | libespm/include/libespm/COBJ.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/CombineBrowser.h | libespm/include/libespm/CombineBrowser.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/Combiner.h | libespm/include/libespm/Combiner.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/CompressedFieldsCache.h | libespm/include/libespm/CompressedFieldsCache.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/CONT.h | libespm/include/libespm/CONT.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/Convert.h | libespm/include/libespm/Convert.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/CTDA.h | libespm/include/libespm/CTDA.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/DataTypes.h | libespm/include/libespm/DataTypes.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/DOOR.h | libespm/include/libespm/DOOR.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/Effects.h | libespm/include/libespm/Effects.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/ENCH.h | libespm/include/libespm/ENCH.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/espm.h | libespm/include/libespm/espm.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/FACT.h | libespm/include/libespm/FACT.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/FieldHeader.h | libespm/include/libespm/FieldHeader.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/FLOR.h | libespm/include/libespm/FLOR.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/FLST.h | libespm/include/libespm/FLST.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/GMST.h | libespm/include/libespm/GMST.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/GroupDataInternal.h | libespm/include/libespm/GroupDataInternal.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/GroupHeader.h | libespm/include/libespm/GroupHeader.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/GroupStack.h | libespm/include/libespm/GroupStack.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/GroupType.h | libespm/include/libespm/GroupType.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/GroupUtils.h | libespm/include/libespm/GroupUtils.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/IdMapping.h | libespm/include/libespm/IdMapping.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/INGR.h | libespm/include/libespm/INGR.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/IterateFields.h | libespm/include/libespm/IterateFields.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/KYWD.h | libespm/include/libespm/KYWD.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/LCTN.h | libespm/include/libespm/LCTN.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/LeveledListBase.h | libespm/include/libespm/LeveledListBase.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/LIGH.h | libespm/include/libespm/LIGH.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/Loader.h | libespm/include/libespm/Loader.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/LookupResult.h | libespm/include/libespm/LookupResult.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/LVLI.h | libespm/include/libespm/LVLI.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/LVLN.h | libespm/include/libespm/LVLN.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/MGEF.h | libespm/include/libespm/MGEF.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/MISC.h | libespm/include/libespm/MISC.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/NAVM.h | libespm/include/libespm/NAVM.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/NavMeshKey.h | libespm/include/libespm/NavMeshKey.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/NPC_.h | libespm/include/libespm/NPC_.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/ObjectBounds.h | libespm/include/libespm/ObjectBounds.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/OTFT.h | libespm/include/libespm/OTFT.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/Property.h | libespm/include/libespm/Property.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/QUST.h | libespm/include/libespm/QUST.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/RACE.h | libespm/include/libespm/RACE.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/RecordFlags.h | libespm/include/libespm/RecordFlags.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/RecordHeader.h | libespm/include/libespm/RecordHeader.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/RecordHeaderAccess.h | libespm/include/libespm/RecordHeaderAccess.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/Records.h | libespm/include/libespm/Records.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/REFR.h | libespm/include/libespm/REFR.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/RefrKey.h | libespm/include/libespm/RefrKey.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/Script.h | libespm/include/libespm/Script.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/ScriptData.h | libespm/include/libespm/ScriptData.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/SCRL.h | libespm/include/libespm/SCRL.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/SLGM.h | libespm/include/libespm/SLGM.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/SPEL.h | libespm/include/libespm/SPEL.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/TES4.h | libespm/include/libespm/TES4.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/TREE.h | libespm/include/libespm/TREE.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/Type.h | libespm/include/libespm/Type.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/Utils.h | libespm/include/libespm/Utils.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/WEAP.h | libespm/include/libespm/WEAP.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/WRLD.h | libespm/include/libespm/WRLD.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/include/libespm/ZlibUtils.h | libespm/include/libespm/ZlibUtils.h | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/LICENSE | libespm/LICENSE | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/ACHR.cpp | libespm/src/ACHR.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/ACTI.cpp | libespm/src/ACTI.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/ALCH.cpp | libespm/src/ALCH.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/AMMO.cpp | libespm/src/AMMO.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/ARMO.cpp | libespm/src/ARMO.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/BOOK.cpp | libespm/src/BOOK.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/Browser.cpp | libespm/src/Browser.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/BrowserInfo.cpp | libespm/src/BrowserInfo.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/CELL.cpp | libespm/src/CELL.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/COBJ.cpp | libespm/src/COBJ.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/CombineBrowser.cpp | libespm/src/CombineBrowser.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/Combiner.cpp | libespm/src/Combiner.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/CompressedFieldsCache.cpp | libespm/src/CompressedFieldsCache.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/CONT.cpp | libespm/src/CONT.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/CTDA.cpp | libespm/src/CTDA.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/Effects.cpp | libespm/src/Effects.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/ENCH.cpp | libespm/src/ENCH.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/FACT.cpp | libespm/src/FACT.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/FLOR.cpp | libespm/src/FLOR.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/FLST.cpp | libespm/src/FLST.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/GMST.cpp | libespm/src/GMST.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/GroupHeader.cpp | libespm/src/GroupHeader.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/INGR.cpp | libespm/src/INGR.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/IterateFields.cpp | libespm/src/IterateFields.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/KYWD.cpp | libespm/src/KYWD.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/LCTN.cpp | libespm/src/LCTN.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/LeveledListBase.cpp | libespm/src/LeveledListBase.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/LIGH.cpp | libespm/src/LIGH.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/Loader.cpp | libespm/src/Loader.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/LookupResult.cpp | libespm/src/LookupResult.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/MGEF.cpp | libespm/src/MGEF.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/MISC.cpp | libespm/src/MISC.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/NAVM.cpp | libespm/src/NAVM.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/NavMeshKey.cpp | libespm/src/NavMeshKey.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/NPC_.cpp | libespm/src/NPC_.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/OTFT.cpp | libespm/src/OTFT.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/Property.cpp | libespm/src/Property.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/QUST.cpp | libespm/src/QUST.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/RACE.cpp | libespm/src/RACE.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/RecordHeader.cpp | libespm/src/RecordHeader.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/REFR.cpp | libespm/src/REFR.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/RefrKey.cpp | libespm/src/RefrKey.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/SCRL.cpp | libespm/src/SCRL.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/SLGM.cpp | libespm/src/SLGM.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/SPEL.cpp | libespm/src/SPEL.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/TES4.cpp | libespm/src/TES4.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/TREE.cpp | libespm/src/TREE.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/Type.cpp | libespm/src/Type.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/Utils.cpp | libespm/src/Utils.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | modified | `kCorrectHashcode` pinned to the runtime 1.7.104 masters' CRC32 (upstream pinned pre-AE files); used only by EspmTest "Hash check" |
| Engine/Server/libespm/src/WEAP.cpp | libespm/src/WEAP.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/libespm/src/WRLD.cpp | libespm/src/WRLD.cpp | 2849e676 | MIT (Engine/Server/libespm/LICENSE) | unchanged | |
| Engine/Server/localization_provider/LocalizationProvider.cpp | skymp5-server/cpp/localization_provider/LocalizationProvider.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/localization_provider/LocalizationProvider.h | skymp5-server/cpp/localization_provider/LocalizationProvider.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/mp_common/Config.h | skymp5-server/cpp/mp_common/Config.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | MP1: protocol identifier moved to `Engine/Shared/protocol/ProtocolVersion.h`; keeps `kMaxPlayers` |
| Engine/Server/mp_common/Exceptions.h | skymp5-server/cpp/mp_common/Exceptions.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/mp_common/IdManager.cpp | skymp5-server/cpp/mp_common/IdManager.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/mp_common/IdManager.h | skymp5-server/cpp/mp_common/IdManager.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/mp_common/JsonUtils.cpp | skymp5-server/cpp/mp_common/JsonUtils.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/mp_common/JsonUtils.h | skymp5-server/cpp/mp_common/JsonUtils.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/mp_common/Networking.cpp | skymp5-server/cpp/mp_common/Networking.cpp (lines 20-135, 319-325, 335-358 removed; `Config.h` and `PacketGuard.h` included) | 2849e676 | AGPL-3.0 | modified 2026-10-11 | MP2: server half of the `Networking.cpp` split (0007 decision 4) |
| Engine/Server/mp_common/NetworkingCombined.cpp | skymp5-server/cpp/mp_common/NetworkingCombined.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/mp_common/NetworkingCombined.h | skymp5-server/cpp/mp_common/NetworkingCombined.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/papyrus-vm/include/papyrus-vm/ActivePexInstance.h | papyrus-vm/include/papyrus-vm/ActivePexInstance.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/CIString.h | papyrus-vm/include/papyrus-vm/CIString.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/DebugInfo.h | papyrus-vm/include/papyrus-vm/DebugInfo.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/FunctionCode.h | papyrus-vm/include/papyrus-vm/FunctionCode.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/FunctionInfo.h | papyrus-vm/include/papyrus-vm/FunctionInfo.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/FunctionType.h | papyrus-vm/include/papyrus-vm/FunctionType.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/IGameObject.h | papyrus-vm/include/papyrus-vm/IGameObject.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/IVariablesHolder.h | papyrus-vm/include/papyrus-vm/IVariablesHolder.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/Object.h | papyrus-vm/include/papyrus-vm/Object.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/OpcodesImplementation.h | papyrus-vm/include/papyrus-vm/OpcodesImplementation.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/PexScript.h | papyrus-vm/include/papyrus-vm/PexScript.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/Reader.h | papyrus-vm/include/papyrus-vm/Reader.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/ScriptHeader.h | papyrus-vm/include/papyrus-vm/ScriptHeader.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/StringTable.h | papyrus-vm/include/papyrus-vm/StringTable.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/Structures.h | papyrus-vm/include/papyrus-vm/Structures.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/UserFlag.h | papyrus-vm/include/papyrus-vm/UserFlag.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/Utils.h | papyrus-vm/include/papyrus-vm/Utils.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/VarValue.h | papyrus-vm/include/papyrus-vm/VarValue.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/include/papyrus-vm/VirtualMachine.h | papyrus-vm/include/papyrus-vm/VirtualMachine.h | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/LICENSE | papyrus-vm/LICENSE | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/src/papyrus-vm-lib/ActivePexInstance.cpp | papyrus-vm/src/papyrus-vm-lib/ActivePexInstance.cpp | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/src/papyrus-vm-lib/IGameObject.cpp | papyrus-vm/src/papyrus-vm-lib/IGameObject.cpp | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/src/papyrus-vm-lib/OpcodesImplementation.cpp | papyrus-vm/src/papyrus-vm-lib/OpcodesImplementation.cpp | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/src/papyrus-vm-lib/Reader.cpp | papyrus-vm/src/papyrus-vm-lib/Reader.cpp | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/src/papyrus-vm-lib/Utils.cpp | papyrus-vm/src/papyrus-vm-lib/Utils.cpp | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/src/papyrus-vm-lib/VarValue.cpp | papyrus-vm/src/papyrus-vm-lib/VarValue.cpp | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/papyrus-vm/src/papyrus-vm-lib/VirtualMachine.cpp | papyrus-vm/src/papyrus-vm-lib/VirtualMachine.cpp | 2849e676 | MIT (Engine/Server/papyrus-vm/LICENSE) | unchanged | |
| Engine/Server/server_guest_lib/ActionListener.cpp | skymp5-server/cpp/server_guest_lib/ActionListener.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG5-SG7: hardcoded `SweetCantDrop` checks and `OnCustomEvent` removed, so clients can no longer call `mp._*` functions through a CustomEvent (0007 decision 3) |
| Engine/Server/server_guest_lib/ActionListener.h | skymp5-server/cpp/server_guest_lib/ActionListener.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG1-SG4: SweetHidePlayerNames service and the `OnCustomEvent` handler removed (0007 decision 3) |
| Engine/Server/server_guest_lib/ActiveMagicEffectsMap.cpp | skymp5-server/cpp/server_guest_lib/ActiveMagicEffectsMap.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ActiveMagicEffectsMap.h | skymp5-server/cpp/server_guest_lib/ActiveMagicEffectsMap.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ActorsMap.cpp | skymp5-server/cpp/server_guest_lib/ActorsMap.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ActorsMap.h | skymp5-server/cpp/server_guest_lib/ActorsMap.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ActorValues.cpp | skymp5-server/cpp/server_guest_lib/ActorValues.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ActorValues.h | skymp5-server/cpp/server_guest_lib/ActorValues.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/AnimationSystem.cpp | skymp5-server/cpp/server_guest_lib/AnimationSystem.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG9: `blockStart`/`blockStop` only set the block flag; `Init`, `ClearInfo` and the SweetPie stamina rules removed (0007 decision 3) |
| Engine/Server/server_guest_lib/AnimationSystem.h | skymp5-server/cpp/server_guest_lib/AnimationSystem.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG8: only the block animation callbacks remain; the SweetPie stamina rules and their state are removed (0007 decision 3) |
| Engine/Server/server_guest_lib/ChangeFormGuard.cpp | skymp5-server/cpp/server_guest_lib/ChangeFormGuard.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ChangeFormGuard.h | skymp5-server/cpp/server_guest_lib/ChangeFormGuard.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/Condition.cpp | skymp5-server/cpp/server_guest_lib/Condition.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/Condition.h | skymp5-server/cpp/server_guest_lib/Condition.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/ConditionFunction.h | skymp5-server/cpp/server_guest_lib/condition_functions/ConditionFunction.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/ConditionFunctionFactory.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/ConditionFunctionFactory.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/ConditionFunctionFactory.h | skymp5-server/cpp/server_guest_lib/condition_functions/ConditionFunctionFactory.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/ConditionFunctionMap.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/ConditionFunctionMap.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/ConditionFunctionMap.h | skymp5-server/cpp/server_guest_lib/condition_functions/ConditionFunctionMap.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetActorValuePercent.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/GetActorValuePercent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetActorValuePercent.h | skymp5-server/cpp/server_guest_lib/condition_functions/GetActorValuePercent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetEquipped.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/GetEquipped.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetEquipped.h | skymp5-server/cpp/server_guest_lib/condition_functions/GetEquipped.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetEquippedItemType.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/GetEquippedItemType.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetEquippedItemType.h | skymp5-server/cpp/server_guest_lib/condition_functions/GetEquippedItemType.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetIsPlayableRace.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/GetIsPlayableRace.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetIsPlayableRace.h | skymp5-server/cpp/server_guest_lib/condition_functions/GetIsPlayableRace.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetIsRace.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/GetIsRace.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetIsRace.h | skymp5-server/cpp/server_guest_lib/condition_functions/GetIsRace.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetItemCount.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/GetItemCount.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/GetItemCount.h | skymp5-server/cpp/server_guest_lib/condition_functions/GetItemCount.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/HasSpell.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/HasSpell.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/HasSpell.h | skymp5-server/cpp/server_guest_lib/condition_functions/HasSpell.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/IsBlocking.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/IsBlocking.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/IsBlocking.h | skymp5-server/cpp/server_guest_lib/condition_functions/IsBlocking.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/IsInInterior.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/IsInInterior.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/IsInInterior.h | skymp5-server/cpp/server_guest_lib/condition_functions/IsInInterior.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/IsWeaponMagicOut.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/IsWeaponMagicOut.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/IsWeaponMagicOut.h | skymp5-server/cpp/server_guest_lib/condition_functions/IsWeaponMagicOut.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/IsWeaponOut.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/IsWeaponOut.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/IsWeaponOut.h | skymp5-server/cpp/server_guest_lib/condition_functions/IsWeaponOut.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/SkympGetDamageSourceHasKeyword.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/SkympGetDamageSourceHasKeyword.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/SkympGetDamageSourceHasKeyword.h | skymp5-server/cpp/server_guest_lib/condition_functions/SkympGetDamageSourceHasKeyword.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/SkympGetIsDamageSource.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/SkympGetIsDamageSource.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/SkympGetIsDamageSource.h | skymp5-server/cpp/server_guest_lib/condition_functions/SkympGetIsDamageSource.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/SkympWornHasKeywordCount.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/SkympWornHasKeywordCount.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/SkympWornHasKeywordCount.h | skymp5-server/cpp/server_guest_lib/condition_functions/SkympWornHasKeywordCount.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/SpellHasKeyword.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/SpellHasKeyword.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/SpellHasKeyword.h | skymp5-server/cpp/server_guest_lib/condition_functions/SpellHasKeyword.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/WornApparelHasKeywordCount.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/WornApparelHasKeywordCount.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/WornApparelHasKeywordCount.h | skymp5-server/cpp/server_guest_lib/condition_functions/WornApparelHasKeywordCount.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/WornHasKeyword.cpp | skymp5-server/cpp/server_guest_lib/condition_functions/WornHasKeyword.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/condition_functions/WornHasKeyword.h | skymp5-server/cpp/server_guest_lib/condition_functions/WornHasKeyword.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ConditionsEvaluator.cpp | skymp5-server/cpp/server_guest_lib/ConditionsEvaluator.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ConditionsEvaluator.h | skymp5-server/cpp/server_guest_lib/ConditionsEvaluator.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ConsoleCommands.cpp | skymp5-server/cpp/server_guest_lib/ConsoleCommands.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ConsoleCommands.h | skymp5-server/cpp/server_guest_lib/ConsoleCommands.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/CraftService.cpp | skymp5-server/cpp/server_guest_lib/CraftService.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/CraftService.h | skymp5-server/cpp/server_guest_lib/CraftService.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/CropRegeneration.cpp | skymp5-server/cpp/server_guest_lib/CropRegeneration.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/CropRegeneration.h | skymp5-server/cpp/server_guest_lib/CropRegeneration.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/database_drivers/DatabaseFactory.cpp | skymp5-server/cpp/server_guest_lib/database_drivers/DatabaseFactory.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG37: `zip` and `migration` drivers removed (0007 decision 3) |
| Engine/Server/server_guest_lib/database_drivers/DatabaseFactory.h | skymp5-server/cpp/server_guest_lib/database_drivers/DatabaseFactory.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/database_drivers/FileDatabase.cpp | skymp5-server/cpp/server_guest_lib/database_drivers/FileDatabase.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/database_drivers/FileDatabase.h | skymp5-server/cpp/server_guest_lib/database_drivers/FileDatabase.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/database_drivers/MongoDatabase.cpp | skymp5-server/cpp/server_guest_lib/database_drivers/MongoDatabase.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/database_drivers/MongoDatabase.h | skymp5-server/cpp/server_guest_lib/database_drivers/MongoDatabase.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/database_drivers/utils/JsonSanitizer.cpp | skymp5-server/cpp/server_guest_lib/database_drivers/utils/JsonSanitizer.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/database_drivers/utils/JsonSanitizer.h | skymp5-server/cpp/server_guest_lib/database_drivers/utils/JsonSanitizer.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/DSLine.h | skymp5-server/cpp/server_guest_lib/DSLine.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/DynamicFields.cpp | skymp5-server/cpp/server_guest_lib/DynamicFields.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/DynamicFields.h | skymp5-server/cpp/server_guest_lib/DynamicFields.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/EvaluateTemplate.h | skymp5-server/cpp/server_guest_lib/EvaluateTemplate.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/Faction.h | skymp5-server/cpp/server_guest_lib/Faction.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/FormCallbacks.h | skymp5-server/cpp/server_guest_lib/FormCallbacks.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/FormDesc.cpp | skymp5-server/cpp/server_guest_lib/FormDesc.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/FormDesc.h | skymp5-server/cpp/server_guest_lib/FormDesc.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/FormIndex.h | skymp5-server/cpp/server_guest_lib/FormIndex.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/formulas/DamageMultConditionalFormula.cpp | skymp5-server/cpp/server_guest_lib/formulas/DamageMultConditionalFormula.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/formulas/DamageMultConditionalFormula.h | skymp5-server/cpp/server_guest_lib/formulas/DamageMultConditionalFormula.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/formulas/DamageMultFormula.cpp | skymp5-server/cpp/server_guest_lib/formulas/DamageMultFormula.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/formulas/DamageMultFormula.h | skymp5-server/cpp/server_guest_lib/formulas/DamageMultFormula.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/formulas/IDamageFormula.h | skymp5-server/cpp/server_guest_lib/formulas/IDamageFormula.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/formulas/TES5DamageFormula.cpp | skymp5-server/cpp/server_guest_lib/formulas/TES5DamageFormula.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/formulas/TES5DamageFormula.h | skymp5-server/cpp/server_guest_lib/formulas/TES5DamageFormula.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/ActivateEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/ActivateEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/ActivateEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/ActivateEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/CraftEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/CraftEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/CraftEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/CraftEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/DeathEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/DeathEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/DeathEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/DeathEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/DropItemEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/DropItemEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/DropItemEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/DropItemEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/EatItemEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/EatItemEvent.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG30: SweetPie switch removed (0007 decision 3) |
| Engine/Server/server_guest_lib/gamemode_events/EatItemEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/EatItemEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/GameModeEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/GameModeEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/GameModeEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/GameModeEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/PapyrusEventEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/PapyrusEventEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/PapyrusEventEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/PapyrusEventEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/PutItemEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/PutItemEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/PutItemEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/PutItemEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/ReadBookEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/ReadBookEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/ReadBookEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/ReadBookEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/RespawnEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/RespawnEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/RespawnEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/RespawnEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/TakeItemEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/TakeItemEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/TakeItemEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/TakeItemEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/UpdateAppearanceAttemptEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/UpdateAppearanceAttemptEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/UpdateAppearanceAttemptEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/UpdateAppearanceAttemptEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/UpdateEquipmentAttemptEvent.cpp | skymp5-server/cpp/server_guest_lib/gamemode_events/UpdateEquipmentAttemptEvent.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/gamemode_events/UpdateEquipmentAttemptEvent.h | skymp5-server/cpp/server_guest_lib/gamemode_events/UpdateEquipmentAttemptEvent.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/GamemodeApi.h | skymp5-server/cpp/server_guest_lib/GamemodeApi.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG36: client-JS fields (`updateOwner`, `updateNeighbor`, event sources) removed (0007 decision 3) |
| Engine/Server/server_guest_lib/GetBaseActorValues.cpp | skymp5-server/cpp/server_guest_lib/GetBaseActorValues.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/GetBaseActorValues.h | skymp5-server/cpp/server_guest_lib/GetBaseActorValues.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/GetWeightFromRecord.cpp | skymp5-server/cpp/server_guest_lib/GetWeightFromRecord.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/GetWeightFromRecord.h | skymp5-server/cpp/server_guest_lib/GetWeightFromRecord.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/Grid.h | skymp5-server/cpp/server_guest_lib/Grid.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/GridElement.h | skymp5-server/cpp/server_guest_lib/GridElement.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/HitData.h | skymp5-server/cpp/server_guest_lib/HitData.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/LeveledListUtils.cpp | skymp5-server/cpp/server_guest_lib/LeveledListUtils.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/LeveledListUtils.h | skymp5-server/cpp/server_guest_lib/LeveledListUtils.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/LocationalData.h | skymp5-server/cpp/server_guest_lib/LocationalData.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/LocationalDataUtils.cpp | skymp5-server/cpp/server_guest_lib/LocationalDataUtils.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/LocationalDataUtils.h | skymp5-server/cpp/server_guest_lib/LocationalDataUtils.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/MathUtils.cpp | skymp5-server/cpp/server_guest_lib/MathUtils.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/MathUtils.h | skymp5-server/cpp/server_guest_lib/MathUtils.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/MovementValidation.cpp | skymp5-server/cpp/server_guest_lib/MovementValidation.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/MovementValidation.h | skymp5-server/cpp/server_guest_lib/MovementValidation.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/MpActor.cpp | skymp5-server/cpp/server_guest_lib/MpActor.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG25-SG29: SweetPie switches removed (potion magnitude x100, `SweetCantDrop` items kept on respawn); a respawn with a death item clears the whole inventory (0007 decision 3) |
| Engine/Server/server_guest_lib/MpActor.h | skymp5-server/cpp/server_guest_lib/MpActor.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG24: `hasSweetpie` parameters removed (0007 decision 3) |
| Engine/Server/server_guest_lib/MpChangeForms.cpp | skymp5-server/cpp/server_guest_lib/MpChangeForms.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/MpChangeForms.h | skymp5-server/cpp/server_guest_lib/MpChangeForms.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/MpForm.cpp | skymp5-server/cpp/server_guest_lib/MpForm.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/MpForm.h | skymp5-server/cpp/server_guest_lib/MpForm.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/MpObjectReference.cpp | skymp5-server/cpp/server_guest_lib/MpObjectReference.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG31, SG32: uses the geo rewrite; the exterior vanilla-script strip and the hardcoded script blacklist removed (0007 decisions 3 and 5) |
| Engine/Server/server_guest_lib/MpObjectReference.h | skymp5-server/cpp/server_guest_lib/MpObjectReference.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/NiPoint3.h | skymp5-server/cpp/server_guest_lib/NiPoint3.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/PacketParser.cpp | skymp5-server/cpp/server_guest_lib/PacketParser.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG21-SG23: JSON packet warning and the CustomEvent case removed; binary messages only (0007 decision 3) |
| Engine/Server/server_guest_lib/PacketParser.h | skymp5-server/cpp/server_guest_lib/PacketParser.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/PartOne.cpp | skymp5-server/cpp/server_guest_lib/PartOne.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG11-SG19: client-JS signing, `UpdateGameModeData` sends and packet history removed; `NotifyGamemodeApiStateChanged` only stores the state (0007 decision 3) |
| Engine/Server/server_guest_lib/PartOne.h | skymp5-server/cpp/server_guest_lib/PartOne.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG10: client-JS signing, the gamemode data broadcast switch and packet history removed (0007 decision 3) |
| Engine/Server/server_guest_lib/PartOneListener.h | skymp5-server/cpp/server_guest_lib/PartOneListener.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/Primitive.cpp | skymp5-server/cpp/server_guest_lib/Primitive.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG35: `geo::ConvexPolyhedron` in place of `GeoProc::GeoPolygonProc`; no `reinterpret_cast` of the vertex vector and no `const_cast` (0007 decision 5) |
| Engine/Server/server_guest_lib/Primitive.h | skymp5-server/cpp/server_guest_lib/Primitive.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG34: `geo::ConvexPolyhedron` (clean rewrite) in place of `GeoProc::GeoPolygonProc`; function names kept (0007 decision 5) |
| Engine/Server/server_guest_lib/Quest.h | skymp5-server/cpp/server_guest_lib/Quest.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/RawMessageData.h | skymp5-server/cpp/server_guest_lib/RawMessageData.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/IPapyrusClass.cpp | skymp5-server/cpp/server_guest_lib/script_classes/IPapyrusClass.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/IPapyrusClass.h | skymp5-server/cpp/server_guest_lib/script_classes/IPapyrusClass.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusActor.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusActor.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusActor.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusActor.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusBook.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusBook.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusBook.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusBook.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusCell.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusCell.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusCell.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusCell.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusClassesFactory.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusClassesFactory.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusClassesFactory.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusClassesFactory.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusDebug.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusDebug.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusDebug.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusDebug.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusEffectBase.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusEffectBase.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusEffectBase.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusEffectBase.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusEffectShader.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusEffectShader.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusEffectShader.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusEffectShader.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusFaction.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusFaction.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusFaction.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusFaction.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusForm.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusForm.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusForm.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusForm.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusFormList.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusFormList.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusFormList.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusFormList.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusGame.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusGame.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusGame.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusGame.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusKeyword.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusKeyword.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusKeyword.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusKeyword.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusLeveledActor.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusLeveledActor.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusLeveledActor.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusLeveledActor.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusLeveledBase.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusLeveledBase.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusLeveledBase.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusLeveledBase.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusLeveledItem.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusLeveledItem.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusLeveledItem.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusLeveledItem.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusLeveledSpell.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusLeveledSpell.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusLeveledSpell.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusLeveledSpell.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusMessage.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusMessage.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusMessage.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusMessage.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusNetImmerse.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusNetImmerse.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusNetImmerse.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusNetImmerse.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusObjectReference.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusObjectReference.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusObjectReference.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusObjectReference.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusPotion.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusPotion.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusPotion.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusPotion.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusQuest.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusQuest.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusQuest.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusQuest.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusSkymp.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusSkymp.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusSkymp.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusSkymp.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusSound.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusSound.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusSound.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusSound.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusUtility.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusUtility.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusUtility.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusUtility.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusVisualEffect.cpp | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusVisualEffect.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_classes/PapyrusVisualEffect.h | skymp5-server/cpp/server_guest_lib/script_classes/PapyrusVisualEffect.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_compatibility_policies/HeuristicPolicy.cpp | skymp5-server/cpp/server_guest_lib/script_compatibility_policies/HeuristicPolicy.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_compatibility_policies/HeuristicPolicy.h | skymp5-server/cpp/server_guest_lib/script_compatibility_policies/HeuristicPolicy.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_compatibility_policies/IPapyrusCompatibilityPolicy.h | skymp5-server/cpp/server_guest_lib/script_compatibility_policies/IPapyrusCompatibilityPolicy.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_compatibility_policies/PapyrusCompatibilityPolicyFactory.cpp | skymp5-server/cpp/server_guest_lib/script_compatibility_policies/PapyrusCompatibilityPolicyFactory.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_compatibility_policies/PapyrusCompatibilityPolicyFactory.h | skymp5-server/cpp/server_guest_lib/script_compatibility_policies/PapyrusCompatibilityPolicyFactory.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_objects/EspmGameObject.cpp | skymp5-server/cpp/server_guest_lib/script_objects/EspmGameObject.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_objects/EspmGameObject.h | skymp5-server/cpp/server_guest_lib/script_objects/EspmGameObject.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_objects/MpFormGameObject.cpp | skymp5-server/cpp/server_guest_lib/script_objects/MpFormGameObject.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_objects/MpFormGameObject.h | skymp5-server/cpp/server_guest_lib/script_objects/MpFormGameObject.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/AssetsScriptStorage.cpp | skymp5-server/cpp/server_guest_lib/script_storages/AssetsScriptStorage.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/AssetsScriptStorage.h | skymp5-server/cpp/server_guest_lib/script_storages/AssetsScriptStorage.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/BsaArchiveScriptStorage.cpp | skymp5-server/cpp/server_guest_lib/script_storages/BsaArchiveScriptStorage.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/BsaArchiveScriptStorage.h | skymp5-server/cpp/server_guest_lib/script_storages/BsaArchiveScriptStorage.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/CombinedScriptStorage.cpp | skymp5-server/cpp/server_guest_lib/script_storages/CombinedScriptStorage.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/CombinedScriptStorage.h | skymp5-server/cpp/server_guest_lib/script_storages/CombinedScriptStorage.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/DirectoryScriptStorage.cpp | skymp5-server/cpp/server_guest_lib/script_storages/DirectoryScriptStorage.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/DirectoryScriptStorage.h | skymp5-server/cpp/server_guest_lib/script_storages/DirectoryScriptStorage.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/IScriptStorage.h | skymp5-server/cpp/server_guest_lib/script_storages/IScriptStorage.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/ScriptStorageFactory.cpp | skymp5-server/cpp/server_guest_lib/script_storages/ScriptStorageFactory.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG39: a missing `<dataDir>/scripts` folder is skipped instead of failing at start (plan F4) |
| Engine/Server/server_guest_lib/script_storages/ScriptStorageFactory.h | skymp5-server/cpp/server_guest_lib/script_storages/ScriptStorageFactory.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/ScriptStorageUtils.cpp | skymp5-server/cpp/server_guest_lib/script_storages/ScriptStorageUtils.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/script_storages/ScriptStorageUtils.h | skymp5-server/cpp/server_guest_lib/script_storages/ScriptStorageUtils.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ScriptVariablesHolder.cpp | skymp5-server/cpp/server_guest_lib/ScriptVariablesHolder.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ScriptVariablesHolder.h | skymp5-server/cpp/server_guest_lib/ScriptVariablesHolder.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ServerState.cpp | skymp5-server/cpp/server_guest_lib/ServerState.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/ServerState.h | skymp5-server/cpp/server_guest_lib/ServerState.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG20: packet history and playback state removed (0007 decision 3) |
| Engine/Server/server_guest_lib/SpellCastData.h | skymp5-server/cpp/server_guest_lib/SpellCastData.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/SpSnippet.cpp | skymp5-server/cpp/server_guest_lib/SpSnippet.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/SpSnippet.h | skymp5-server/cpp/server_guest_lib/SpSnippet.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/SpSnippetFunctionGen.cpp | skymp5-server/cpp/server_guest_lib/SpSnippetFunctionGen.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/SpSnippetFunctionGen.h | skymp5-server/cpp/server_guest_lib/SpSnippetFunctionGen.h | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/WorldState.cpp | skymp5-server/cpp/server_guest_lib/WorldState.cpp | 2849e676 | AGPL-3.0 | unchanged |  |
| Engine/Server/server_guest_lib/WorldState.h | skymp5-server/cpp/server_guest_lib/WorldState.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | SG33: `disableVanillaScriptsInExterior` removed with the strip (0007 decision 3) |
| Engine/Server/standard_scripts/acousticspace.pex | skymp5-server/standard_scripts/acousticspace.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/action.pex | skymp5-server/standard_scripts/action.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/activator.pex | skymp5-server/standard_scripts/activator.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/actor.pex | skymp5-server/standard_scripts/actor.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/actorbase.pex | skymp5-server/standard_scripts/actorbase.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/actorvalueinfo.pex | skymp5-server/standard_scripts/actorvalueinfo.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/addonnode.pex | skymp5-server/standard_scripts/addonnode.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/ammo.pex | skymp5-server/standard_scripts/ammo.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/anio.pex | skymp5-server/standard_scripts/anio.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/apparatus.pex | skymp5-server/standard_scripts/apparatus.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/arma.pex | skymp5-server/standard_scripts/arma.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/armor.pex | skymp5-server/standard_scripts/armor.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/arrow.pex | skymp5-server/standard_scripts/arrow.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/art.pex | skymp5-server/standard_scripts/art.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/associationtype.pex | skymp5-server/standard_scripts/associationtype.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/barrierproj.pex | skymp5-server/standard_scripts/barrierproj.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/bodypartdata.pex | skymp5-server/standard_scripts/bodypartdata.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/book.pex | skymp5-server/standard_scripts/book.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/camerapath.pex | skymp5-server/standard_scripts/camerapath.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/camerashot.pex | skymp5-server/standard_scripts/camerashot.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/cell.pex | skymp5-server/standard_scripts/cell.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/class.pex | skymp5-server/standard_scripts/class.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/climate.pex | skymp5-server/standard_scripts/climate.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/collisionlayer.pex | skymp5-server/standard_scripts/collisionlayer.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/colorform.pex | skymp5-server/standard_scripts/colorform.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/combatstyle.pex | skymp5-server/standard_scripts/combatstyle.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/coneproj.pex | skymp5-server/standard_scripts/coneproj.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/constructibleobject.pex | skymp5-server/standard_scripts/constructibleobject.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/container.pex | skymp5-server/standard_scripts/container.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/debris.pex | skymp5-server/standard_scripts/debris.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/dialoguebranch.pex | skymp5-server/standard_scripts/dialoguebranch.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/dlvw.pex | skymp5-server/standard_scripts/dlvw.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/dobj.pex | skymp5-server/standard_scripts/dobj.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/door.pex | skymp5-server/standard_scripts/door.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/dualcastdata.pex | skymp5-server/standard_scripts/dualcastdata.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/effectshader.pex | skymp5-server/standard_scripts/effectshader.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/enchantment.pex | skymp5-server/standard_scripts/enchantment.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/encounterzone.pex | skymp5-server/standard_scripts/encounterzone.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/equipslot.pex | skymp5-server/standard_scripts/equipslot.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/explosion.pex | skymp5-server/standard_scripts/explosion.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/eyes.pex | skymp5-server/standard_scripts/eyes.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/faction.pex | skymp5-server/standard_scripts/faction.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/flameproj.pex | skymp5-server/standard_scripts/flameproj.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/flora.pex | skymp5-server/standard_scripts/flora.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/footstep.pex | skymp5-server/standard_scripts/footstep.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/footstepset.pex | skymp5-server/standard_scripts/footstepset.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/form.pex | skymp5-server/standard_scripts/form.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/formlist.pex | skymp5-server/standard_scripts/formlist.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/furniture.pex | skymp5-server/standard_scripts/furniture.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/globalvariable.pex | skymp5-server/standard_scripts/globalvariable.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/gmst.pex | skymp5-server/standard_scripts/gmst.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/grass.pex | skymp5-server/standard_scripts/grass.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/grenade.pex | skymp5-server/standard_scripts/grenade.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/group.pex | skymp5-server/standard_scripts/group.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/hazard.pex | skymp5-server/standard_scripts/hazard.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/headpart.pex | skymp5-server/standard_scripts/headpart.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/idle.pex | skymp5-server/standard_scripts/idle.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/idlemarker.pex | skymp5-server/standard_scripts/idlemarker.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/imagespace.pex | skymp5-server/standard_scripts/imagespace.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/imagespacemodifier.pex | skymp5-server/standard_scripts/imagespacemodifier.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/impactdata.pex | skymp5-server/standard_scripts/impactdata.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/impactdataset.pex | skymp5-server/standard_scripts/impactdataset.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/ingredient.pex | skymp5-server/standard_scripts/ingredient.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/key.pex | skymp5-server/standard_scripts/key.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/keyword.pex | skymp5-server/standard_scripts/keyword.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/land.pex | skymp5-server/standard_scripts/land.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/landtexture.pex | skymp5-server/standard_scripts/landtexture.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/leveledcharacter.pex | skymp5-server/standard_scripts/leveledcharacter.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/leveleditem.pex | skymp5-server/standard_scripts/leveleditem.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/leveledspell.pex | skymp5-server/standard_scripts/leveledspell.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/light.pex | skymp5-server/standard_scripts/light.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/lightingtemplate.pex | skymp5-server/standard_scripts/lightingtemplate.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/loadscreen.pex | skymp5-server/standard_scripts/loadscreen.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/location.pex | skymp5-server/standard_scripts/location.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/locationref.pex | skymp5-server/standard_scripts/locationref.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/magiceffect.pex | skymp5-server/standard_scripts/magiceffect.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/material.pex | skymp5-server/standard_scripts/material.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/materialtype.pex | skymp5-server/standard_scripts/materialtype.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/menuicon.pex | skymp5-server/standard_scripts/menuicon.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/message.pex | skymp5-server/standard_scripts/message.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/miscobject.pex | skymp5-server/standard_scripts/miscobject.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/missile.pex | skymp5-server/standard_scripts/missile.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/movablestatic.pex | skymp5-server/standard_scripts/movablestatic.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/movementtype.pex | skymp5-server/standard_scripts/movementtype.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/musictrack.pex | skymp5-server/standard_scripts/musictrack.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/musictype.pex | skymp5-server/standard_scripts/musictype.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/navi.pex | skymp5-server/standard_scripts/navi.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/navm.pex | skymp5-server/standard_scripts/navm.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/neamproj.pex | skymp5-server/standard_scripts/neamproj.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/note.pex | skymp5-server/standard_scripts/note.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/objectreference.pex | skymp5-server/standard_scripts/objectreference.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/outfit.pex | skymp5-server/standard_scripts/outfit.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/package.pex | skymp5-server/standard_scripts/package.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/Perk.pex | skymp5-server/standard_scripts/Perk.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/potion.pex | skymp5-server/standard_scripts/potion.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/projectile.pex | skymp5-server/standard_scripts/projectile.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/quest.pex | skymp5-server/standard_scripts/quest.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/race.pex | skymp5-server/standard_scripts/race.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/ragdoll.pex | skymp5-server/standard_scripts/ragdoll.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/referenceeffect.pex | skymp5-server/standard_scripts/referenceeffect.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/region.pex | skymp5-server/standard_scripts/region.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/relationship.pex | skymp5-server/standard_scripts/relationship.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/reverbparam.pex | skymp5-server/standard_scripts/reverbparam.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/scene.pex | skymp5-server/standard_scripts/scene.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/script.pex | skymp5-server/standard_scripts/script.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/scrollitem.pex | skymp5-server/standard_scripts/scrollitem.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/shout.pex | skymp5-server/standard_scripts/shout.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/skill.pex | skymp5-server/standard_scripts/skill.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/soulgem.pex | skymp5-server/standard_scripts/soulgem.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/sound.pex | skymp5-server/standard_scripts/sound.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/soundcategory.pex | skymp5-server/standard_scripts/soundcategory.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/sounddescriptor.pex | skymp5-server/standard_scripts/sounddescriptor.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/soundoutput.pex | skymp5-server/standard_scripts/soundoutput.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/spell.pex | skymp5-server/standard_scripts/spell.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/spgd.pex | skymp5-server/standard_scripts/spgd.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/static.pex | skymp5-server/standard_scripts/static.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/staticxollection.pex | skymp5-server/standard_scripts/staticxollection.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/storybranchnode.pex | skymp5-server/standard_scripts/storybranchnode.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/storyeventnode.pex | skymp5-server/standard_scripts/storyeventnode.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/storyquestnode.pex | skymp5-server/standard_scripts/storyquestnode.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/talkingactivator.pex | skymp5-server/standard_scripts/talkingactivator.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/textureset.pex | skymp5-server/standard_scripts/textureset.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/tlod.pex | skymp5-server/standard_scripts/tlod.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/toft.pex | skymp5-server/standard_scripts/toft.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/topic.pex | skymp5-server/standard_scripts/topic.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/topicinfo.pex | skymp5-server/standard_scripts/topicinfo.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/tree.pex | skymp5-server/standard_scripts/tree.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/voicetype.pex | skymp5-server/standard_scripts/voicetype.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/water.pex | skymp5-server/standard_scripts/water.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/weapon.pex | skymp5-server/standard_scripts/weapon.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/weather.pex | skymp5-server/standard_scripts/weather.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/wordofpower.pex | skymp5-server/standard_scripts/wordofpower.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Server/standard_scripts/worldspace.pex | skymp5-server/standard_scripts/worldspace.pex | 2849e676 | AGPL-3.0 | unchanged | skymp-authored Papyrus stub (not Bethesda bytecode), embedded as the last script source (0007 decision 6, addendum A2) |
| Engine/Shared/protocol/messages/ActivateMessage.h | skymp5-server/cpp/messages/ActivateMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/ChangeValuesMessage.h | skymp5-server/cpp/messages/ChangeValuesMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/ConsoleCommandMessage.h | skymp5-server/cpp/messages/ConsoleCommandMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/CraftItemMessage.h | skymp5-server/cpp/messages/CraftItemMessage.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR1: includes `Inventory.h` from `../wire_types/` (wire types moved into the protocol, 0007 decision 4) |
| Engine/Shared/protocol/messages/CreateActorMessage.h | skymp5-server/cpp/messages/CreateActorMessage.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR2: includes `AnimationData.h`, `Appearance.h`, `Equipment.h`, `Inventory.h` from `../wire_types/` (0007 decision 4) |
| Engine/Shared/protocol/messages/CustomPacketMessage.h | skymp5-server/cpp/messages/CustomPacketMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/DeathStateContainerMessage.h | skymp5-server/cpp/messages/DeathStateContainerMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/DestroyActorMessage.h | skymp5-server/cpp/messages/DestroyActorMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/DropItemMessage.h | skymp5-server/cpp/messages/DropItemMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/FinishSpSnippetMessage.h | skymp5-server/cpp/messages/FinishSpSnippetMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/HitMessage.h | skymp5-server/cpp/messages/HitMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/HostMessage.h | skymp5-server/cpp/messages/HostMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/HostStartMessage.h | skymp5-server/cpp/messages/HostStartMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/HostStopMessage.h | skymp5-server/cpp/messages/HostStopMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/MessageBase.h | skymp5-server/cpp/messages/MessageBase.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/Messages.h | skymp5-server/cpp/messages/Messages.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR9: `CustomEventMessage` and `UpdateGameModeDataMessage` includes and registrations removed (0007 decision 3) |
| Engine/Shared/protocol/messages/MessageSerializerFactory.cpp | skymp5-server/cpp/messages/MessageSerializerFactory.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR12-PR14: JSON input is no longer parsed (a `{` type byte is rejected), and JSON with no serializer throws instead of going on the wire raw (0007 decision 3) |
| Engine/Shared/protocol/messages/MessageSerializerFactory.h | skymp5-server/cpp/messages/MessageSerializerFactory.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR11: `DeserializeInputFormat` and `DeserializeResult::format` removed; only binary input remains (0007 decision 3) |
| Engine/Shared/protocol/messages/MinPacketId.h | skymp5-server/cpp/messages/MinPacketId.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/MsgType.h | skymp5-server/cpp/messages/MsgType.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR10: `CustomEvent = 15` and `UpdateGamemodeData = 32` removed; the other values are unchanged (0007 decision 3) |
| Engine/Shared/protocol/messages/OnEquipMessage.h | skymp5-server/cpp/messages/OnEquipMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/OpenContainerMessage.h | skymp5-server/cpp/messages/OpenContainerMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/PlayerBowShotMessage.h | skymp5-server/cpp/messages/PlayerBowShotMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/PutItemMessage.h | skymp5-server/cpp/messages/PutItemMessage.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR3: includes `Inventory.h` from `../wire_types/` (0007 decision 4) |
| Engine/Shared/protocol/messages/SetInventoryMessage.h | skymp5-server/cpp/messages/SetInventoryMessage.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR4: includes `Inventory.h` from `../wire_types/` (0007 decision 4) |
| Engine/Shared/protocol/messages/SetRaceMenuOpenMessage.h | skymp5-server/cpp/messages/SetRaceMenuOpenMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/SpellCastMessage.h | skymp5-server/cpp/messages/SpellCastMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/SpSnippetMessage.h | skymp5-server/cpp/messages/SpSnippetMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/TakeItemMessage.h | skymp5-server/cpp/messages/TakeItemMessage.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR5: includes `Inventory.h` from `../wire_types/` (0007 decision 4) |
| Engine/Shared/protocol/messages/TeleportMessage.h | skymp5-server/cpp/messages/TeleportMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/TeleportMessage2.h | skymp5-server/cpp/messages/TeleportMessage2.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/UpdateAnimationMessage.h | skymp5-server/cpp/messages/UpdateAnimationMessage.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR6: includes `AnimationData.h` from `../wire_types/` (0007 decision 4) |
| Engine/Shared/protocol/messages/UpdateAnimVariablesMessage.h | skymp5-server/cpp/messages/UpdateAnimVariablesMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/UpdateAppearanceMessage.h | skymp5-server/cpp/messages/UpdateAppearanceMessage.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR7: includes `Appearance.h` from `../wire_types/` (0007 decision 4) |
| Engine/Shared/protocol/messages/UpdateEquipmentMessage.h | skymp5-server/cpp/messages/UpdateEquipmentMessage.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR8: includes `Equipment.h` from `../wire_types/` (0007 decision 4) |
| Engine/Shared/protocol/messages/UpdateMovementMessage.h | skymp5-server/cpp/messages/UpdateMovementMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/messages/UpdatePropertyMessage.h | skymp5-server/cpp/messages/UpdatePropertyMessage.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/mp_common/Networking.h | skymp5-server/cpp/mp_common/Networking.h | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR16: includes `ProtocolVersion.h` instead of `Config.h` (protocol identifier `sug1_`, 0007 decision 4) |
| Engine/Shared/protocol/mp_common/NetworkingInterface.h | skymp5-server/cpp/mp_common/NetworkingInterface.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/mp_common/PacketGuard.h | skymp5-server/cpp/mp_common/Networking.cpp (lines 20-34; `#pragma once` and `#include "RakNet.h"` added) | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR17: `PacketGuard` split out of `Networking.cpp` so the client and server halves share it |
| Engine/Shared/protocol/mp_common/RakNet.h | skymp5-server/cpp/mp_common/RakNet.h | 2849e676 | AGPL-3.0 | unchanged | |
| Engine/Shared/protocol/wire_types/AnimationData.cpp | skymp5-server/cpp/server_guest_lib/AnimationData.cpp | 2849e676 | AGPL-3.0 | unchanged | moved from server_guest_lib into the protocol (0007 decision 4) |
| Engine/Shared/protocol/wire_types/AnimationData.h | skymp5-server/cpp/server_guest_lib/AnimationData.h | 2849e676 | AGPL-3.0 | unchanged | moved from server_guest_lib into the protocol (0007 decision 4) |
| Engine/Shared/protocol/wire_types/Appearance.cpp | skymp5-server/cpp/server_guest_lib/Appearance.cpp | 2849e676 | AGPL-3.0 | modified 2026-10-11 | PR15: unused `#include "JsonUtils.h"` removed (JsonUtils is server-only); moved from server_guest_lib into the protocol (0007 decision 4) |
| Engine/Shared/protocol/wire_types/Appearance.h | skymp5-server/cpp/server_guest_lib/Appearance.h | 2849e676 | AGPL-3.0 | unchanged | moved from server_guest_lib into the protocol (0007 decision 4) |
| Engine/Shared/protocol/wire_types/Equipment.cpp | skymp5-server/cpp/server_guest_lib/Equipment.cpp | 2849e676 | AGPL-3.0 | unchanged | moved from server_guest_lib into the protocol (0007 decision 4) |
| Engine/Shared/protocol/wire_types/Equipment.h | skymp5-server/cpp/server_guest_lib/Equipment.h | 2849e676 | AGPL-3.0 | unchanged | moved from server_guest_lib into the protocol (0007 decision 4) |
| Engine/Shared/protocol/wire_types/Inventory.cpp | skymp5-server/cpp/server_guest_lib/Inventory.cpp | 2849e676 | AGPL-3.0 | unchanged | moved from server_guest_lib into the protocol (0007 decision 4) |
| Engine/Shared/protocol/wire_types/Inventory.h | skymp5-server/cpp/server_guest_lib/Inventory.h | 2849e676 | AGPL-3.0 | unchanged | moved from server_guest_lib into the protocol (0007 decision 4) |
| Engine/Shared/serialization/include/archives/BitStreamInputArchive.h | serialization/include/archives/BitStreamInputArchive.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/archives/BitStreamOutputArchive.h | serialization/include/archives/BitStreamOutputArchive.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/archives/JsonInputArchive.h | serialization/include/archives/JsonInputArchive.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/archives/JsonOutputArchive.h | serialization/include/archives/JsonOutputArchive.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/archives/SimdJsonInputArchive.h | serialization/include/archives/SimdJsonInputArchive.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/concepts/Arithmetic.h | serialization/include/concepts/Arithmetic.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/concepts/Concepts.h | serialization/include/concepts/Concepts.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/concepts/ContainerLike.h | serialization/include/concepts/ContainerLike.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/concepts/IntegralConstant.h | serialization/include/concepts/IntegralConstant.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/concepts/Map.h | serialization/include/concepts/Map.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/concepts/NoneOfTheAbove.h | serialization/include/concepts/NoneOfTheAbove.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/concepts/Optional.h | serialization/include/concepts/Optional.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/concepts/StringLike.h | serialization/include/concepts/StringLike.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/impl/BitStreamUtil.h | serialization/include/impl/BitStreamUtil.h | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/include/impl/BitStreamUtil.ipp | serialization/include/impl/BitStreamUtil.ipp | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/src/BitStreamUtil.cpp | serialization/src/BitStreamUtil.cpp | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/serialization/src/foo.cpp | serialization/src/foo.cpp | 2849e676 | unconfirmed, do not publish | unchanged | |
| Engine/Shared/viet/include/AllocatedBuffer.h | viet/include/AllocatedBuffer.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/database_drivers/IDatabase.h | viet/include/database_drivers/IDatabase.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/FileUtils.h | viet/include/FileUtils.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/IBuffer.h | viet/include/IBuffer.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/MappedBuffer.h | viet/include/MappedBuffer.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/Overloaded.h | viet/include/Overloaded.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/Promise.h | viet/include/Promise.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/RollingContainer.h | viet/include/RollingContainer.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/save_storages/AsyncSaveStorage.h | viet/include/save_storages/AsyncSaveStorage.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/save_storages/ISaveStorage.h | viet/include/save_storages/ISaveStorage.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/save_storages/SaveStorageFactory.h | viet/include/save_storages/SaveStorageFactory.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/ScopedTask.h | viet/include/ScopedTask.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/TaskQueue.h | viet/include/TaskQueue.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/Timer.h | viet/include/Timer.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/TimeUtils.h | viet/include/TimeUtils.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/include/Void.h | viet/include/Void.h | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/LICENSE | viet/LICENSE | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/src/AllocatedBuffer.cpp | viet/src/AllocatedBuffer.cpp | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/src/FileUtils.cpp | viet/src/FileUtils.cpp | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/src/MappedBuffer.cpp | viet/src/MappedBuffer.cpp | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/src/Promise.cpp | viet/src/Promise.cpp | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/src/Timer.cpp | viet/src/Timer.cpp | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Shared/viet/src/TimeUtils.cpp | viet/src/TimeUtils.cpp | 2849e676 | MIT (Engine/Shared/viet/LICENSE) | unchanged | |
| Engine/Tests/mp_common/NetworkingMock.cpp | skymp5-server/cpp/mp_common/NetworkingMock.cpp | 2849e676 | AGPL-3.0 | unchanged | test-only: used by `Networking_MockTest.cpp` and `Networking_CombinedTest.cpp` |
| Engine/Tests/mp_common/NetworkingMock.h | skymp5-server/cpp/mp_common/NetworkingMock.h | 2849e676 | AGPL-3.0 | unchanged | test-only: used by `Networking_MockTest.cpp` and `Networking_CombinedTest.cpp` |
| Engine/Tests/unit/ActivateParentTest.cpp | unit/ActivateParentTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/ActorsMapTest.cpp | unit/ActorsMapTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/ActorTest.cpp | unit/ActorTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/AnimationSystemTest.cpp | unit/AnimationSystemTest.cpp | 2849e676 | unconfirmed, do not publish | modified 2026-10-11 | UT5: SweetPie half removed with SG8 and SG9; [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/ArchiveTestBinary.cpp | unit/ArchiveTestBinary.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/ArchiveTestSimdJson.cpp | unit/ArchiveTestSimdJson.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/Benchmarks.cpp | unit/Benchmarks.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/ChangeValuesTest.cpp | unit/ChangeValuesTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/ConsoleCommandTest.cpp | unit/ConsoleCommandTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/CraftTest.cpp | unit/CraftTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/CropRegenerationTest.cpp | unit/CropRegenerationTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/DropItemTest.cpp | unit/DropItemTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/EspmTest.cpp | unit/EspmTest.cpp | 2849e676 | unconfirmed, do not publish | modified | "Hash check" runs whenever the masters are loaded instead of only when `CI=true`, so a wrong game version is reported locally; comment names runtime 1.7.104 |
| Engine/Tests/unit/FormDescTest.cpp | unit/FormDescTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/GetBaseActorValuesTest.cpp | unit/GetBaseActorValuesTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/Grid_MoveTest.cpp | unit/Grid_MoveTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/GridTest.cpp | unit/GridTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/HealthRestorationTest.cpp | unit/HealthRestorationTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/HeuristicPolicyTest.cpp | unit/HeuristicPolicyTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/HitTest.cpp | unit/HitTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/IdManagerTest.cpp | unit/IdManagerTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/InventoryTest.cpp | unit/InventoryTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/LeveledListUtilsTest.cpp | unit/LeveledListUtilsTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/LoadCellsTest.cpp | unit/LoadCellsTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/main.cpp | unit/main.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/MongoDatabaseTest.cpp | unit/MongoDatabaseTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/MovementSerializationTest.cpp | unit/MovementSerializationTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/MovementValidationTest.cpp | unit/MovementValidationTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/Networking_CombinedTest.cpp | unit/Networking_CombinedTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/Networking_DataTransferTest.cpp | unit/Networking_DataTransferTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/Networking_HandlePacketClientsideTest.cpp | unit/Networking_HandlePacketClientsideTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/Networking_HandlePacketServersideTest.cpp | unit/Networking_HandlePacketServersideTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/Networking_MockTest.cpp | unit/Networking_MockTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/NetworkingTest.cpp | unit/NetworkingTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/NpcExists.cpp | unit/NpcExists.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/ObjectReferenceTest.cpp | unit/ObjectReferenceTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/papyrus_test_files/AAATestObject.psc | unit/papyrus_test_files/AAATestObject.psc | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/papyrus_test_files/LatentTest.psc | unit/papyrus_test_files/LatentTest.psc | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/papyrus_test_files/OpcodesTest.psc | unit/papyrus_test_files/OpcodesTest.psc | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/papyrus_test_files/pex/AAATestObject.pex | unit/papyrus_test_files/pex/AAATestObject.pex | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/papyrus_test_files/pex/LatentTest.pex | unit/papyrus_test_files/pex/LatentTest.pex | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/papyrus_test_files/pex/OpcodesTest.pex | unit/papyrus_test_files/pex/OpcodesTest.pex | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PapyrusActorTest.cpp | unit/PapyrusActorTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/PapyrusCompatibilityTest.cpp | unit/PapyrusCompatibilityTest.cpp | 2849e676 | unconfirmed, do not publish | modified 2026-10-11 | UT6: `disableVanillaScriptsInExterior` removed with SG33 |
| Engine/Tests/unit/PapyrusDebugTest.cpp | unit/PapyrusDebugTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PapyrusFormListTest.cpp | unit/PapyrusFormListTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PapyrusFormTest.cpp | unit/PapyrusFormTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PapyrusGameTest.cpp | unit/PapyrusGameTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PapyrusObjectReferenceTest.cpp | unit/PapyrusObjectReferenceTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PapyrusSkympTest.cpp | unit/PapyrusSkympTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PapyrusUtilityTest.cpp | unit/PapyrusUtilityTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PartOne_ActivateTest.cpp | unit/PartOne_ActivateTest.cpp | 2849e676 | unconfirmed, do not publish | modified 2026-10-11 | UT4: scripts come from the player's `Skyrim - Misc.bsa` instead of a folder of Bethesda and SKSE `.pex` copies (0007 decision 6) |
| Engine/Tests/unit/PartOne_ActorTest.cpp | unit/PartOne_ActorTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PartOne_IdGen.cpp | unit/PartOne_IdGen.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PartOne_MovementTest.cpp | unit/PartOne_MovementTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PartOne_ProfileId.cpp | unit/PartOne_ProfileId.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PartOne_UpdateEquipmentTest.cpp | unit/PartOne_UpdateEquipmentTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PartOne_UpdateLookTest.cpp | unit/PartOne_UpdateLookTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PartOneTest.cpp | unit/PartOneTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/PickUpItemCountTest.cpp | unit/PickUpItemCountTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/PrimitiveTest.cpp | unit/PrimitiveTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/RespawnTest.cpp | unit/RespawnTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/SaveStorageTest.cpp | unit/SaveStorageTest.cpp | 2849e676 | unconfirmed, do not publish | modified 2026-10-11 | UT7: Zip driver removed with SG37 |
| Engine/Tests/unit/ServerStateTest.cpp | unit/ServerStateTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/TemplateInventoryTest.cpp | unit/TemplateInventoryTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/TemplateScriptTest.cpp | unit/TemplateScriptTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/TES5DamageFormulaTest.cpp | unit/TES5DamageFormulaTest.cpp | 2849e676 | unconfirmed, do not publish | modified | [espm] tag added to the test cases that read the masters, so they are skipped without game data (2026-10-12) |
| Engine/Tests/unit/TestUtils.cpp | unit/TestUtils.cpp | 2849e676 | unconfirmed, do not publish | modified 2026-10-11 | UT1, UT2: data folder from `SUG_SKYRIM_DATA_DIR`; test messages go through the binary encoding, as real clients send them |
| Engine/Tests/unit/TestUtils.hpp | unit/TestUtils.hpp | 2849e676 | unconfirmed, do not publish | modified 2026-10-11 | UT3: `IsCmakeOptionSpecified` removed with UT1 |
| Engine/Tests/unit/VarValueTest.cpp | unit/VarValueTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/VirtualMachineTest.cpp | unit/VirtualMachineTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/Tests/unit/WorldStateTest.cpp | unit/WorldStateTest.cpp | 2849e676 | unconfirmed, do not publish | unchanged |  |
| Engine/vcpkg/ports/makeid/MakeID.h | overlay_ports/makeid/MakeID.h | 2849e676 | Public domain (Humus) | unchanged | vendored so no download from humus.name |
| LICENSE | skymp5-server/LICENSE | 2849e676 | AGPL-3.0 | unchanged | licence text for SUG code and skymp5-server code |

## SUG-authored files replacing upstream files

| Upstream path | SUG file |
|---|---|
| `viet/{CMakeLists.txt,cmakeproj.cmake}`, `serialization/{CMakeLists.txt,cmakeproj.cmake}` | `Engine/Shared/CMakeLists.txt` |
| `libespm/{CMakeLists.txt,cmakeproj.cmake}`, `papyrus-vm/{CMakeLists.txt,cmakeproj.cmake}` | `Engine/Server/CMakeLists.txt` (targets `espm` and `papyrus-vm-lib`; the `papyrus-vm` executable is not imported) |
| `skymp5-server/cpp/CMakeLists.txt`: the `messages` and `MpClientPlugin` targets | `Engine/Shared/CMakeLists.txt` (target `protocol`) and `Engine/Client/CMakeLists.txt` (targets `sug_net_core` and `sug_net`, which builds `bin/client/sug_net.dll`) |
| `skymp5-server/cpp/CMakeLists.txt`: the `mp_common`, `geo`, `server_guest_lib` and `localization-provider` targets | `Engine/Server/CMakeLists.txt` |
| `skymp5-server/CMakeLists.txt` lines 132-139 (the `server_standard_scripts` resource library) | `Engine/Server/CMakeLists.txt` (same target name and resource paths, so `AssetsScriptStorage.cpp` is unchanged) |
| `skymp5-server/CMakeLists.txt` lines 18-21 and 29-77 except 58-59 (the Node addon target `skymp5-server`, output `scam_native.node`) | `Engine/Server/CMakeLists.txt` (target `scam_native`, output `bin/server/scam_native.node`). Not reproduced: the `find_library` for `node.lib` (the registry `node-api-headers` port attaches it to the node-addon-api target), the output folder `build/dist/server`, and the Linux export map |
| `skymp5-server/ts/CMakeLists.txt`; `skymp5-server/CMakeLists.txt` lines 1-16 and 23-27 (project setup, includes of skymp's `cmake/` helpers, `find_package(CMakeRC)`, `yarn install` at configure time, `add_subdirectory` of `cpp` and `ts`) | `Engine/Server/CMakeLists.txt` (target `server_host`: `npm ci` when `package-lock.json` changes, then `npm run build` into `bin/server/skymp5-server.js`). Not reproduced: the addon's dependency on the TypeScript build (lines 58-59); the two targets are built by name |
| `skymp5-server/CMakeLists.txt` lines 79-130 (`launch_server.bat`, the generated `server-settings.json`, copies of `package.json` and `yarn.lock` into `build/dist/server`) | `Tools/DevServer/{dev-server.mjs,start-dev-server.cmd,server-settings.example.json,README.md}`: the run folder is separate from `bin/server`, the settings come from a committed example plus options, and nothing is copied next to the bundle |
| `skymp5-server/yarn.lock` | `Engine/Server/host/package-lock.json`: generated by `npm install` from `package.json` (npm in place of yarn classic); generated JSON, so it has no SPDX line |
| `skymp5-server/cpp/mp_common/Config.h` lines 5-12 (protocol identifier `"7_"`) | `Engine/Shared/protocol/ProtocolVersion.h` (identifier `"sug1_"`) |
| `skymp5-server/cpp/geo/*` (14 files) | `Engine/Server/geo/ConvexPolyhedron.{h,cpp}`: **clean rewrite** from the plan's specification (section 4); the upstream files were not opened. Tests: `Engine/Tests/geo/GeoTest.cpp` |
| `unit/{CMakeLists.txt,cmakeproj.cmake}` | `Engine/Tests/CMakeLists.txt` (targets `unit`, `geo_tests` and `net_loopback_tests`; ctest entries `unit`, `geo`, `net_loopback` and `server_boot_smoke`); the three test `.pex` are imported prebuilt, so the Papyrus compiler step is not reproduced |
| root `CMakeLists.txt` | `CMakeLists.txt` |
| root `vcpkg.json` | `vcpkg.json` |
| `vcpkg` submodule pin (`cb2981c4`) and the overlay settings in root `CMakeLists.txt:17-18` | `vcpkg-configuration.json` |
| `cmake/apply_default_settings.cmake` | `Engine/cmake/SugTargetDefaults.cmake` |
| `overlay_triplets/x64-windows-sp.cmake` | `Engine/vcpkg/triplets/x64-windows-static-v145.cmake` |
| `overlay_ports/antigo/{portfile.cmake,vcpkg.json}` | `Engine/vcpkg/ports/antigo/{portfile.cmake,vcpkg.json}`: **adapted from upstream overlay (no upstream licence file)**; same pin and SHA512, `vcpkg_cmake_configure` in place of the deprecated `vcpkg_configure_cmake`, shorter description |
| `overlay_ports/makeid/{portfile.cmake,vcpkg.json}` | `Engine/vcpkg/ports/makeid/{portfile.cmake,vcpkg.json}` (`MakeID.h` is an imported row above) |
| `overlay_ports/prometheus-cpp-lite/{portfile.cmake,vcpkg.json}` | `Engine/vcpkg/ports/prometheus-cpp-lite/{portfile.cmake,vcpkg.json}`: **adapted from upstream overlay (no upstream licence file)**; same pin and SHA512, copyright installed after the headers, no `vcpkg-cmake` host dependency (the portfile calls no `vcpkg_cmake_*`), shorter description |
| `overlay_ports/prometheus-cpp-lite/fix-missing-charconv.patch` | `Engine/vcpkg/ports/prometheus-cpp-lite/fix-missing-charconv.patch`: **reproduced**, byte-identical to upstream after its first line (the SPDX line) |

## Not imported

Upstream files left out with no SUG replacement, and why. Each slice adds the files it drops.

| Upstream path | Reason |
|---|---|
| root files other than `CMakeLists.txt` and `vcpkg.json` (`README.md`, `CONTRIBUTING.md`, `CLA.md`, `TERMS.md`, `ROADMAP.md`, `CLAUDE.md`, `THIRD_PARTY_LICENSES`, `Dockerfile`, `build.sh`, `skymp.jpg`, and the git, editor, lint and format configuration files) | skymp's repository documents, contributor terms and tooling; SUG has its own `README.md`, `CONTRIBUTING.md`, `NOTICE` and `.gitignore` |
| `.devcontainer/`, `.github/` | skymp's container setup and CI |
| `client-deps/` | game data that skymp copies into its client distribution (interface files, Papyrus scripts, SKSE address-library files) |
| `cmake/` except `apply_default_settings.cmake` (12 files) | skymp's own build helpers (Papyrus compiling, test runners, Nexus archives, yarn, settings generators); the folder has no licence file |
| `docs/` | skymp's documentation |
| `misc/` | skymp's integration tests, dependency scripts and repository tooling; the folder has no licence file. `Engine/Tests/smoke` copies nothing from it |
| `overlay_ports/fmt` | the `fmt` 11.2.0 override in `vcpkg.json` takes the same version from the registry |
| `overlay_ports/slikenet` | the registry port has the same source pin and crypto removal; the overlay only adds emscripten patching |
| `overlay_ports/node-api-headers` | the registry's 1.6.0 provides `node.lib` |
| `overlay_ports/rsm-bsa` | the registry's 4.1.0#1 carries the DirectXTex fix and builds with MSVC 14.51; the overlay's two 2023 patches are taken to target other compilers (checked when the server first compiles against it) |
| `overlay_ports/{cef-prebuilt,commonlibae,commonlibse,commonlibsse-ng-flatrim,commonlibsse-ng-vr,frida-gum,ga-sdk-cpp,libxml2,nirnlab-ui-platform-headers,node-embedder-api,node-embedder-api-prebuilt,zf-log}` | client and SkyrimPlatform dependencies |
| `papyrus-vm/src/papyrus-vm/main.cpp` | the `papyrus-vm` command-line tool; the server needs only the library |
| `savefile/` | skymp's reader for Skyrim save files; no imported code includes or links it |
| `skymp5-client/`, `skymp5-front/` | skymp's game client scripts and in-game browser UI; SUG's client runs on SkyrimPlatform2 (0005) |
| `skymp5-functions-lib/`, `skymp5-scripts/` | skymp's own gamemode library and Papyrus scripts: gameplay of skymp's server, not engine code |
| `skymp5-server/.gitignore` | the root `.gitignore` covers `node_modules/` |
| `skymp5-server/cmakeproj.cmake` | registers the folder with skymp's root `CMakeLists.txt`, which is not imported |
| `skymp5-server/cpp/addon/Bot.h` | bots, which connect through the mock server (0007 decision 3) |
| `skymp5-server/cpp/addon/PacketHistoryWrapper.{h,cpp}` | packet history (0007 decision 3) |
| `skymp5-server/cpp/messages/CustomEventMessage.h` | client-JS event sources (the CustomEvent path, 0007 decision 3) |
| `skymp5-server/cpp/messages/UpdateGameModeDataMessage.h` | carried server-pushed JS to clients (0007 decision 3) |
| `skymp5-server/cpp/mp_common/MsgType.h` | one-line forwarder to `../messages/MsgType.h`, which does not resolve after the move; `MsgType.h` is found in `Engine/Shared/protocol/messages` through include directories |
| `skymp5-server/cpp/pex/` (3 files) | compiled test scripts that no build file references; the unit tests use `unit/papyrus_test_files/pex`, whose files differ |
| `skymp5-server/cpp/server_guest_lib/SweetHidePlayerNamesService.{h,cpp}` | SweetHidePlayerNames (0007 decision 3) |
| `skymp5-server/cpp/server_guest_lib/formulas/SweetPieDamageFormula.{h,cpp}`, `formulas/SweetPieSpellDamageFormula.{h,cpp}` | SweetPie damage formulas (0007 decision 3) |
| `skymp5-server/cpp/server_guest_lib/database_drivers/ZipDatabase.{h,cpp}`, `database_drivers/MigrationDatabase.{h,cpp}` | Zip and Migration database drivers; a fresh world needs only `file` and `mongodb` (0007 decision 3) |
| `skymp5-server/cpp/server_guest_lib/OpenSSLSigner.{h,cpp}` | signing of client-JS sources (0007 decision 3) |
| `skymp5-server/cpp/server_guest_lib/gamemode_events/CustomEvent.{h,cpp}` | the CustomEvent path (0007 decision 3) |
| `skymp5-server/ts/manifestGen.ts` | wrote `<dataDir>/manifest.json` into the game folder at every start, reading every master in full, and nothing in the server reads it back; the client's load-order check gets a new source with sug-backend |
| `skymp5-server/ts/systems/masterClient.ts`, `ts/systems/masterApiBalanceSystem.ts`, `ts/systems/discordBanSystem.ts` | contact skymp's master server and Discord (0007 decision 3) |
| `skyrim-platform/` (with `src/tilted`) | SkyrimPlatform; SUG's client platform is SkyrimPlatform2 (0005), and nothing from `src/tilted` may be copied |
| `unit/SweetHidePlayerNamesTest.cpp` | tests SweetHidePlayerNames |
| `unit/PartOne_BotTest.cpp` | bots; the file is fully commented out |
| `unit/MigrationDatabaseTest.cpp` | tests the Migration driver |
| `unit/OpenSSLSignerTest.cpp` | tests client-JS signing |
| `unit/DistContentsTest.cpp`, `unit/DistContentsExpected.json` | check the contents of upstream's `build/dist` |
| `unit/platform_lib_tests/FileInfoTest.cpp` | tests SkyrimPlatform |
| `unit/papyrus_test_files/standard_scripts/*.pex` (66) | Bethesda and SKSE script bytecode; `PartOne_ActivateTest.cpp` reads the player's `Skyrim - Misc.bsa` instead (UT4) |
