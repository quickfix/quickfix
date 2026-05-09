# QuickFIX Agent Guidelines

QuickFIX is a C++17 implementation of the FIX (Financial Information eXchange) protocol,
supporting FIX 4.0 through 5.0 SP2 and FIXT 1.1.

## Build

```bash
# Configure (from repo root)
cmake -S . -B build -DCMAKE_BUILD_TYPE=Release

# Build
cmake --build build

# Test
cmake --build build --target test
```

Optional CMake flags: `-DHAVE_SSL=ON`, `-DHAVE_MYSQL=ON`, `-DHAVE_POSTGRESQL=ON`,
`-DHAVE_PYTHON3=ON`, `-DQUICKFIX_SHARED_LIBS=ON`.

Legacy Autotools build: `./bootstrap && ./configure && make && make check`.

## Tests

| Suite | Binary | Purpose |
|-------|--------|---------|
| Unit  | `ut`   | Function/class-level tests |
| Acceptance | `at` | End-to-end FIX session tests |
| Performance | `pt` | Throughput benchmark (Release only) |

Run all: `cmake --build build --target test`  
Unit only: `./test/ut`

Acceptance tests require a network port and a config file under `test/cfg/`.
Do **not** run acceptance tests in environments where ports 6666–6670 are unavailable.

## Code Style

Formatting is enforced by `.clang-format`. Before committing:

```bash
git diff --name-only | grep -E '\.(cpp|h)$' | xargs clang-format -i
```

CI runs a format-check workflow on every PR — unformatted code will fail.

Key rules (all sourced from `.clang-format`):
- **Indent:** 2 spaces, no tabs
- **Line length:** 120 characters
- **Braces:** Attach style
- **Includes:** Clang-format managed; corresponding header first for `.cpp` files

## Naming Conventions

| Element | Style | Example |
|---------|-------|---------|
| Classes / types | PascalCase | `SessionID`, `SocketAcceptor` |
| Methods / functions | camelCase | `sendMessage()`, `getSessionID()` |
| Member variables | `m_` prefix + camelCase | `m_sessionID`, `m_port` |
| Constants / macros | `UPPER_CASE` | `MAX_BUFFER_SIZE` |
| Namespace | `FIX` | `namespace FIX { ... }` |

All production code lives in the `FIX` namespace.

## Header Files

- Use `#pragma once` (preferred over include guards in new code).
- One class per header file (general rule).
- Inline simple accessors directly in the class body.
- Mark all non-mutating methods `const`.

## C++ Standards

- Minimum: **C++17** (`set(CMAKE_CXX_STANDARD 17)` in CMakeLists.txt).
- Use RAII; prefer `std::unique_ptr` / `std::shared_ptr` over raw owning pointers.
- Use move semantics where appropriate.

## Error Handling

QuickFIX uses a custom exception macro pattern:

```cpp
void fromApp(const Message& message, const SessionID& sessionID)
    EXCEPT(FieldNotFound, IncorrectDataFormat, IncorrectTagValue, UnsupportedMessageType);
```

Custom exception types are declared with the `EXCEPT` macro defined in `include/quickfix/Exceptions.h`.
Do not silently swallow exceptions; propagate or log them explicitly.

## File Layout

```
include/quickfix/   Public headers (installed with the library)
src/C++/            Core implementation (.cpp files)
src/python3/        Python 3 SWIG bindings
src/ruby/           Ruby SWIG bindings
test/               Acceptance, unit, and performance tests
test/cfg/           Test configuration files
spec/               FIX XML specification files
examples/           Sample applications (executor, ordermatch, tradeclient)
doc/                Doxygen-generated HTML documentation
```

## Documentation

Public API changes must include Doxygen-style comments (`///` or `/** */`).
User-visible changes (new settings, new features) require updates to the relevant
files in `doc/html/` — particularly `configuration.html` and `building.html`.

Generate docs: `cd doc && ./document.sh` (Unix) or `document.bat` (Windows).

## Copyright Header

Every new `.cpp` and `.h` file must begin with the standard copyright block:

```cpp
// Copyright (c) 2001-2010 quickfixengine.org  All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met: ...
```

Copy the full block from any existing file (e.g., `include/quickfix/Session.h`).

## CI / PR Checklist

- `clang-format` passes (CI enforces this automatically).
- All three test suites pass on the target platform(s).
- No new compiler warnings introduced (especially C4267/size_t narrowing on MSVC).
- Documentation updated for any user-facing change.
- No breaking API changes without discussion.
