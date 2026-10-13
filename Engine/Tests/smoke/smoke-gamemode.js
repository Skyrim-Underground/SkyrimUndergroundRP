// SPDX-License-Identifier: AGPL-3.0-or-later
// Gamemode of boot-smoke.mjs: reports the load order, then exits once a "stop" file appears in the run folder.
const fs = require("fs");

console.log(`SMOKE loadOrder=${JSON.stringify(mp.getEspmLoadOrder())}`);

setInterval(() => {
  if (fs.existsSync("stop")) {
    process.exit(0);
  }
}, 100);
