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

/// Field not found inside a message
struct FieldNotFound : public std::logic_error
{
  FieldNotFound( int f )
    : std::logic_error( "Field not found" ), field( f ) {}
  int field;
};

/// Unable to convert field into its native format
struct FieldConvertError : public std::logic_error
{
  FieldConvertError() : std::logic_error( "Could not convert field" ) {}
};

/// Unable to parse message
struct MessageParseError : public std::logic_error
{
  MessageParseError() : std::logic_error( "Could not parse message" ) {}
};

/// Not a recognizable message
struct InvalidMessage : public std::logic_error
{
  InvalidMessage() : std::logic_error( "Invalid message" ) {}
};

/// %Application is not configured correctly
struct ConfigError : public std::logic_error
{
  ConfigError() : std::logic_error( "Configuration failed" ) {}
  ConfigError( const std::string& what ) : std::logic_error( what ) {}
};

/// %Application encountered serious error during runtime
struct RuntimeError : public std::logic_error
{
  RuntimeError() : std::logic_error( "Runtime error" ) {}
  RuntimeError( const std::string& what ) : std::logic_error( what ) {}
};

/// Tag number does not exist in specification
struct InvalidTagNumber : public std::logic_error
{
  InvalidTagNumber( int f )
    : std::logic_error( "Invalid tag number" ), field( f ) {}
  const int field;
};

/// Required field is not in message
struct RequiredTagMissing : public std::logic_error
{
  RequiredTagMissing( int f ) : std::logic_error
  ( "Required tag missing" ), field( f ) {}
  const int field;
};

/// Field does not belong to message
struct TagNotDefinedForMessage : public std::logic_error
{
  TagNotDefinedForMessage( int f ) : std::logic_error
  ( "Tag not defined for this message type" ), field( f ) {}
  const int field;
};

/// Field exists in message without a value
struct NoTagValue : public std::logic_error
{
  NoTagValue( int f )
    : std::logic_error( "Tag specified without a value" ), field( f ) {}
  const int field;
};

/// Field has a value that is out of range
struct IncorrectTagValue : public std::logic_error
{
  IncorrectTagValue( int f ) : std::logic_error
  ( "Value is incorrect (out of range) for this tag" ), field( f ) {}
  const int field;
};

/// Field has a badly formatted value
struct IncorrectDataFormat : public std::logic_error
{
  IncorrectDataFormat( int f )
    : std::logic_error( "Incorrect data format for value" ), field( f ) {}
  const int field;
};

/// Message is not structured correctly
struct IncorrectMessageStructure : public std::logic_error
{
  IncorrectMessageStructure() : std::logic_error
  ( "Incorrect message structure" ) {}
};

/// Field shows up twice in the message
struct DuplicateFieldNumber : public std::logic_error
{
  DuplicateFieldNumber() : std::logic_error( "Duplicate field number" ) {}
};

/// Not a known message type
struct InvalidMessageType : public std::logic_error
{
  InvalidMessageType () : std::logic_error( "Invalid Message Type" ) {}
};

/// Message type not supported by application
struct UnsupportedMessageType : public std::logic_error
{
  UnsupportedMessageType() : std::logic_error
  ( "Unsupported Message Type" ) {}
};

/// Version of %FIX is not supported
struct UnsupportedVersion : public std::logic_error
{
  UnsupportedVersion() : std::logic_error
  ( "Unsupported Version" ) {}
};

/// Tag is not in the correct order
struct TagOutOfOrder : public std::logic_error
{
  TagOutOfOrder( int f ) 
    : std::logic_error( "Tag specified out of required order" ), field( f ) {}
  const int field;
};

/// Indicates user does not want to send a message
struct DoNotSend : public std::logic_error
{
  DoNotSend() : std::logic_error( "Do Not Send Message" ) {}
};

/// User wants to reject permission to logon
struct RejectLogon : public std::logic_error
{
  RejectLogon() : std::logic_error( "Reject Logon Attempt" ) {}
};

/// Session cannot be found for specified action
struct SessionNotFound : public std::logic_error
{
  SessionNotFound() : std::logic_error( "Session Not Found" ) {}
};

/// IO Error
struct IOException : public std::runtime_error
{
  IOException() : std::runtime_error( "IO Error" ) {}
};
/*! @} */
}

#endif //FIX_EXCEPTIONS_H
