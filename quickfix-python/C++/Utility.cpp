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

#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "Utility.h"

#ifdef USING_STREAMS
#include <stropts.h>
#include <sys/conf.h>
#endif
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <algorithm>
#include <fstream>
#include <sstream>

namespace FIX
{
void string_replace( const std::string& oldValue,
                     const std::string& newValue,
                     std::string& value )
{
  for( std::string::size_type pos = value.find(oldValue);
       pos != std::string::npos;
       pos = value.find(oldValue, pos) )
  {
    value.replace( pos, oldValue.size(), newValue );
    pos += newValue.size();
  }
}

std::string string_toUpper( const std::string& value )
{
  std::string copy = value;
  std::transform( copy.begin(), copy.end(), copy.begin(), toupper );
  return copy;
}

std::string string_toLower( const std::string& value )
{
  std::string copy = value;
  std::transform( copy.begin(), copy.end(), copy.begin(), tolower );
  return copy;
}

std::string string_strip( const std::string& value )
{
  if( !value.size() )
    return value;

  size_t startPos = value.find_first_not_of(" \t\r\n");
  size_t endPos = value.find_last_not_of(" \t\r\n");

  if( startPos == std::string::npos )
   return value;

  return std::string( value, startPos, endPos - startPos + 1 );
}

void socket_init()
{
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
}

void socket_term()
{
#ifdef _MSC_VER
  WSACleanup();
#endif
}

int socket_bind(socket_handle socket, const char* hostname, int port )
{
  sockaddr_in address;
  socklen_t socklen;

  address.sin_family = PF_INET;
  address.sin_port = htons( port );
  if ( !hostname || !*hostname )
    address.sin_addr.s_addr = INADDR_ANY;
  else
    address.sin_addr.s_addr = inet_addr( hostname );
  socklen = sizeof( address );

  return  bind( socket, reinterpret_cast < sockaddr* > ( &address ),
                     socklen );
}

socket_handle socket_createAcceptor(int port, bool reuse)
{
    socket_handle socket = ::socket( PF_INET, SOCK_STREAM, 0 );
  if ( socket == INVALID_SOCKET_HANDLE) return INVALID_SOCKET_HANDLE;

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
  
  if ( result == BIND_SOCKET_ERROR) return INVALID_SOCKET_HANDLE;
  result = listen( socket, SOMAXCONN );
  if ( result == LISTEN_SOCKET_ERROR) return INVALID_SOCKET_HANDLE;
  return socket;
}

socket_handle socket_createConnector()
{
  return ::socket( PF_INET, SOCK_STREAM, IPPROTO_TCP );
}

int socket_connect(socket_handle socket, const char* address, int port )
{
  const char* hostname = socket_hostname( address );
  if( hostname == 0 ) return -1;

  sockaddr_in addr;
  addr.sin_family = PF_INET;
  addr.sin_port = htons( port );
  addr.sin_addr.s_addr = inet_addr( hostname );

  int result = connect( socket, reinterpret_cast < sockaddr* > ( &addr ),
                        sizeof( addr ) );

  return result;
}

socket_handle socket_accept(socket_handle s )
{
  if ( !socket_isValid( s ) ) return INVALID_SOCKET_HANDLE;
  return accept( s, 0, 0 );
}

ssize_t socket_recv(socket_handle s, char* buf, size_t length )
{
  return recv( s, buf, length, 0 );
}

ssize_t socket_send(socket_handle s, const char* msg, size_t length )
{
  return send( s, msg, length, 0 );
}

void socket_close(socket_handle s )
{
  shutdown( s, 2 );
#ifdef _MSC_VER
  closesocket( s );
#else
  close( s );
#endif
}

std::string socket_get_last_error()
{
    std::stringstream errorMessage;
#ifdef _MSC_VER
    int winsockErrorCode = WSAGetLastError();

    char* s = NULL;
    FormatMessageA(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
        NULL, winsockErrorCode,
        MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
        (LPSTR)&s, 0, NULL);
    errorMessage << "Winsock error " << winsockErrorCode << ": " << s;
    LocalFree(s);
#else
    int errorNumber = errno;    
    errorMessage << "Winsock error " << errorNumber << ": " << strerror(errorNumber);
#endif
    return errorMessage.str();
}

bool socket_fionread(socket_handle s, int& bytes )
{
  bytes = 0;
#if defined(_MSC_VER)
  return ::ioctlsocket( s, FIONREAD, &( ( unsigned long& ) bytes ) ) == 0;
#elif defined(USING_STREAMS)
  return ::ioctl( s, I_NREAD, &bytes ) >= 0;
#else
  return ::ioctl( s, FIONREAD, &bytes ) == 0;
#endif
}

bool socket_disconnected(socket_handle s )
{
  char byte;
  return ::recv (s, &byte, sizeof (byte), MSG_PEEK) <= 0;
}

int socket_setsockopt(socket_handle s, int opt )
{
#ifdef _MSC_VER
  BOOL optval = TRUE;
#else
  int optval = 1;
#endif
  return socket_setsockopt( s, opt, optval );
}

int socket_setsockopt(socket_handle s, int opt, int optval )
{
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
}

int socket_getsockopt(socket_handle s, int opt, int& optval )
{
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
}

#ifndef _MSC_VER
int socket_fcntl( int s, int opt, int arg )
{
  return ::fcntl( s, opt, arg );
}

int socket_getfcntlflag( int s, int arg )
{
  return socket_fcntl( s, F_GETFL, arg );
}

int socket_setfcntlflag( int s, int arg )
{
  int oldValue = socket_getfcntlflag( s, arg );
  oldValue |= arg;
  return socket_fcntl( s, F_SETFL, arg );
}
#endif

void socket_setnonblock(socket_handle socket )
{
#ifdef _MSC_VER
  u_long opt = 1;
  ::ioctlsocket( socket, FIONBIO, &opt );
#else
  socket_setfcntlflag( socket, O_NONBLOCK );
#endif
}
bool socket_isValid(socket_handle socket )
{
#ifdef _MSC_VER
  return socket != INVALID_SOCKET_HANDLE;
#else
  return socket >= 0;
#endif
}

#ifndef _MSC_VER
bool socket_isBad( int s )
{
  struct stat buf;
  fstat( s, &buf );
  return errno == EBADF;
}
#endif

void socket_invalidate(socket_handle& socket )
{
  socket = INVALID_SOCKET_HANDLE;
}

short socket_hostport(socket_handle socket )
{
  struct sockaddr_in addr;
  socklen_t len = sizeof(addr);
  if( getsockname(socket, (struct sockaddr*)&addr, &len) < 0 )
    return 0;

  return ntohs( addr.sin_port );
}

const char* socket_hostname(socket_handle socket )
{
  struct sockaddr_in addr;
  socklen_t len = sizeof(addr);
  if( getsockname(socket, (struct sockaddr*)&addr, &len) < 0 )
    return 0;

  return inet_ntoa( addr.sin_addr );
}

const char* socket_hostname( const char* name )
{
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
}

const char* socket_peername(socket_handle socket )
{
  struct sockaddr_in addr;
  socklen_t len = sizeof(addr);
  if( getpeername( socket, (struct sockaddr*)&addr, &len ) < 0 )
    return "UNKNOWN";
  char* result = inet_ntoa( addr.sin_addr );
  if( result )
    return result;
  else
    return "UNKNOWN";
}

std::pair<socket_handle, socket_handle> socket_createpair()
{
#ifdef _MSC_VER
  socket_handle acceptor = socket_createAcceptor(0, true);
  const char* host = socket_hostname( acceptor );
  short port = socket_hostport( acceptor );
  socket_handle client = socket_createConnector();
  socket_connect( client, "localhost", port );
  socket_handle server = socket_accept( acceptor );
  socket_close(acceptor);
  return std::make_pair( client, server );
#else
  socket_handle pair[2];
  socketpair( AF_UNIX, SOCK_STREAM, 0, pair );
  return std::make_pair( pair[0], pair[1] );
#endif
}

tm time_gmtime( const time_t* t )
{
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
}

tm time_localtime( const time_t* t)
{
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
}

bool thread_spawn( THREAD_START_ROUTINE func, void* var, thread_id& thread )
{
#ifdef _MSC_VER
  thread_id result = 0;
  unsigned int id = 0;
  result = _beginthreadex( NULL, 0, func, var, 0, &id );
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
{
#ifdef _MSC_VER
  WaitForSingleObject( ( void* ) thread, INFINITE );
  CloseHandle((HANDLE)thread);
#else
  pthread_join( ( pthread_t ) thread, 0 );
#endif
}

void thread_detach( thread_id thread )
{
#ifdef _MSC_VER
  CloseHandle((HANDLE)thread);
#else
  pthread_t t = thread;
  pthread_detach( t );
#endif
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
{
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
}

std::string file_separator()
{
#ifdef _MSC_VER
  return "\\";
#else
  return "/";
#endif
}

void file_mkdir( const char* path )
{
  int length = (int)strlen( path );
  std::string createPath = "";

  for( const char* pos = path; (pos - path) <= length; ++pos )
  {
    createPath += *pos;
    if( *pos == '/' || *pos == '\\' || (pos - path) == length )
    {
    #ifdef _MSC_VER
      _mkdir( createPath.c_str() );
    #else
      // use umask to override rwx for all
      mkdir( createPath.c_str(), 0777 );
    #endif
    }
  }
}

FILE* file_fopen( const char* path, const char* mode )
{
#if( _MSC_VER >= 1400 )
  FILE* result = 0;
  fopen_s( &result, path, mode );
  return result;
#else
  return fopen( path, mode );
#endif
}

void file_fclose( FILE* file )
{
  fclose( file );
}

bool file_exists( const char* path )
{
  std::ifstream stream;
  stream.open( path, std::ios_base::in );
  if( stream.is_open() )
  {
    stream.close();
    return true;
  }
  return false;
}

void file_unlink( const char* path )
{
#ifdef _MSC_VER
  _unlink( path );
#else
  unlink( path );
#endif
}

int file_rename( const char* oldpath, const char* newpath )
{
  return rename( oldpath, newpath );
}

std::string file_appendpath( const std::string& path, const std::string& file )
{
  const char last = path[path.size()-1];
  if( last == '/' || last == '\\' )
    return std::string(path) + file;
  else
    return std::string(path) + file_separator() + file;
}
}
