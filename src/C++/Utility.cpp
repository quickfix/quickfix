/****************************************************************************
** Copyright (c) quickfixengine.org  All rights reserved.
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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "Utility.h"

#ifdef USING_STREAMS
#include <stropts.h>
#include <sys/conf.h>
#endif
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <fstream>

namespace FIX
{
void string_replace( const std::string& oldValue,
		             const std::string& newValue,
		             std::string& value )
{ QF_STACK_PUSH(string_replace)

  for( std::string::size_type pos = value.find(oldValue);
       pos != std::string::npos;
       pos = value.find(oldValue, pos) )
  {
    value.replace( pos, oldValue.size(), newValue );
    pos += newValue.size();
  }

  QF_STACK_POP
}

std::string string_toUpper( const std::string& value )
{ QF_STACK_PUSH(string_toUpper)

  std::string copy = value;
  std::transform( copy.begin(), copy.end(), copy.begin(), toupper );
  return copy;

  QF_STACK_POP
}

std::string string_toLower( const std::string& value )
{ QF_STACK_PUSH(string_toLower)

  std::string copy = value;
  std::transform( copy.begin(), copy.end(), copy.begin(), tolower );
  return copy;

  QF_STACK_POP
}

std::string string_strip( const std::string& value )
{ QF_STACK_PUSH(string_strip)

  if( !value.size() )
    return value;

  int startPos = value.find_first_not_of(" \t\r\n");
  int endPos = value.find_last_not_of(" \t\r\n");

  if( startPos == -1 )
   return value;

   return std::string( value, startPos, endPos - startPos + 1 );

  QF_STACK_POP
}

void socket_init()
{ QF_STACK_PUSH(socket_init)

#ifdef _MSC_VER
  WORD version = MAKEWORD( 2, 2 );
  WSADATA data;
  WSAStartup( version, &data );
#else
  struct sigaction sa;
  sa.sa_handler = SIG_IGN;
  sigemptyset( &sa.sa_mask );
  sa.sa_flags = 0;
  sigaction( SIGPIPE, &sa, 0 );
#endif

  QF_STACK_POP
}

void socket_term()
{ QF_STACK_PUSH(socket_term)

#ifdef _MSC_VER
  WSACleanup();
#endif

  QF_STACK_POP
}

int socket_createAcceptor(int port, bool reuse)
{ QF_STACK_PUSH(socket_createAcceptor)

  int socket = ::socket( PF_INET, SOCK_STREAM, 0 );
  if ( socket < 0 ) return -1;

  sockaddr_in address;
  socklen_t socklen;

  address.sin_family = PF_INET;
  address.sin_port = htons( port );
  address.sin_addr.s_addr = INADDR_ANY;
  socklen = sizeof( address );
  if( reuse )
    socket_setsockopt( socket, SO_REUSEADDR );

  int result = bind( socket, reinterpret_cast < sockaddr* > ( &address ),
                     socklen );
  if ( result < 0 ) return -1;
  result = listen( socket, SOMAXCONN );
  if ( result < 0 ) return -1;
  return socket;

  QF_STACK_POP
}

int socket_createConnector()
{ QF_STACK_PUSH(socket_createConnector)
  return ::socket( PF_INET, SOCK_STREAM, IPPROTO_TCP );
  QF_STACK_POP
}

int socket_connect( int socket, const char* address, int port )
{ QF_STACK_PUSH(socket_connect)

  const char* hostname = socket_hostname( address );
  if( hostname == 0 ) return -1;

  sockaddr_in addr;
  addr.sin_family = PF_INET;
  addr.sin_port = htons( port );
  addr.sin_addr.s_addr = inet_addr( hostname );

  int result = connect( socket, reinterpret_cast < sockaddr* > ( &addr ),
                        sizeof( addr ) );

  return result;

  QF_STACK_POP
}

int socket_accept( int s )
{ QF_STACK_PUSH(socket_accept)

  if ( !socket_isValid( s ) ) return -1;
  return accept( s, 0, 0 );

  QF_STACK_POP
}

int socket_send( int s, const char* msg, int length )
{ QF_STACK_PUSH(socket_send)
  return send( s, msg, length, 0 );
  QF_STACK_POP
}

void socket_close( int s )
{ QF_STACK_PUSH(socket_close)

  shutdown( s, 2 );
#ifdef _MSC_VER
  closesocket( s );
#else
  close( s );
#endif

  QF_STACK_POP
}

bool socket_fionread( int s, int& bytes )
{ QF_STACK_PUSH(socket_fionread)

  bytes = 0;
#if defined(_MSC_VER)
  return ::ioctlsocket( s, FIONREAD, &( ( unsigned long& ) bytes ) ) == 0;
#elif defined(USING_STREAMS)
  return ::ioctl( s, I_NREAD, &bytes ) >= 0;
#else
  return ::ioctl( s, FIONREAD, &bytes ) == 0;
#endif

  QF_STACK_POP
}

bool socket_disconnected( int s )
{ QF_STACK_PUSH(socket_disconnected)

  char byte;
  return ::recv (s, &byte, sizeof (byte), MSG_PEEK) <= 0;

  QF_STACK_POP
}

int socket_setsockopt( int s, int opt )
{ QF_STACK_PUSH(socket_setsockopt)

#ifdef _MSC_VER
  BOOL optval = TRUE;
#else
  int optval = 1;
#endif
  return socket_setsockopt( s, opt, optval );

  QF_STACK_POP
}

int socket_setsockopt( int s, int opt, int optval )
{ QF_STACK_PUSH(socket_setsockopt)

  int level = SOL_SOCKET;
  if( opt == TCP_NODELAY )
    level = IPPROTO_TCP;

#ifdef _MSC_VER
  return ::setsockopt( s, level, opt,
                       ( char* ) & optval, sizeof( optval ) );
#else
  return ::setsockopt( s, level, opt,
                       &optval, sizeof( optval ) );
#endif

  QF_STACK_POP
}

int socket_getsockopt( int s, int opt, int& optval )
{ QF_STACK_PUSH(socket_getsockopt)

  int level = SOL_SOCKET;
  if( opt == TCP_NODELAY )
    level = IPPROTO_TCP;

#ifdef _MSC_VER
  int length = sizeof(int);
#else
  socklen_t length = sizeof(socklen_t);
#endif

  return ::getsockopt( s, level, opt, 
                       ( char* ) & optval, & length );

  QF_STACK_POP
}

#ifndef _MSC_VER
int socket_fcntl( int s, int opt, int arg )
{ QF_STACK_PUSH(socket_fcntl)
  return ::fcntl( s, opt, arg );
  QF_STACK_POP
}

int socket_getfcntlflag( int s, int arg )
{ QF_STACK_PUSH(socket_getfcntlflag)  
  return socket_fcntl( s, F_GETFL, arg );
  QF_STACK_POP
}

int socket_setfcntlflag( int s, int arg )
{ QF_STACK_PUSH(socket_setfcntlflag)

  int oldValue = socket_getfcntlflag( s, arg );
  oldValue |= arg;
  return socket_fcntl( s, F_SETFL, arg );

  QF_STACK_POP
}
#endif

void socket_setnonblock( int socket )
{ QF_STACK_PUSH(socket_setnonblock)

#ifdef _MSC_VER
  u_long opt = 1;
  ::ioctlsocket( socket, FIONBIO, &opt );
#else
  socket_setfcntlflag( socket, O_NONBLOCK );
#endif

  QF_STACK_POP
}
bool socket_isValid( int socket )
{ QF_STACK_PUSH(socket_isValid)

#ifdef _MSC_VER
  return socket != INVALID_SOCKET;
#else
  return socket >= 0;
#endif

  QF_STACK_POP
}

#ifndef _MSC_VER
bool socket_isBad( int s )
{ QF_STACK_PUSH(socket_isBad)

  struct stat buf;
  fstat( s, &buf );
  return errno == EBADF;

  QF_STACK_POP
}
#endif

void socket_invalidate( int& socket )
{ QF_STACK_PUSH(socket_invalidate)

#ifdef _MSC_VER
  socket = INVALID_SOCKET;
#else
  socket = -1;
#endif

  QF_STACK_POP
}

short socket_hostport( int socket )
{ QF_STACK_PUSH(socket_hostport)

  struct sockaddr_in addr;
  socklen_t len = sizeof(addr);
  if( getsockname(socket, (struct sockaddr*)&addr, &len) < 0 )
    return 0;

  return ntohs( addr.sin_port );
  
  QF_STACK_POP
}

const char* socket_hostname( int socket )
{ QF_STACK_PUSH(socket_hostname)

  struct sockaddr_in addr;
  socklen_t len = sizeof(addr);
  if( getsockname(socket, (struct sockaddr*)&addr, &len) < 0 )
    return 0;

  return inet_ntoa( addr.sin_addr );

  QF_STACK_POP
}

const char* socket_hostname( const char* name )
{ QF_STACK_PUSH(socket_hostname)

  struct hostent* host_ptr = 0;
  struct in_addr** paddr;
  struct in_addr saddr;

#if( GETHOSTBYNAME_R_INPUTS_RESULT || GETHOSTBYNAME_R_RETURNS_RESULT )
  hostent host;
  char buf[1024];
  int error;
#endif

  saddr.s_addr = inet_addr( name );
  if ( saddr.s_addr != ( unsigned ) - 1 ) return name;

#if GETHOSTBYNAME_R_INPUTS_RESULT
  gethostbyname_r( name, &host, buf, sizeof(buf), &host_ptr, &error );
#elif GETHOSTBYNAME_R_RETURNS_RESULT
  host_ptr = gethostbyname_r( name, &host, buf, sizeof(buf), &error );
#else
  host_ptr = gethostbyname( name );
#endif

  if ( host_ptr == 0 ) return 0;

  paddr = ( struct in_addr ** ) host_ptr->h_addr_list;
  return inet_ntoa( **paddr );

  QF_STACK_POP
}

const char* socket_peername( int socket )
{ QF_STACK_PUSH(socket_peername)

  struct sockaddr_in addr;
  socklen_t len = sizeof(addr);
  if( getpeername( socket, (struct sockaddr*)&addr, &len ) < 0 )
    return "UNKNOWN";
  char* result = inet_ntoa( addr.sin_addr );
  if( result )
    return result;
  else
    return "UNKNOWN";
    

  QF_STACK_POP
}

std::pair<int, int> socket_createpair()
{ QF_STACK_PUSH(socket_createpair)

#ifdef _MSC_VER
  int acceptor = socket_createAcceptor(0, true);
  const char* host = socket_hostname( acceptor );
  short port = socket_hostport( acceptor );
  int client = socket_createConnector();
  socket_connect( client, "localhost", port );
  int server = socket_accept( acceptor );
  return std::pair<int, int>( client, server );
#else
  int pair[2];
  socketpair( AF_UNIX, SOCK_STREAM, 0, pair );
  return std::pair<int, int>( pair[0], pair[1] );
#endif

  QF_STACK_POP
}

tm time_gmtime( const time_t* t )
{ QF_STACK_PUSH(time_gmtime)

#ifdef _MSC_VER
  #if( _MSC_VER >= 1400 )
    tm result;
    gmtime_s( &result, t );
    return result;
  #else
    return *gmtime( t );
  #endif
#else
  tm result;
  return *gmtime_r( t, &result );
#endif

  QF_STACK_POP
}

tm time_localtime( const time_t* t)
{ QF_STACK_PUSH(time_localtime)

#ifdef _MSC_VER
  #if( _MSC_VER >= 1400 )
    tm result;
    localtime_s( &result, t );
    return result;
  #else
    return *localtime( t );
  #endif
#else
  tm result;
  return *localtime_r( t, &result );
#endif

  QF_STACK_POP
}

bool thread_spawn( THREAD_START_ROUTINE func, void* var, thread_id& thread )
{
#ifdef _MSC_VER
  thread_id result = 0;
  unsigned int id = 0;
  result = _beginthreadex( NULL, 0, &func, var, 0, &id );
  if ( result == 0 ) return false;
#else
  thread_id result = 0;
  if( pthread_create( &result, 0, func, var ) != 0 ) return false;
#endif
  thread = result;
  return true;
}

bool thread_spawn( THREAD_START_ROUTINE func, void* var )
{ 
  thread_id thread = 0;
  return thread_spawn( func, var, thread );
}

void thread_join( thread_id thread )
{ QF_STACK_PUSH(thread_join)

#ifdef _MSC_VER
  WaitForSingleObject( ( void* ) thread, INFINITE );
  CloseHandle((HANDLE)thread);
#else
  pthread_join( ( pthread_t ) thread, 0 );
#endif

  QF_STACK_POP
}

void thread_detach( thread_id thread )
{ QF_STACK_PUSH(thread_detach)

#ifdef _MSC_VER
  CloseHandle((HANDLE)thread);
#else
  pthread_t t = thread;
  pthread_detach( t );
#endif

  QF_STACK_POP
}

thread_id thread_self()
{
#ifdef _MSC_VER
  return (unsigned)GetCurrentThread();
#else
  return pthread_self();
#endif
}

void process_sleep( double s )
{ QF_STACK_PUSH(process_sleep)

#ifdef _MSC_VER
  Sleep( (long)(s * 1000) );
#else
  timespec time, remainder;
  double intpart;
  time.tv_nsec = (long)(modf(s, &intpart) * 1e9);
  time.tv_sec = (int)intpart;
  while( nanosleep(&time, &remainder) == -1 )
  time = remainder;
#endif

  QF_STACK_POP
}

std::string file_separator()
{ QF_STACK_PUSH(file_separator)

#ifdef _MSC_VER
  return "\\";
#else
  return "/";
#endif

  QF_STACK_POP
}

void file_mkdir( const char* path )
{ QF_STACK_PUSH(file_mkdir)

  int length = strlen( path );
  std::string createPath = "";

  for( const char* pos = path; pos - path <= length; ++pos )
  {
    createPath += *pos;
    if( *pos == '/' || *pos == '\\' || pos - path == length )
    {
    #ifdef _MSC_VER
      _mkdir( createPath.c_str() );
    #else
      // use umask to override rwx for all
      mkdir( createPath.c_str(), 0777 );
    #endif
    }
  }

  QF_STACK_POP
}

FILE* file_fopen( const char* path, const char* mode )
{ QF_STACK_PUSH(file_fopen)

#if( _MSC_VER >= 1400 )
  FILE* result = 0;
  fopen_s( &result, path, mode );
  return result;
#else
  return fopen( path, mode );
#endif

  QF_STACK_POP
}

void file_fclose( FILE* file )
{ QF_STACK_PUSH(file_fclose)
  fclose( file );
  QF_STACK_POP
}

bool file_exists( const char* path )
{ QF_STACK_PUSH(file_exists)

  std::ifstream stream;
  stream.open( path, std::ios_base::in );
  if( stream.is_open() )
  {
    stream.close();
    return true;
  }
  return false;
  
  QF_STACK_POP
}

void file_unlink( const char* path )
{ QF_STACK_PUSH(file_unlink)

#ifdef _MSC_VER
  _unlink( path );
#else
  unlink( path );
#endif

  QF_STACK_POP
}

int file_rename( const char* oldpath, const char* newpath )
{ QF_STACK_PUSH(file_rename)
  return rename( oldpath, newpath );
  QF_STACK_POP
}

std::string file_appendpath( const std::string& path, const std::string& file )
{ QF_STACK_PUSH(file_appendpath)

  const char last = path[path.size()-1];
  if( last == '/' || last == '\\' )
    return std::string(path) + file;
  else
    return std::string(path) + file_separator() + file;

  QF_STACK_POP
}
}
