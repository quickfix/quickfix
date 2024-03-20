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

#ifdef _MSC_VER
#  define PRAGMA_PUSH( x )                      \
   __pragma( warning( push ) )                  \
   __pragma( warning( disable: x ) )
#  define PRAGMA_POP                            \
   __pragma( warning( pop ) )
#else
#  define PRAGMA_PUSH( x )
#  define PRAGMA_POP
#endif

#ifndef _MSC_VER
#include "Allocator.h"
#endif

#include "Except.h"

#ifdef ENABLE_DEBUG_ALLOCATOR
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
#define INVALID_SOCKET_HANDLE INVALID_SOCKET
#define BIND_SOCKET_ERROR SOCKET_ERROR
#define LISTEN_SOCKET_ERROR SOCKET_ERROR
#define SET_SOCK_OPT_ERROR SOCKET_ERROR
/////////////////////////////////////////////
#else
/////////////////////////////////////////////
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#if defined(__SUNPRO_CC)
#include <sys/filio.h>
#endif
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
#define INVALID_SOCKET_HANDLE -1
#define BIND_SOCKET_ERROR -1
#define LISTEN_SOCKET_ERROR -1
#define SET_SOCK_OPT_ERROR -1
/////////////////////////////////////////////
#endif

#include <string>
#include <cstring>
#include <set>
#include <cctype>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <memory>

namespace FIX
{
#ifdef _MSC_VER
typedef int socklen_t;
typedef SSIZE_T ssize_t;
typedef SOCKET socket_handle;
#else
typedef int socket_handle;
#endif

std::string error_strerror(decltype(errno) error_number);
std::string error_strerror();

#ifdef _MSC_VER
std::string error_wsaerror(int wsa_error_number);
std::string error_wsaerror();
#endif

void string_replace(const std::string& oldValue,
                    const std::string& newValue,
                    std::string& value);

extern "C" {
char* string_concat(const char *a, ...);
}

std::string string_toLower(const std::string& value);
std::string string_toUpper(const std::string& value);
std::string string_strip(const std::string& value);
std::set<std::string> string_split(const std::string& value, const char delimiter);

void socket_init();
void socket_term();
std::string socket_error();
int socket_bind(socket_handle socket, const char* hostname, int port);
socket_handle socket_createAcceptor(int port, bool reuse = false);
socket_handle socket_createConnector();
int socket_connect(socket_handle s, const char* address, int port);
socket_handle socket_accept(socket_handle s);
ssize_t socket_recv(socket_handle s, char* buf, size_t length);
ssize_t socket_send(socket_handle s, const char* msg, size_t length);
void socket_close(socket_handle s);
std::string socket_get_last_error();
bool socket_fionread(socket_handle s, int& bytes);
bool socket_disconnected(socket_handle s);
int socket_setsockopt(socket_handle s, int opt);
int socket_setsockopt(socket_handle s, int opt, int optval);
int socket_getsockopt(socket_handle s, int opt, int& optval);
#ifndef _MSC_VER
int socket_fcntl(int s, int opt, int arg);
int socket_getfcntlflag(int s, int arg);
int socket_setfcntlflag(int s, int arg);
#endif
void socket_setnonblock(socket_handle s);
bool socket_isValid(socket_handle socket);
#ifndef _MSC_VER
bool socket_isBad(int s);
#endif
void socket_invalidate(socket_handle& socket);
short socket_hostport(socket_handle socket);
const char* socket_hostname(socket_handle socket);
const char* socket_hostname(const char* name);
const char* socket_peername(socket_handle socket);
std::pair<socket_handle, socket_handle> socket_createpair();

tm time_gmtime(const time_t* t);
tm time_localtime(const time_t* t);

#if(_MSC_VER >= 1900)
typedef _beginthreadex_proc_type THREAD_START_ROUTINE;
#define THREAD_PROC unsigned int _stdcall
#elif(_MSC_VER > 0)
typedef unsigned int(_stdcall* THREAD_START_ROUTINE)(void*);
#define  THREAD_PROC unsigned int _stdcall
#else
extern "C" { typedef void* (THREAD_START_ROUTINE)(void*); }
#define THREAD_PROC void *
#endif

#ifdef _MSC_VER
typedef HANDLE thread_id;
#else
typedef pthread_t thread_id;
#endif

bool thread_spawn(THREAD_START_ROUTINE func, void* var, thread_id& thread);
bool thread_spawn(THREAD_START_ROUTINE func, void* var);
void thread_join(thread_id thread);
void thread_detach(thread_id thread);
thread_id thread_self();

void process_sleep(double s);

std::string file_separator();
void file_mkdir(const char* path);
FILE* file_fopen(const char* path, const char* mode);
void file_fclose(FILE* file);
bool file_exists(const char* path);
void file_unlink(const char* path);
int file_rename(const char* oldpath, const char* newpath);
std::string file_appendpath(const std::string& path, const std::string& file);
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

#if (!defined(_MSC_VER) || (_MSC_VER >= 1300))
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
