/* -*- C++ -*- */

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

#pragma once

using namespace System;
using namespace System::IO;

#include "quickfix_net.h"

#include "quickfix/exceptions.h"

namespace QuickFix
{
public __gc class FieldNotFound : public Exception
{
public:
  FieldNotFound( int f ) : field( f ) {}
  int field;
};

public __gc class MessageParseError : public Exception {};

public __gc class FieldConvertError : public Exception
{
public:
  FieldConvertError( String* what ) : Exception( what ) {}
};

public __gc class NoTagValue : public Exception
{
public:
  NoTagValue( int f ) : field( f ) {}
  int field;
};

public __gc class IncorrectTagValue : public Exception
{
public:
  IncorrectTagValue( int f ) : field( f ) {}
  int field;
};

public __gc class IncorrectDataFormat : public Exception
{
public:
  IncorrectDataFormat( int f ) : field( f ) {}
  int field;
};

public __gc class ConfigError : public Exception
{
public:
  ConfigError( String* what ) : Exception( what ) {}
};

public __gc class RuntimeError : public Exception
{
public:
  RuntimeError( String* what ) : Exception( what ) {}
};

public __gc class InvalidMessage : public Exception
{
public:
  InvalidMessage( String* what ) : Exception( what ) {}
};

public __gc class DataDictionaryNotFound : public Exception
{
public:
  DataDictionaryNotFound( String* version, String* what ) : Exception( what ) {}
  String* version;
};

public __gc class SessionNotFound : public Exception {};
public __gc class DoNotSend : public Exception {};
public __gc class RejectLogon : public Exception {};
public __gc class UnsupportedMessageType : public Exception {};
}

