/* ====================================================================
* The QuickFIX Software License, Version 1.0
*
* Copyright (c) 2001 ThoughtWorks, Inc.  All rights
* reserved.
*
* Redistribution and use in source and binary forms, with or without
* modification, are permitted provided that the following conditions
* are met:
*
* 1. Redistributions of source code must retain the above copyright
*    notice, this list of conditions and the following disclaimer.
*
* 2. Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in
*    the documentation and/or other materials provided with the
*    distribution.
*
* 3. The end-user documentation included with the redistribution,
*    if any, must include the following acknowledgment:
*       "This product includes software developed by
*        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
*    Alternately, this acknowledgment may appear in the software itself,
*    if and wherever such third-party acknowledgments normally appear.
*
* 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
*    not be used to endorse or promote products derived from this
*    software without prior written permission. For written
*    permission, please contact quickfix-users@lists.sourceforge.net.
*
* 5. Products derived from this software may not be called "QuickFIX",
*    nor may "QuickFIX" appear in their name, without prior written
*    permission of ThoughtWorks, Inc.
*
* THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
* WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
* OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
* DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
* ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
* SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
* LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
* USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
* ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
* OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
* OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
* SUCH DAMAGE.
* ====================================================================
*/

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

namespace FIX
{
void socket_init()
{ QF_STACK_PUSH(socket_init)

#ifdef _MSC_VER
  WORD version = MAKEWORD( 2, 2 );
  WSADATA data;
  WSAStartup( version, &data );
#else
struct sigaction sa;
  sa.sa_handler = SIG_IGN;
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

int socket_createConnector( const char* address, int port )
{ QF_STACK_PUSH(socket_createConnector)

  int socket = ::socket( PF_INET, SOCK_STREAM, IPPROTO_TCP );
  const char* hostname = socket_hostname( address ); 
  if( hostname == 0 ) return -1;

  sockaddr_in addr;
  addr.sin_family = PF_INET;
  addr.sin_port = htons( port );
  addr.sin_addr.s_addr = inet_addr( hostname );

  int result = connect( socket, reinterpret_cast < sockaddr* > ( &addr ),
                        sizeof( addr ) );
  if ( result == 0 )
    return socket;
  else
  {
    socket_close( socket );
    return -1;
  }

  QF_STACK_POP
}

int socket_accept( int s )
{ QF_STACK_PUSH(socket_accept)

  if ( !socket_isValid( s ) ) return -1;
  return accept( s, 0, 0 );

  QF_STACK_POP
}

bool socket_send( int s, const char* msg, int length )
{ QF_STACK_PUSH(socket_send)

  return send( s, msg, length, 0 ) !=
#ifdef _MSC_VER
  SOCKET_ERROR;
#else 
  -1;
#endif

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

  unsigned long read;
#ifdef _MSC_VER
  ioctlsocket( s, FIONREAD, &read );
#elif defined(USING_STREAMS)
  ioctl( s, I_NREAD, &read );
#else
  ioctl( s, FIONREAD, &read );
#endif 
  return read == 0;

  QF_STACK_POP
} 

void socket_setsockopt( int s, int opt )
{ QF_STACK_PUSH(socket_setsockopt)

#ifdef _MSC_VER
  BOOL optval = TRUE;
  ::setsockopt( s, SOL_SOCKET, opt,
                ( char* ) & optval, sizeof( optval ) );
#else
int optval = 1;
  ::setsockopt( s, SOL_SOCKET, opt,
                &optval, sizeof( optval ) );
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

const char* socket_hostname( const char* name )
{ QF_STACK_PUSH(socket_hostname)

  struct hostent* host_ptr = 0;
  struct in_addr** paddr;
  struct in_addr saddr;
  hostent host;
  char buf[1024];
  int error;

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

tm time_gmtime( const time_t* t )
{ QF_STACK_PUSH(time_gmtime)

#ifdef _MSC_VER
  return *gmtime( t );
#else
  tm result;
  return *gmtime_r( t, &result );
#endif

  QF_STACK_POP
}

tm time_localtime( const time_t* t)
{ QF_STACK_PUSH(time_localtime)

#ifdef _MSC_VER
  return *localtime( t );
#else
  tm result;
  return *localtime_r( t, &result );
#endif

  QF_STACK_POP
}

bool thread_spawn( void*( *func ) ( void* ), void* var, unsigned& thread )
{
#ifdef _MSC_VER
  int result = 0;
  result = _beginthread( ( void( __cdecl* ) ( void* ) ) func, 0, var );
  if ( result == -1 ) return false;
#else
  pthread_t result = 0;
  if ( pthread_create( &result, 0, func, var ) != 0 ) return false;
#endif
  thread = result;
  return true;
}

bool thread_spawn( void*( *func ) ( void* ), void* var )
{ unsigned thread = 0;
  return thread_spawn( func, var, thread );
}

void thread_join( unsigned thread )
{ QF_STACK_PUSH(thread_join)

#ifdef _MSC_VER
  WaitForSingleObject( ( void* ) thread, INFINITE );
#else
  pthread_join( ( pthread_t ) thread, 0 );
#endif

  QF_STACK_POP
}

unsigned thread_self()
{
#ifdef _MSC_VER 
  return ( unsigned ) GetCurrentThread();
#else 
  return ( unsigned ) pthread_self();
#endif
}

void process_sleep( double s )
{ QF_STACK_PUSH(process_sleep)

#ifdef _MSC_VER
  Sleep( ( long ) s * 1000 );
#else
  /* this causes random wierdness under Solaris
  timespec time;
  double intpart;
  time.tv_nsec = (int)modf(s, &intpart);
  time.tv_nsec *= 1000000000;
  time.tv_sec = (int)intpart;
  timespec* actual;
  nanosleep(&time, actual);*/
  sleep( ( long ) s );
#endif

  QF_STACK_POP
}

#ifdef _MSC_VER
void file_mkdir( const char* path, int mode )
{ QF_STACK_PUSH(file_mkdir)
  _mkdir( path ); 
  QF_STACK_POP
}
#else
void file_mkdir( const char* path, mode_t mode )
{ QF_STACK_PUSH(file_mkdir)
  mkdir( path, mode ); 
  QF_STACK_POP
}
#endif

void file_unlink( const char* path )
{ QF_STACK_PUSH(file_unlink)

#ifdef _MSC_VER
  _unlink( path );
#else
  unlink( path );
#endif

  QF_STACK_POP
}
}
