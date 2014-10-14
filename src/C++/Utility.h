/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2014
**
** This file is part of the QuickFIX FIX Engine
**
** This file may be distributed under the terms of the quickfixengine.org
** license as defined by quickfixengine.org and appearing in the file
** LICENSE included in the packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.quickfixengine.org/LICENSE for licensing information.
**
** Contact ask@quickfixengine.org if any conditions of this licensing are
** not clear to you.
**
****************************************************************************/

#ifndef FIX_UTILITY_H
#define FIX_UTILITY_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#ifndef _MSC_VER
#include "Allocator.h"
#endif

#ifdef HAVE_STLPORT
  #define ALLOCATOR std::allocator
#elif ENABLE_DEBUG_ALLOCATOR
  #include <ext/debug_allocator.h>
  #define ALLOCATOR __gnu_cxx::debug_allocator
#elif ENABLE_NEW_ALLOCATOR
  #include <ext/new_allocator.h>
  #define ALLOCATOR __gnu_cxx::new_allocator
#elif ENABLE_BOOST_FAST_POOL_ALLOCATOR
  #include <boost/pool/pool_alloc.hpp>
  #define ALLOCATOR boost::fast_pool_allocator
#elif ENABLE_MT_ALLOCATOR
  #include <ext/mt_allocator.h>
  #define ALLOCATOR __gnu_cxx::__mt_alloc
#elif ENABLE_BOOST_POOL_ALLOCATOR
  #include <boost/pool/pool_alloc.hpp>
  #define ALLOCATOR boost::pool_allocator
#elif ENABLE_POOL_ALLOCATOR
  #include <ext/pool_allocator.h>
  #define ALLOCATOR __gnu_cxx::__pool_alloc
#elif ENABLE_BITMAP_ALLOCATOR
  #include <ext/bitmap_allocator.h>
  #define ALLOCATOR __gnu_cxx::bitmap_allocator
#elif ENABLE_TBB_ALLOCATOR
  #include <tbb/scalable_allocator.h>
  #define ALLOCATOR tbb::scalable_allocator
#else
  #define ALLOCATOR std::allocator
#endif

#ifdef _MSC_VER
/////////////////////////////////////////////
#include <Winsock2.h>
#include <process.h>
#include <direct.h>
#include <time.h>
typedef int socklen_t;
typedef int ssize_t;
/////////////////////////////////////////////
#else
/////////////////////////////////////////////
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <netinet/in.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <fcntl.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <errno.h>
#include <time.h>
#include <stdlib.h>
/////////////////////////////////////////////
#endif

#include <string>
#include <cstring>
#include <cctype>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <memory>

#if defined(HAVE_STD_SHARED_PTR)
  namespace ptr = std;
#elif defined(HAVE_STD_TR1_SHARED_PTR)
  #include <tr1/memory>
  namespace ptr = std::tr1;
#else
  namespace ptr = std;
#endif

namespace FIX
{
void string_replace( const std::string& oldValue,
                     const std::string& newValue,
                     std::string& value );

std::string string_toLower( const std::string& value );
std::string string_toUpper( const std::string& value );
std::string string_strip( const std::string& value );

void socket_init();
void socket_term();
int socket_createAcceptor( int port, bool reuse = false );
int socket_createConnector();
int socket_connect( int s, const char* address, int port );
int socket_accept( int s );
ssize_t socket_send( int s, const char* msg, size_t length );
void socket_close( int s );
bool socket_fionread( int s, int& bytes );
bool socket_disconnected( int s );
int socket_setsockopt( int s, int opt );
int socket_setsockopt( int s, int opt, int optval );
int socket_getsockopt( int s, int opt, int& optval );
#ifndef _MSC_VER
int socket_fcntl( int s, int opt, int arg );
int socket_getfcntlflag( int s, int arg );
int socket_setfcntlflag( int s, int arg );
#endif
void socket_setnonblock( int s );
bool socket_isValid( int socket );
#ifndef _MSC_VER
bool socket_isBad( int s );
#endif
void socket_invalidate( int& socket );
short socket_hostport( int socket );
const char* socket_hostname( int socket );
const char* socket_hostname( const char* name );
const char* socket_peername( int socket );
std::pair<int, int> socket_createpair();

tm time_gmtime( const time_t* t );
tm time_localtime( const time_t* t );

#ifdef _MSC_VER
typedef unsigned int (_stdcall THREAD_START_ROUTINE)(void *);
#define  THREAD_PROC unsigned int _stdcall
#else
extern "C" { typedef void * (THREAD_START_ROUTINE)(void *); }
#define THREAD_PROC void *
#endif

#ifdef _MSC_VER
typedef unsigned thread_id;
#else
typedef pthread_t thread_id;
#endif

bool thread_spawn( THREAD_START_ROUTINE func, void* var, thread_id& thread );
bool thread_spawn( THREAD_START_ROUTINE func, void* var );
void thread_join( thread_id thread );
void thread_detach( thread_id thread );
thread_id thread_self();

void process_sleep( double s );

std::string file_separator();
void file_mkdir( const char* path );
FILE* file_fopen( const char* path, const char* mode );
void file_fclose( FILE* file );
bool file_exists( const char* path );
void file_unlink( const char* path );
int file_rename( const char* oldpath, const char* newpath );
std::string file_appendpath( const std::string& path, const std::string& file );
}

#if( _MSC_VER >= 1400 )
#define HAVE_FSCANF_S 1
#define FILE_FSCANF fscanf_s
#else
#define FILE_FSCANF fscanf
#endif

#if( _MSC_VER >= 1400 )
#define HAVE_SPRINTF_S 1
#define STRING_SPRINTF sprintf_s
#else
#define STRING_SPRINTF sprintf
#endif

#if (!defined(_MSC_VER) || (_MSC_VER >= 1300)) && !defined(HAVE_STLPORT)
using std::abort;
using std::sprintf;
using std::atoi;
using std::atol;
using std::atof;
using std::isdigit;
using std::strcmp;
using std::strftime;
using std::strlen;
using std::abs;
using std::labs;
using std::memcpy;
using std::memset;
using std::exit;
using std::strtod;
using std::strtol;
using std::strerror;
#endif

#endif
