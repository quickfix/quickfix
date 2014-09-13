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

#ifndef FIX_EXCEPTIONS_H
#define FIX_EXCEPTIONS_H

#include <string>
#include <stdexcept>
#include "Utility.h"

namespace FIX
{

/// Base QuickFIX exception type.
struct Exception : public std::logic_error
{
  Exception( const std::string& t, const std::string& d )
  : std::logic_error( d.size() ? t + ": " + d : t ),
    type( t ), detail( d )
  {}
  ~Exception() throw() {}

  std::string type;
  std::string detail;
};

/// DataDictionary not found for BeginString or ApplVerID
struct DataDictionaryNotFound : public Exception
{
  DataDictionaryNotFound( const std::string& v, const std::string& what = "" )
    : Exception( "Could not find data dictionary", what ),
                 version( v ) {}
  ~DataDictionaryNotFound() throw() {}

  std::string version;
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
    : Exception( "Rejected Logon Attempt", what ) {}
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
struct SocketException : public Exception
{
  SocketException()
    : Exception( "Socket Error", errorToWhat() ) {}

  SocketException( const std::string& what )
    : Exception( "Socket Error", what ) {}

  std::string errorToWhat()
  {
#ifdef _MSC_VER
    error = WSAGetLastError();
    char buffer[2048];
    FormatMessageA( FORMAT_MESSAGE_FROM_SYSTEM, NULL, error,
                   MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
                   buffer, 2048, NULL );
    return buffer;
#else
    error = errno;
    return strerror( error );
#endif
  }

  int error;
};

/// Socket send operation failed
struct SocketSendFailed : public SocketException
{
  SocketSendFailed() {}
  SocketSendFailed( const std::string& what )
    : SocketException( what ) {}
};

/// Socket recv operation failed
struct SocketRecvFailed : public SocketException
{
  SocketRecvFailed( ssize_t size )
    : SocketException( size == 0 ? "Connection reset by peer." : size < 0 ? errorToWhat() : "Success." ) {}
  SocketRecvFailed( const std::string& what )
    : SocketException( what ) {}
};

/// Socket close operation failed
struct SocketCloseFailed : public SocketException
{
  SocketCloseFailed() {}
  SocketCloseFailed( const std::string& what )
    : SocketException( what ) {}
};

/*! @} */
}

#endif //FIX_EXCEPTIONS_H
