cmake_minimum_required(VERSION 3.0 FATAL_ERROR)

project(quickfix VERSION 0.1 LANGUAGES CXX)

#AIX do something like
#export OBJECT_MODE=64
#mkdir build
#cd build
#CC=xlc_r CXX=xlC_r cmake .. -DHAVE_SSL=ON -DCMAKE_INSTALL_PREFIX:PATH=install-path
if( ${CMAKE_SYSTEM_NAME} STREQUAL "AIX" )
add_definitions(-q64 -D_THREAD_SAFE -qthreaded -D__IBMCPP_TR1__=1)
endif()

#SunOS can try
#CC=cc CXX=CC cmake .. -DHAVE_SSL=ON -DCMAKE_INSTALL_PREFIX:PATH=install-path -DOPENSSL_ROOT_DIR=path -DOPENSSL_LIBRARIES=path
if( ${CMAKE_SYSTEM_NAME} STREQUAL "SunOS" )
add_definitions(-m64)
set( CMAKE_EXE_LINKER_FLAGS "-m64 -lrt" CACHE STRING "Executable link flags" FORCE )
set( CMAKE_SHARED_LINKER_FLAGS "-m64 -lrt" CACHE STRING "shared link flags" FORCE )
endif()

# TODO - config, allocator, mysql etc.
#CONFIGURE_FILE(${CMAKE_SOURCE_DIR}/config.h.in ${CMAKE_SOURCE_DIR}/config.h)

# Call cmake with-DHAVE_SSL=ON to compile with SSL
option(HAVE_SSL "Build with SSL option")

if(HAVE_SSL)
# Can set location explicitly, example, cmake -DOPENSSL_ROOT_DIR=/usr/local/ssl -DOPENSSL_LIBRARIES=/usr/local/ssl/lib

find_package(OpenSSL REQUIRED)
include_directories(${OPENSSL_INCLUDE_DIR})

message("OPENSSL_INCLUDE_DIR: ${OPENSSL_INCLUDE_DIR}")
message("OPENSSL_LIBRARIES: ${OPENSSL_LIBRARIES}")
message("OPENSSL_ROOT_DIR: ${OPENSSL_ROOT_DIR}")

message("Building with SSL")
add_compile_options("-DHAVE_SSL")
endif()


if( WIN32 OR ${CMAKE_SYSTEM_NAME} STREQUAL "Linux" )
add_subdirectory(UnitTest++)
endif()

add_subdirectory(src)
add_subdirectory(examples)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/spec/ DESTINATION share/quickfix
  FILES_MATCHING PATTERN "FIX*.xml")
