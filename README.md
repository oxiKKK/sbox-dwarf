# s&box dedicated server — DWARF symbol dump

DWARF-extracted symbol and type tree for the Linux s&box dedicated server, build dated **2026-04-26**.

The repository reconstructs the original source-tree layout from DWARF compilation-unit metadata. Each file corresponds to a translation unit or header in the original source and contains the classes, structs, unions, and free functions that were emitted from that location.

## Contents

- **2,601** files, ~**3.3M** lines of reconstructed declarations
- **11,122** classes, **4,794** structs, **30** unions
- **122,380** free functions, **700,073** member functions
- **51,320** member variables, **3,458** static member variables
- **15,621** vtable entries

`statistics.txt` at the root lists aggregate counts and a per-file linecount ranking.

## Modules

Symbols were extracted from these eleven shared libraries shipped with the dedicated server:

| Module                       | Notes                                  |
| ---------------------------- | -------------------------------------- |
| `libtier0`                   | Base platform / utility library        |
| `libschemasystem`            | Schema/reflection runtime              |
| `libfilesystem_stdio`        | Filesystem implementation              |
| `liblocalize`                | Localization                           |
| `libmaterialsystem2`         | Material system                        |
| `libmeshsystem`              | Mesh / geometry                        |
| `librendersystemempty`       | Null render backend                    |
| `librendersystemvulkan`      | Vulkan render backend                  |
| `libvfx_vulkan`              | Vulkan effects/shader pipeline         |
| `libanimationsystem`         | Animation graph & playback             |
| `libengine2`                 | Main engine                            |

## Layout

The tree mirrors the original source layout from DWARF. Top-level directories include:

```
engine2/       tier0/         tier0_perproject/   public/
mathlib/       materialsystem2/    animationsystem/    meshsystem/
schemasystem/  rendersystem/  vfx/                kv3lib/
common/        tier1/         tier2/              thirdparty/
_generated_code/    generated_antlr_code/
```

Public headers exposed across libraries live under `public/<lib>/`, e.g. `public/tier0/dbg.h`, `public/mathlib/vector.h`, `public/animationsystem/animationhandle.h`.

## File format

Every reconstructed file opens with a metadata block:

```
//
// public/tier0/dbg.h
//
//	referenced by: libengine2.so
//	              libtier0.so
//
//	functions: 2
//	class: 1
//	struct: 1
//
```

Each declaration is preceded by a comment with its DWARF DIE address (in angle brackets) and its source location:

```c++
// <000F0D6D> public/tier0/dbg.h:144
// member functions: 8
// vtable entry: 1
// class size: 24
class IAssertionFailureListener {
    int ()(void) * * _vptr.IAssertionFailureListener; /* 0 8 */
    ...
};
```

Member-variable comments have the form `/* offset size */`. Class/struct headers carry pre-computed counts (member functions, member variables, static members, vtable entries, total size).

## Known gaps

These are limitations of the upstream [`dwarves`](https://github.com/acmel/dwarves) toolchain used to extract the data, not of the dump format itself:

- **No standalone global variables.** `pglobal` from current upstream `dwarves` no longer emits source locations alongside the symbols, so globals can't be placed into the tree. Module-scope variables that are part of a class are still present.
- **No standalone typedefs or enums.** `pdwtags` emits `<0> (null):0` for top-level enums and typedefs, dropping the source-location info needed for tree placement. Typedef'd structs/unions and enums nested inside classes *are* present — they're recovered through `pahole`.

If a future `dwarves` release restores location info for these, the tree can be regenerated to include them.

## Provenance

- **Game build:** Linux s&box dedicated server (DWARF), dated 2026-04-26
- **Source:** symbols recovered from `.so.dbg` debug binaries shipped with the server
- **Tools:** `pfunct`, `pahole`, `pdwtags` from upstream [`dwarves`](https://github.com/acmel/dwarves)
