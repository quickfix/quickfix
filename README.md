# QuickFIX

[![Build Status](https://github.com/quickfix/quickfix/actions/workflows/build_test_cmake.yml/badge.svg)](https://github.com/quickfix/quickfix/actions)
[![License](https://img.shields.io/badge/license-QuickFIX-blue.svg)](LICENSE)

QuickFIX is a free, open-source implementation of the [FIX protocol](http://www.fixprotocol.org/) (Financial Information eXchange). It is a full-featured messaging engine that supports FIX versions 4.0 through 5.0 SP2, including FIXT 1.1.

## Features

- **FIX Protocol Support**: FIX 4.0, 4.1, 4.2, 4.3, 4.4, 5.0, 5.0 SP1, 5.0 SP2, and FIXT 1.1
- **Multiple Language Bindings**: C++, Python, Ruby (via SWIG)
- **Database Support**: MySQL, PostgreSQL, ODBC
- **SSL/TLS Support**: Native OpenSSL integration
- **Flexible Architecture**: Pluggable message stores and logging
- **Cross-Platform**: Windows, Linux, macOS, FreeBSD, Solaris, AIX
- **Production Ready**: Used by banks, brokers, and trading firms worldwide

## Supported Platforms

QuickFIX is tested on:
- **Windows**: Windows Server 2019, Windows Server 2022
- **Linux**: Ubuntu (latest), various distributions
- **macOS**: Latest versions
- **FreeBSD**: Supported via autotools
- **Solaris**: See [README.SunOS](README.SunOS)
- **AIX**: See [README.AIX](README.AIX)

## Quick Start

### Prerequisites

- C++17 compatible compiler (GCC, Clang, MSVC)
- CMake 3.5+ or Autotools
- Optional: OpenSSL (for SSL/TLS support)
- Optional: MySQL, PostgreSQL, or ODBC (for database message stores)

### Building with CMake (Recommended)

#### Linux / macOS

```bash
cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_INSTALL_PREFIX=/usr/local .
make -j$(nproc)
sudo make install
```

#### Linux / macOS with SSL Support

```bash
cmake -DCMAKE_BUILD_TYPE=Release -DHAVE_SSL=ON -DCMAKE_INSTALL_PREFIX=/usr/local .
make -j$(nproc)
sudo make install
```

#### Windows

```bash
mkdir build
cd build
cmake -G "Visual Studio 17 2022" -A x64 -DCMAKE_INSTALL_PREFIX=C:\quickfix ..
cmake --build . --config Release
cmake --install . --config Release
```

#### Windows with SSL Support

```bash
mkdir build
cd build
cmake -G "Visual Studio 17 2022" -A x64 ^
  -DHAVE_SSL=ON ^
  -DOPENSSL_ROOT_DIR="C:\path\to\openssl" ^
  -DCMAKE_INSTALL_PREFIX=C:\quickfix ..
cmake --build . --config Release
cmake --install . --config Release
```

#### CMake Build Options

- `-DHAVE_SSL=ON` - Enable SSL/TLS support (requires OpenSSL)
- `-DHAVE_MYSQL=ON` - Enable MySQL support
- `-DHAVE_POSTGRESQL=ON` - Enable PostgreSQL support
- `-DHAVE_ODBC=ON` - Enable ODBC support
- `-DHAVE_PYTHON3=ON` - Build Python 3 bindings
- `-DQUICKFIX_SHARED_LIBS=ON` - Build shared libraries (default: ON)
- `-DQUICKFIX_EXAMPLES=ON` - Build example applications (default: ON)
- `-DQUICKFIX_TESTS=ON` - Build tests (default: ON)

### Building with Autotools

```bash
./bootstrap
./configure
make
make check
sudo make install
```

#### Autotools Configuration Options

- `--with-openssl=/path/to/openssl` - Enable SSL support
- `--with-mysql` - Enable MySQL support
- `--with-postgresql` - Enable PostgreSQL support
- `--with-python3` - Build Python 3 bindings
- `--with-ruby` - Build Ruby bindings
- `--prefix=/install/path` - Installation prefix (default: /usr/local)

### Using vcpkg

```bash
git clone https://github.com/Microsoft/vcpkg.git
cd vcpkg
./bootstrap-vcpkg.sh  # or bootstrap-vcpkg.bat on Windows
./vcpkg integrate install
./vcpkg install quickfix
```

## Documentation

- **Building**: See [doc/html/building.html](doc/html/building.html)
- **Configuration**: See [doc/html/configuration.html](doc/html/configuration.html)
- **SSL Setup**: See [README.SSL](README.SSL)
- **API Documentation**: Generate with Doxygen in the `doc/` directory
- **Examples**: See the `examples/` directory for sample applications

## Example Applications

QuickFIX includes several example applications:

- **executor**: A simple order execution simulator
- **ordermatch**: A matching engine example
- **tradeclient**: An interactive trading client

These examples demonstrate how to build FIX applications using QuickFIX.

## Language Bindings

### Python

```bash
# Build with Python 3 support
cmake -DHAVE_PYTHON3=ON .
make
```

Python bindings are also available via pip:
```bash
pip install quickfix
```

### Ruby

```bash
# Build with Ruby support using autotools
./configure --with-ruby
make
```

## Testing

Run the test suite:

```bash
# With CMake
cmake --build . --target test

# With Autotools
make check
```

## Contributing

We welcome contributions! Please see [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines on:
- Reporting bugs
- Suggesting features
- Submitting pull requests
- Code style guidelines

## Security

For security-related issues, please see our [Security Policy](SECURITY.md).

## License

QuickFIX is licensed under the [QuickFIX Software License](LICENSE). See the LICENSE file for details.

## Support and Community

- **Issues**: Report bugs and request features on [GitHub Issues](https://github.com/quickfix/quickfix/issues)
- **Discussions**: Ask questions on [GitHub Discussions](https://github.com/quickfix/quickfix/discussions)
- **Mailing List**: [quickfixengine-users](https://sourceforge.net/projects/quickfix/lists/quickfixengine-users)

## Acknowledgments

QuickFIX is maintained by the open-source community. Special thanks to all [contributors](https://github.com/quickfix/quickfix/graphs/contributors) who have helped make this project possible.

