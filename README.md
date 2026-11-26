# SkyClimax

A byte-for-byte decompilation of **After Burner Climax** (PlayStation 3, `NPUB30151`), built with
[decompdecomp](https://github.com/RetroReversing/decompdecomp).

Every C function in `progress/src/` was accepted only after Sony's original compiler rebuilt it into
machine code identical to the game. Nothing is approximated.

## Status

| | |
|---|---|
| Functions matched | **3,149 / 11,858** (26.6%) |
| Best attempts | 431 |
| Compiler ranges | 824 |
| Compiler | Sony PPU GCC (`ps3sdk-420`, SDK 4.20) |
| Game SHA-1 | `064c379309150a550d4d544f47c1a43cb0678b8f` |

## What is in this repository

Only `progress/` — the entire work product: matched C, best attempts, shared headers, the project
manifest, notes and progress data.

The game itself is **not included**. No ROM, no extracted assembly, no assets and no build output are
tracked here. Bring your own legally obtained copy of the game to continue the work.

## Continuing the decompilation

1. Install [decompdecomp](https://github.com/RetroReversing/decompdecomp).
2. In the app, install the Sony PlayStation 3 SDK you own (Setup → Compilers & tools). The compiler is
   detected as `ps3sdk-420`.
3. Choose **Open a saved project**, select this repository's `progress/` folder, and provide your own
   `EBOOT.elf`. The app verifies the SHA-1 against the manifest and re-judges every saved function.

### Notes for contributors

- The game was built with **two different epilogue orders**. `ld / mtlr / addi / blr` is reproduced with
  `-O2 -fno-schedule-insns2`; `ld / addi / mtlr / blr` is reproduced with plain `-O2`. The manifest's
  compiler ranges record which flag set each address needs.
- The project default `-mminimal-toc` is wrong for many regions and grows the stack frame by 16 bytes.
  Test `try_compiler` with `-O2 -falign-functions=4` before rewriting C that "looks right".
- When the judge reports *"your TOC slot holds an address where the original's holds a constant"*, the
  original C used a literal, not a symbol. Read the value from the ELF at the address named in the
  disassembly and write it as a C literal.

## Legal

After Burner Climax is copyrighted by its rights holders. This repository contains no game data and
makes no claim over the original work. Use it only with a legally obtained copy of the game.
