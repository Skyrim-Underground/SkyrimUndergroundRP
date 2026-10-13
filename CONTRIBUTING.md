<!-- SPDX-License-Identifier: AGPL-3.0-or-later -->
# Contributing

## Sign-off

Every commit carries a `Signed-off-by:` line, added with `git commit -s`. By signing off you certify the [Developer Certificate of Origin 1.1](https://developercertificate.org/): you wrote the change, or otherwise have the right to submit it under this repository's licence. There is no CLA, and contributors keep the copyright on their contributions.

## Licence

Contributions are licensed under AGPL-3.0-or-later (see `LICENSE`; the scope is in `NOTICE`). New source files start with an `SPDX-License-Identifier: AGPL-3.0-or-later` comment where the file format allows comments. JSON files that allow extra keys carry it as a first `"$comment"` key instead (see`vcpkg.json`).

## Code from other projects

Code taken from skymp or any other project keeps its original licence notices and gets a row in `ORIGINS.md`: staged path, upstream path and commit, licence, and whether SUG changed it (with the date and the reason).
