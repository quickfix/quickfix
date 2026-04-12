# Contributing to QuickFIX

Thank you for your interest in contributing to QuickFIX! This document provides guidelines and information for contributors.

## Table of Contents

- [Code of Conduct](#code-of-conduct)
- [How to Contribute](#how-to-contribute)
- [Reporting Bugs](#reporting-bugs)
- [Suggesting Features](#suggesting-features)
- [Pull Requests](#pull-requests)
- [Coding Standards](#coding-standards)
- [Testing](#testing)
- [Documentation](#documentation)

## Code of Conduct

This project adheres to a [Code of Conduct](CODE_OF_CONDUCT.md). By participating, you are expected to uphold this code.

## How to Contribute

### Reporting Bugs

Before creating a bug report:
1. Check the [existing issues](https://github.com/quickfix/quickfix/issues) to avoid duplicates
2. Collect relevant information about your environment

When creating a bug report, include:
- **Title**: Clear and descriptive title
- **Description**: Detailed description of the issue
- **Steps to Reproduce**: Step-by-step instructions
- **Expected Behavior**: What you expected to happen
- **Actual Behavior**: What actually happened
- **Environment**:
  - QuickFIX version
  - Operating system and version
  - Compiler and version
  - FIX version being used
  - Any relevant configuration
- **Code Sample**: Minimal code to reproduce the issue
- **Logs**: Relevant log output (use code blocks)

### Suggesting Features

Feature requests are welcome! When suggesting a feature:
1. Check existing issues and discussions first
2. Provide a clear use case
3. Explain why this feature would benefit QuickFIX users
4. Consider backward compatibility

### Pull Requests

We actively welcome pull requests!

#### Before Submitting

1. **Fork and Clone**: Fork the repository and clone your fork
   ```bash
   git clone https://github.com/YOUR-USERNAME/quickfix.git
   cd quickfix
   git remote add upstream https://github.com/quickfix/quickfix.git
   ```

2. **Create a Branch**: Create a feature branch from `master`
   ```bash
   git checkout -b feature/your-feature-name
   ```

3. **Make Changes**: Implement your changes following our [coding standards](#coding-standards)

4. **Test**: Ensure all tests pass
   ```bash
   # CMake
   cmake --build . --target test

   # Autotools
   make check
   ```

5. **Commit**: Write clear, concise commit messages
   ```bash
   git commit -m "Add feature: brief description"
   ```

6. **Push**: Push to your fork
   ```bash
   git push origin feature/your-feature-name
   ```

7. **Open a PR**: Create a pull request from your fork to `quickfix/quickfix:master`

#### Pull Request Guidelines

- **Title**: Clear, descriptive title
- **Description**:
  - What changes were made
  - Why the changes were necessary
  - Reference any related issues (e.g., "Fixes #123")
- **Scope**: Keep PRs focused on a single feature or bug fix
- **Tests**: Include tests for new functionality
- **Documentation**: Update documentation for API changes
- **Format**: Ensure code is properly formatted (run clang-format)
- **Backward Compatibility**: Avoid breaking changes when possible

## Coding Standards

### C++ Style

QuickFIX uses `.clang-format` for code formatting. Format your code before submitting:

```bash
# Format all modified files
git diff --name-only | grep -E '\.(cpp|h)$' | xargs clang-format -i
```

### General Guidelines

- **C++ Standard**: Minimum C++17
- **Naming Conventions**:
  - Classes: `PascalCase` (e.g., `SocketInitiator`)
  - Functions/Methods: `camelCase` (e.g., `sendMessage()`)
  - Member variables: `m_camelCase` (e.g., `m_sessionID`)
  - Constants: `UPPER_CASE` (e.g., `MAX_BUFFER_SIZE`)
- **Headers**: Use `#pragma once` for header guards
- **Includes**: Order includes as:
  1. Corresponding header (for .cpp files)
  2. C++ standard library
  3. Third-party libraries
  4. QuickFIX headers
- **Comments**:
  - Use Doxygen-style comments for public APIs
  - Explain "why" not "what" in implementation comments
- **Error Handling**: Use exceptions appropriately
- **Memory Management**: Use RAII, smart pointers when appropriate

### Example

```cpp
#pragma once

#include <memory>
#include <string>

namespace FIX
{

/// @brief Represents a FIX session
class Session
{
public:
    /// @brief Constructor
    /// @param sessionID The session identifier
    explicit Session(const SessionID& sessionID);

    /// @brief Send a message
    /// @param message The message to send
    /// @return true if sent successfully
    bool sendMessage(const Message& message);

private:
    SessionID m_sessionID;
    std::unique_ptr<MessageStore> m_store;
};

} // namespace FIX
```

## Testing

### Running Tests

```bash
# CMake
cmake --build . --target test

# Autotools
make check

# Run specific tests
./test/ut --quickfix-config-file cfg/ut.cfg
```

### Writing Tests

- Add unit tests for new functionality in the `test/` directory
- Use the Catch2 test framework
- Test edge cases and error conditions
- Ensure tests are deterministic and don't depend on external state

### Test Coverage

We aim for high test coverage. When adding new features:
- Write tests that cover the main functionality
- Test error paths
- Test boundary conditions

## Documentation

### Code Documentation

- Use Doxygen comments for public APIs
- Keep comments up-to-date with code changes
- Document parameters, return values, and exceptions

### User Documentation

When making user-facing changes:
- Update relevant HTML documentation in `doc/html/`
- Update README.md if needed
- Update configuration.html for new settings
- Provide examples when appropriate

### Generating Documentation

```bash
cd doc
./document.sh  # Unix/Linux
# or
document.bat   # Windows
```

## Development Workflow

### Setting Up Development Environment

1. **Install Prerequisites**:
   - C++17 compiler
   - CMake 3.5+
   - Optional: OpenSSL, MySQL, PostgreSQL

2. **Build in Development Mode**:
   ```bash
   cmake -DCMAKE_BUILD_TYPE=Debug -DQUICKFIX_TESTS=ON .
   make -j$(nproc)
   ```

3. **Enable clang-format integration** in your IDE/editor

### Debugging

- Build with `-DCMAKE_BUILD_TYPE=Debug`
- Use standard C++ debugging tools (gdb, lldb, Visual Studio debugger)
- Check logs in the FileStore directory

## Platform-Specific Notes

### Windows

- Use Visual Studio 2019 or later
- For SSL support, install OpenSSL and set `OPENSSL_ROOT_DIR`
- Tests can be run from Visual Studio or command line

### Linux

- Install development packages: `build-essential cmake`
- For SSL: `libssl-dev`
- For MySQL: `libmysqlclient-dev`
- For PostgreSQL: `libpq-dev`

### macOS

- Install Xcode Command Line Tools
- Use Homebrew for dependencies: `brew install openssl cmake`

## Getting Help

- **Questions**: Use [GitHub Discussions](https://github.com/quickfix/quickfix/discussions)
- **Chat**: Join the community on the mailing list
- **Issues**: For bugs and feature requests only

## Recognition

Contributors will be recognized in the project's contributor list. Significant contributions may be highlighted in release notes.

Thank you for contributing to QuickFIX!
