// SPDX-License-Identifier: AGPL-3.0-or-later
// Boots the dev server from bin/server with the masters in SUG_SKYRIM_DATA_DIR, then stops it through smoke-gamemode.js.
import { spawn, spawnSync } from "node:child_process";
import { existsSync, mkdtempSync, rmSync, writeFileSync } from "node:fs";
import os from "node:os";
import path from "node:path";
import { fileURLToPath } from "node:url";

const repoRoot = path.resolve(path.dirname(fileURLToPath(import.meta.url)), "..", "..", "..");
const port = 7790;
const masters = ["Skyrim.esm", "Update.esm", "Dawnguard.esm", "HearthFires.esm", "Dragonborn.esm"];

class StepError extends Error {}

function check(step, condition, message) {
  if (!condition) {
    throw new StepError(`step ${step}: ${message}`);
  }
}

function udpPortLines() {
  const result = spawnSync("netstat", ["-ano", "-p", "UDP"], { encoding: "utf8" });
  if (result.status !== 0) {
    throw new Error(`netstat exited with ${result.status}`);
  }
  return result.stdout.split(/\r?\n/).filter((line) => line.includes(`:${port} `));
}

async function waitFor(condition, timeoutMs) {
  const deadline = Date.now() + timeoutMs;
  while (!condition() && Date.now() < deadline) {
    await new Promise((resolve) => setTimeout(resolve, 100));
  }
}

let server;
let exitCode;
let runDir;
let failure;

try {
  const dataDir = process.env.SUG_SKYRIM_DATA_DIR;
  check(1, dataDir, "SUG_SKYRIM_DATA_DIR is not set");
  for (const file of [
    path.join(repoRoot, "bin", "server", "scam_native.node"),
    path.join(repoRoot, "bin", "server", "skymp5-server.js"),
    path.join(dataDir, "Skyrim.esm"),
    path.join(dataDir, "Skyrim - Misc.bsa"),
  ]) {
    check(1, existsSync(file), `${file} is missing`);
  }

  check(2, udpPortLines().length === 0, `UDP port ${port} is already in use`);

  runDir = mkdtempSync(path.join(os.tmpdir(), "sug-boot-smoke-"));
  server = spawn(
    process.execPath,
    [
      path.join(repoRoot, "Tools", "DevServer", "dev-server.mjs"),
      "--run-dir", runDir,
      "--port", String(port),
      "--gamemode", path.join(repoRoot, "Engine", "Tests", "smoke", "smoke-gamemode.js"),
    ],
    { stdio: ["ignore", "pipe", "pipe"] },
  );
  let stdout = "";
  server.stdout.on("data", (chunk) => {
    stdout += chunk;
    process.stdout.write(chunk);
  });
  server.stderr.on("data", (chunk) => process.stdout.write(chunk));
  server.on("exit", (code) => {
    exitCode = code;
  });

  const loadOrderLine = /SMOKE loadOrder=(.*)\r?\n/;
  await waitFor(() => loadOrderLine.test(stdout) || exitCode !== undefined, 180_000);
  const match = loadOrderLine.exec(stdout);
  check(4, match, exitCode === undefined ? "no SMOKE loadOrder= line within 180 s" : `the server exited with ${exitCode} before SMOKE loadOrder=`);
  check(4, JSON.stringify(JSON.parse(match[1])) === JSON.stringify(masters), `load order ${match[1]}, expected ${JSON.stringify(masters)}`);

  check(5, udpPortLines().some((line) => line.includes(`127.0.0.1:${port} `)), `UDP 127.0.0.1:${port} is not bound`);

  writeFileSync(path.join(runDir, "stop"), "");
  await waitFor(() => exitCode !== undefined, 15_000);
  check(6, exitCode !== undefined, "the server did not exit within 15 s of the stop file");
  check(6, exitCode === 0, `the server exited with ${exitCode}`);
  check(6, udpPortLines().length === 0, `UDP port ${port} is still in use after the exit`);
} catch (e) {
  failure = e instanceof StepError ? e.message : e.stack;
} finally {
  if (server && exitCode === undefined) {
    spawnSync("taskkill", ["/pid", String(server.pid), "/t", "/f"]);
  }
  if (runDir) {
    try {
      rmSync(runDir, { recursive: true, force: true });
      check(7, !existsSync(runDir), `${runDir} was not deleted`);
    } catch (e) {
      failure ??= e instanceof StepError ? e.message : e.stack;
    }
  }
}

console.log(failure ? `SMOKE FAIL ${failure}` : "SMOKE PASS");
process.exitCode = failure ? 1 : 0;
