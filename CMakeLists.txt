cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

option(HAVE_EMX "Build with EMX")

if(HAVE_EMX)
message("-- Building with EMX")
add_definitions("-DHAVE_EMX=1")
set (quickfix_PROJECT_NAME quickfix-emx)
else()
set (quickfix_PROJECT_NAME quickfix)
endif()

project(${quickfix_PROJECT_NAME} VERSION 0.1 LANGUAGES CXX C)
message("-- Project name ${CMAKE_PROJECT_NAME}")

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
add_definitions("-DHAVE_SSL=1")
endif()

if(HAVE_MYSQL)
find_package(MySQL REQUIRED)
include_directories(${MYSQL_INCLUDE_DIR})

message("-- Building with MySQL")
add_definitions("-DHAVE_MYSQL=1")
endif()

if(HAVE_POSTGRESQL)
find_package(PostgreSQL REQUIRED)
include_directories(${PostgreSQL_INCLUDE_DIRS})

message("-- Building with POSTGRESQL")
add_definitions("-DHAVE_POSTGRESQL=1")
endif()

include(FindSharedPtr)
FIND_SHARED_PTR()
if (HAVE_SHARED_PTR_IN_STD_NAMESPACE)
message("-- set HAVE_STD_SHARED_PTR")
add_definitions("-DHAVE_STD_SHARED_PTR=1")
elseif(HAVE_SHARED_PTR_IN_TR1_NAMESPACE)
message("-- set HAVE_STD_TR1_SHARED_PTR")
add_definitions("-DHAVE_STD_TR1_SHARED_PTR=1")
elseif(HAVE_SHARED_PTR_IN_TR1_NAMESPACE_FROM_TR1_MEMORY_HEADER)
message("-- set HAVE_STD_TR1_SHARED_PTR_FROM_TR1_MEMORY_HEADER")
add_definitions("-DHAVE_STD_TR1_SHARED_PTR_FROM_TR1_MEMORY_HEADER=1")
else()
message("-- shared_ptr not found.")
endif()

include(FindUniquePtr)
FIND_UNIQUE_PTR()
if (HAVE_UNIQUE_PTR_IN_STD_NAMESPACE)
message("-- set HAVE_STD_UNIQUE_PTR")
add_definitions("-DHAVE_STD_UNIQUE_PTR=1")
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

install(DIRECTORY ${CMAKE_SOURCE_DIR}/spec/ DESTINATION share/quickfix
  FILES_MATCHING PATTERN "FIX*.xml")
