/* -*- C++ -*- */

/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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
/////////////////////////////////////////////
#include <Winsock2.h>
#include <process.h>
#include <direct.h>
#include <time.h>
typedef int socklen_t;
/////////////////////////////////////////////
#else 
/////////////////////////////////////////////
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <unistd.h>
#include <pthread.h>
#include <signal.h>
#include <errno.h>
#include <time.h> 
/////////////////////////////////////////////
#endif

#include <string>
#include <cctype>
#include <ctime>

namespace FIX
{
void string_replace( const std::string& oldValue, 
		     const std::string& newValue,
		     std::string& value );

void socket_init();
void socket_term();
int socket_createAcceptor( int port, bool reuse = false );
int socket_createConnector( const char* address, int port );
int socket_accept( int s );
bool socket_send( int s, const char* msg, int length );
void socket_close( int s );
bool socket_fionread( int s, int& bytes );
bool socket_disconnected( int s );
void socket_setsockopt( int s, int opt );
bool socket_isValid( int socket );
#ifndef _MSC_VER
bool socket_isBad( int s );
#endif
void socket_invalidate( int& socket );
const char* socket_hostname( const char* name );

tm time_gmtime( const time_t* t );
tm time_localtime( const time_t* t);

#ifdef _MSC_VER
typedef unsigned int (_stdcall THREAD_START_ROUTINE)(void *);
#define  THREAD_PROC unsigned int _stdcall 
#else
extern "C" { typedef void * (THREAD_START_ROUTINE)(void *); }
#define THREAD_PROC void *
#endif

bool thread_spawn( THREAD_START_ROUTINE func, void* var, unsigned& thread );
bool thread_spawn( THREAD_START_ROUTINE func, void* var );
void thread_join( unsigned thread );
void thread_detach( unsigned thread );
unsigned thread_self();

void process_sleep( double s );

std::string file_separator();
#ifdef _MSC_VER
void file_mkdir( const char* path, int mode );
#else
void file_mkdir( const char* path, mode_t mode );
#endif
void file_unlink( const char* path );
std::string file_appendpath( const std::string& path, const std::string& file );
}

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
#endif

#endif
