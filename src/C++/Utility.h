/* -*- C++ -*- */
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

namespace FIX
{
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
typedef void * (THREAD_START_ROUTINE)(void *);
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

#endif
