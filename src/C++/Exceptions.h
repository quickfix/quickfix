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

#ifndef FIX_EXCEPTIONS_H
#define FIX_EXCEPTIONS_H

#include <string>
#include <stdexcept>

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
  FieldNotFound( int f, const std::string& what = "" )
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
  InvalidTagNumber( int f, const std::string& what = "" )
    : Exception( "Invalid tag number", what ), 
                 field( f ) {}
  const int field;
};

/// Required field is not in message
struct RequiredTagMissing : public Exception
{
  RequiredTagMissing( int f, const std::string& what = "" ) 
    : Exception( "Required tag missing", what ), 
                 field( f ) {}
  const int field;
};

/// Field does not belong to message
struct TagNotDefinedForMessage : public Exception
{
  TagNotDefinedForMessage( int f, const std::string& what = "" ) 
    : Exception( "Tag not defined for this message type", what ), 
                 field( f ) {}
  const int field;
};

/// Field exists in message without a value
struct NoTagValue : public Exception
{
  NoTagValue( int f, const std::string& what = "" )
    : Exception( "Tag specified without a value", what ), 
                 field( f ) {}
  const int field;
};

/// Field has a value that is out of range
struct IncorrectTagValue : public Exception
{
  IncorrectTagValue( int f, const std::string& what = "" ) 
    : Exception( "Value is incorrect (out of range) for this tag", what ), 
                 field( f ) {}
  const int field;
};

/// Field has a badly formatted value
struct IncorrectDataFormat : public Exception
{
  IncorrectDataFormat( int f, const std::string& what = "" )
    : Exception( "Incorrect data format for value", what ), 
                 field( f ) {}
  const int field;
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
  TagOutOfOrder( int f, const std::string& what = "" ) 
    : Exception( "Tag specified out of required order", what ), 
                 field( f ) {}
  const int field;
};

/// Repeated tag not part of repeating group
struct RepeatedTag : public Exception
{
  RepeatedTag( int f, const std::string& what = "" )
    : Exception( "Repeated tag not part of repeating group", what ), 
                 field( f ) {}
  const int field;
};

/// Repeated group count not equal to actual count 
struct RepeatingGroupCountMismatch : public Exception
{
  RepeatingGroupCountMismatch( int f, const std::string& what = "" )
    : Exception( "Repeating group count mismatch", what ), 
                 field( f ) {}
  const int field;
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
/*! @} */
}

#endif //FIX_EXCEPTIONS_H
