cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

option(HAVE_EMX "Build with EMX")

if(HAVE_EMX)
  message("-- Building with EMX")
  set (quickfix_PROJECT_NAME quickfix-emx)
else()
  set (quickfix_PROJECT_NAME quickfix)
endif()

project(${quickfix_PROJECT_NAME} VERSION 0.1 LANGUAGES CXX C)
message("-- Project name ${CMAKE_PROJECT_NAME}")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)

if( CMAKE_CXX_STANDARD EQUAL 17 )
  option( HAVE_CXX17 "Using C++17" ON)
endif()

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

include(QuickfixPlatformSettings)
include(QuickfixPrebuildSetup)

# Call cmake with-DHAVE_SSL=ON to compile with SSL. Similarly for others.
option(HAVE_SSL "Build with SSL")
option(HAVE_MYSQL "Build with MySQL")
option(HAVE_POSTGRESQL "Build with PostgreSQL")
option(HAVE_PYTHON "Build with default Python version")
option(HAVE_PYTHON2 "Build with default Python2 version")
option(HAVE_PYTHON3 "Build with default Python3 version")

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

include(FindSharedPtr)
FIND_SHARED_PTR()
if (HAVE_SHARED_PTR_IN_STD_NAMESPACE)
  message("-- set HAVE_STD_SHARED_PTR")
  option( HAVE_STD_SHARED_PTR "HAVE_STD_SHARED_PTR" ON)
elseif(HAVE_SHARED_PTR_IN_TR1_NAMESPACE)
  message("-- set HAVE_STD_TR1_SHARED_PTR")
  option( HAVE_SHARED_PTR_IN_TR1_NAMESPACE "HAVE_SHARED_PTR_IN_TR1_NAMESPACE" ON)
elseif(HAVE_SHARED_PTR_IN_TR1_NAMESPACE_FROM_TR1_MEMORY_HEADER)
  message("-- set HAVE_STD_TR1_SHARED_PTR_FROM_TR1_MEMORY_HEADER")
  option( HAVE_STD_TR1_SHARED_PTR_FROM_TR1_MEMORY_HEADER "HAVE_STD_TR1_SHARED_PTR_FROM_TR1_MEMORY_HEADER" ON)
else()
  message("-- shared_ptr not found.")
endif()

include(FindUniquePtr)
FIND_UNIQUE_PTR()
if (HAVE_UNIQUE_PTR_IN_STD_NAMESPACE)
  message("-- set HAVE_STD_UNIQUE_PTR")
  option( HAVE_STD_UNIQUE_PTR "HAVE_STD_UNIQUE_PTR" ON)
endif()

if (HAVE_PYTHON)
  find_package(PythonLibs REQUIRED)
  include_directories(${PYTHON_INCLUDE_DIRS})
elseif (HAVE_PYTHON2)
  find_package(PythonLibs 2 REQUIRED)
  include_directories(${PYTHON_INCLUDE_DIRS})
elseif (HAVE_PYTHON3)
  find_package(PythonLibs 3 REQUIRED)
  include_directories(${PYTHON_INCLUDE_DIRS})
endif ()

if( WIN32 OR ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" )
add_subdirectory(UnitTest++)
endif()

add_subdirectory(src)
add_subdirectory(examples)
if( WIN32)
add_subdirectory(test)
endif()

configure_file(cmake_config.h.in ${CMAKE_SOURCE_DIR}/src/C++/config.h @ONLY)
configure_file(cmake_config.h.in ${CMAKE_SOURCE_DIR}/include/quickfix/config.h @ONLY)
file(REMOVE config.h)


install(DIRECTORY ${CMAKE_SOURCE_DIR}/spec/ DESTINATION share/quickfix
  FILES_MATCHING PATTERN "FIX*.xml")
