cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

set (quickfix_PROJECT_NAME quickfix)

add_definitions(-DNOMINMAX)

project(${quickfix_PROJECT_NAME} VERSION 0.1 LANGUAGES CXX C)
message("-- Project name ${CMAKE_PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)

if( MSVC AND STATIC_RUNTIME )
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
  set(CMAKE_CXX_FLAGS_MINSIZEREL "${CMAKE_CXX_FLAGS_MINSIZEREL} /MT")
  set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "${CMAKE_CXX_FLAGS_RELWITHDEBINFO} /MT")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
endif()

if( CMAKE_CXX_STANDARD EQUAL 17 )
  option( HAVE_CXX17 "Using C++17" ON)
endif()

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/cmake/")

include(QuickfixPlatformSettings)
include(QuickfixPrebuildSetup)

# Call cmake with-DHAVE_SSL=ON to compile with SSL. Similarly for others.
option(HAVE_SSL "Build with SSL")
option(HAVE_MYSQL "Build with MySQL")
option(HAVE_POSTGRESQL "Build with PostgreSQL")
option(HAVE_ODBC "Build with ODBC")
option(HAVE_PYTHON "Build with default Python version")
option(HAVE_PYTHON3 "Build with default Python3 version")

# add option to build shared or static
option(QUICKFIX_SHARED_LIBS "Build using shared libraries" ON)
# add option to build other targets
option(QUICKFIX_EXAMPLES "Build quickfix examples" ON)
option(QUICKFIX_TESTS "Build quickfix tests" ON)

#Make sure that a previous config.h has not undefined HAVE_SSL
if(HAVE_SSL)
# Can set location explicitly, example, cmake -DOPENSSL_ROOT_DIR=/usr/local/ssl -DOPENSSL_LIBRARIES=/usr/local/ssl/lib

find_package(OpenSSL REQUIRED)
include_directories(${OPENSSL_INCLUDE_DIR})

message("-- OPENSSL_INCLUDE_DIR: ${OPENSSL_INCLUDE_DIR}")
message("-- OPENSSL_LIBRARIES: ${OPENSSL_LIBRARIES}")
message("-- OPENSSL_ROOT_DIR: ${OPENSSL_ROOT_DIR}")

message("-- Building with SSL")
endif()

if(HAVE_MYSQL)
find_package(MySQL REQUIRED)
include_directories(${MYSQL_INCLUDE_DIR})

message("-- Building with MySQL")
endif()

if(HAVE_POSTGRESQL)
find_package(PostgreSQL REQUIRED)
include_directories(${PostgreSQL_INCLUDE_DIRS})

message("-- Building with POSTGRESQL")
endif()

if(HAVE_ODBC)
find_package(ODBC REQUIRED)
add_definitions(-DHAVE_ODBC)
include_directories(SYSTEM ${ODBC_INCLUDE_DIRS})

message("-- Building with ODBC")
endif()

if (HAVE_PYTHON)
  find_package(PythonLibs REQUIRED)
  include_directories(${PYTHON_INCLUDE_DIRS})
elseif (HAVE_PYTHON3)
  find_package(PythonLibs 3 REQUIRED)
  include_directories(${PYTHON_INCLUDE_DIRS})
endif ()

add_subdirectory(src)

if (QUICKFIX_EXAMPLES)
  add_subdirectory(examples)
endif()

if (QUICKFIX_TESTS)
  if( WIN32)
    add_subdirectory(test)
  endif()
endif()

configure_file(cmake_config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/src/C++/config.h @ONLY)
configure_file(cmake_config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/include/quickfix/config.h @ONLY)
file(REMOVE config.h)


configure_file(cmake_config.h.in ${CMAKE_CURRENT_SOURCE_DIR}/include/quickfix/config.h @ONLY)

install(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/spec/ DESTINATION share/quickfix FILES_MATCHING PATTERN "FIX*.xml")
 