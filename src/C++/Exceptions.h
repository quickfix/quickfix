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

#ifndef FIX_EXCEPTIONS_H
#define FIX_EXCEPTIONS_H

#include <string>
#include <stdexcept>
#include "Utility.h"

namespace FIX
{
/*! \addtogroup exceptions
 *  @{
 */

struct Exception : public std::logic_error
{
  Exception( const std::string& what, const std::string& detail )
    : std::logic_error( detail.size() ? what + ": " + detail : what )
  {}
};

/// Field not found inside a message
struct FieldNotFound : public Exception
{
  FieldNotFound( int f = 0, const std::string& what = "" )
    : Exception( "Field not found", what ), 
                 field( f ) {}
  int field;
};

/// Unable to convert field into its native format
struct FieldConvertError : public Exception
{
  FieldConvertError( const std::string& what = "" ) 
    : Exception( "Could not convert field", what ) {}
};

/// Unable to parse message
struct MessageParseError : public Exception
{
  MessageParseError( const std::string& what = "" ) 
    : Exception( "Could not parse message", what ) {}
};

/// Not a recognizable message
struct InvalidMessage : public Exception
{
  InvalidMessage( const std::string& what = "" ) 
    : Exception( "Invalid message", what ) {}
};

/// %Application is not configured correctly
struct ConfigError : public Exception
{
  ConfigError( const std::string& what = "" ) 
    : Exception( "Configuration failed", what ) {}
};

/// %Application encountered serious error during runtime
struct RuntimeError : public Exception
{
  RuntimeError( const std::string& what = "" ) 
    : Exception( "Runtime error", what ) {}
};

/// Tag number does not exist in specification
struct InvalidTagNumber : public Exception
{
  InvalidTagNumber( int f = 0, const std::string& what = "" )
    : Exception( "Invalid tag number", what ), 
                 field( f ) {}
  int field;
};

/// Required field is not in message
struct RequiredTagMissing : public Exception
{
  RequiredTagMissing( int f = 0, const std::string& what = "" ) 
    : Exception( "Required tag missing", what ), 
                 field( f ) {}
  int field;
};

/// Field does not belong to message
struct TagNotDefinedForMessage : public Exception
{
  TagNotDefinedForMessage( int f = 0, const std::string& what = "" ) 
    : Exception( "Tag not defined for this message type", what ), 
                 field( f ) {}
  int field;
};

/// Field exists in message without a value
struct NoTagValue : public Exception
{
  NoTagValue( int f = 0, const std::string& what = "" )
    : Exception( "Tag specified without a value", what ), 
                 field( f ) {}
  int field;
};

/// Field has a value that is out of range
struct IncorrectTagValue : public Exception
{
  IncorrectTagValue( int f = 0, const std::string& what = "" ) 
    : Exception( "Value is incorrect (out of range) for this tag", what ), 
                 field( f ) {}
  int field;
};

/// Field has a badly formatted value
struct IncorrectDataFormat : public Exception
{
  IncorrectDataFormat( int f = 0, const std::string& what = "" )
    : Exception( "Incorrect data format for value", what ), 
                 field( f ) {}
  int field;
};

/// Message is not structured correctly
struct IncorrectMessageStructure : public Exception
{
  IncorrectMessageStructure( const std::string& what = "" ) 
    : Exception( "Incorrect message structure", what ) {}
};

/// Field shows up twice in the message
struct DuplicateFieldNumber : public Exception
{
  DuplicateFieldNumber( const std::string& what = "" ) 
    : Exception( "Duplicate field number", what ) {}
};

/// Not a known message type
struct InvalidMessageType : public Exception
{
  InvalidMessageType( const std::string& what = "" ) 
    : Exception( "Invalid Message Type", what ) {}
};

/// Message type not supported by application
struct UnsupportedMessageType : public Exception
{
  UnsupportedMessageType( const std::string& what = "" ) 
    : Exception( "Unsupported Message Type", what ) {}
};

/// Version of %FIX is not supported
struct UnsupportedVersion : public Exception
{
  UnsupportedVersion( const std::string& what = "" ) 
    : Exception( "Unsupported Version", what ) {}
};

/// Tag is not in the correct order
struct TagOutOfOrder : public Exception
{
  TagOutOfOrder( int f = 0, const std::string& what = "" ) 
    : Exception( "Tag specified out of required order", what ), 
                 field( f ) {}
  int field;
};

/// Repeated tag not part of repeating group
struct RepeatedTag : public Exception
{
  RepeatedTag( int f = 0, const std::string& what = "" )
    : Exception( "Repeated tag not part of repeating group", what ), 
                 field( f ) {}
  int field;
};

/// Repeated group count not equal to actual count 
struct RepeatingGroupCountMismatch : public Exception
{
  RepeatingGroupCountMismatch( int f = 0, const std::string& what = "" )
    : Exception( "Repeating group count mismatch", what ), 
                 field( f ) {}
  int field;
};

/// Indicates user does not want to send a message
struct DoNotSend : public Exception
{
  DoNotSend( const std::string& what = "" ) 
    : Exception( "Do Not Send Message", what ) {}
};

/// User wants to reject permission to logon
struct RejectLogon : public Exception
{
  RejectLogon( const std::string& what = "" ) 
    : Exception( "Reject Logon Attempt", what ) {}
};

/// Session cannot be found for specified action
struct SessionNotFound : public Exception
{
  SessionNotFound( const std::string& what = "" ) 
    : Exception( "Session Not Found", what ) {}
};

/// IO Error
struct IOException : public Exception
{
  IOException( const std::string& what = "" ) 
    : Exception( "IO Error", what ) {}
};

/// Socket Error
#ifdef _MSC_VER 
struct SocketException : public Exception
{
  SocketException()
    : Exception( "Socket Error", errorToWhat(WSAGetLastError()) )
  {}

