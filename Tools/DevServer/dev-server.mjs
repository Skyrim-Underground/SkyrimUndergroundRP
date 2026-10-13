// SPDX-License-Identifier: AGPL-3.0-or-later
import { spawn } from "node:child_process";
import { existsSync, mkdirSync, readFileSync, writeFileSync } from "node:fs";
import path from "node:path";
import { fileURLToPath } from "node:url";
import { parseArgs } from "node:util";

const repoRoot = path.resolve(path.dirname(fileURLToPath(import.meta.url)), "..", "..");
const serverDir = path.join(repoRoot, "bin", "server");

const { values: args } = parseArgs({
  options: {
    "data-dir": { type: "string" },
    "run-dir": { type: "string" },
    port: { type: "string" },
    gamemode: { type: "string" },
    settings: { type: "string" },
  },
});

function fail(message) {
  console.error(`dev-server: ${message}`);
  process.exit(1);
}

const dataDir = args["data-dir"] ?? process.env.SUG_SKYRIM_DATA_DIR;
if (!dataDir) {
  fail("pass --data-dir or set SUG_SKYRIM_DATA_DIR to the Skyrim Special Edition Data folder");
}

for (const file of ["scam_native.node", "skymp5-server.js"]) {
  if (!existsSync(path.join(serverDir, file))) {
    fail(`${path.join(serverDir, file)} is missing; build the targets scam_native and server_host first (Tools/DevServer/README.md)`);
  }
}

const settingsPath = path.resolve(args.settings ?? path.join(repoRoot, "Tools", "DevServer", "server-settings.example.json"));
const settings = JSON.parse(readFileSync(settingsPath, "utf8"));
settings.dataDir = path.resolve(dataDir);
if (args.port !== undefined) {
  const port = Number(args.port);
  if (!Number.isInteger(port) || port < 1 || port > 65535) {
    fail(`--port must be a port number, got "${args.port}"`);
  }
  settings.port = port;
}
if (args.gamemode !== undefined) {
  settings.gamemodePath = path.resolve(args.gamemode);
}

const runDir = path.resolve(args["run-dir"] ?? path.join(repoRoot, "out", "devserver"));
mkdirSync(runDir, { recursive: true });
writeFileSync(path.join(runDir, "server-settings.json"), JSON.stringify(settings, null, 2) + "\n");

const server = spawn(process.execPath, ["--enable-source-maps", path.join(serverDir, "skymp5-server.js")], {
  cwd: runDir,
  stdio: "inherit",
});
server.on("exit", (code) => process.exit(code ?? 1));