  std::string errorToWhat( int error )
  {
    this->error = error;

    switch( error )
    {
    case WSAEINTR:
      return "Bad address.";
    case WSAEACCES:
      return "Invalid argument.";
    case WSAEFAULT:
      return "Too many open files.";
    case WSAEINVAL:
      return "Resource temporarily unavailable.";
    case WSAEWOULDBLOCK:
      return "Resource temporarily unavailable.";
    case WSAEINPROGRESS:
      return "Operation now in progress.";
    case WSAEALREADY:
      return "Operation already in progress.";
    case WSAENOTSOCK:
      return "Socket operation on nonsocket.";
    case WSAEDESTADDRREQ:
      return "Destination address required.";
    case WSAEMSGSIZE:
      return "Message too long.";
    case WSAEPROTOTYPE:
      return "Protocol wrong type for socket.";
    case WSAENOPROTOOPT:
      return "Bad protocol option.";
    case WSAEPROTONOSUPPORT:
      return "Protocol not supported.";
    case WSAESOCKTNOSUPPORT:
      return "Socket type not supported.";
    case WSAEOPNOTSUPP:
      return "Operation not supported.";
    case WSAEPFNOSUPPORT:
      return "Protocol family not supported.";
    case WSAEAFNOSUPPORT:
      return "Address family not supported by protocol family.";
    case WSAEADDRINUSE:
      return "Address already in use.";
    case WSAEADDRNOTAVAIL:
      return "Cannot assign requested address.";
    case WSAENETDOWN:
      return "Network is down.";
    case WSAENETUNREACH:
      return "Network is unreachable.";
    case WSAENETRESET:
      return "Network dropped connection on reset.";
    case WSAECONNABORTED:
      return "Software caused connection abort.";
    case WSAECONNRESET:
      return "Connection reset by peer.";
    case WSAENOBUFS:
      return "No buffer space available.";
    case WSAEISCONN:
      return "Socket is already connected.";
    case WSAENOTCONN:
      return "Socket is not connected.";
    case WSAESHUTDOWN:
      return "Cannot send after socket shutdown.";
    case WSAETIMEDOUT:
      return "Connection timed out.";
    case WSAECONNREFUSED:
      return "Connection refused.";
    case WSAEHOSTDOWN:
      return "Host is down.";
    case WSAEHOSTUNREACH:
      return "No route to host.";
    case WSAEPROCLIM:
      return "Too many processes.";
    case WSASYSNOTREADY:
      return "Network subsystem is unavailable.";
    case WSAVERNOTSUPPORTED:
      return "Winsock.dll version out of range.";
    case WSANOTINITIALISED:
      return "Successful WSAStartup not yet performed.";
    case WSAEDISCON:
      return "Graceful shutdown in progress.";
    case WSATYPE_NOT_FOUND:
      return "Class type not found.";
    case WSAHOST_NOT_FOUND:
      return "Host not found.";
    case WSATRY_AGAIN:
      return "Nonauthoritative host not found.";
    case WSANO_RECOVERY:
      return "This is a nonrecoverable error.";
    case WSANO_DATA:
      return "Valid name, no data record of requested type.";
    case WSASYSCALLFAILURE:
      return "System call failure.";
    default:
      return "Unknown error";
    }
  }

  int error;
};
#else
struct SocketException : public Exception
{
  SocketException()
    : Exception( "Socket Error", errorToWhat(errno) )
  {}

  std::string errorToWhat( int error )
  {
    this->error = error;
    return strerror (error);
  }

  int error;
};
#endif

struct SocketSendFailed : public SocketException {};
struct SocketRecvFailed : public SocketException {};
struct SocketCloseFailed : public SocketException {};

/*! @} */
}

#endif //FIX_EXCEPTIONS_H
