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
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "DictionaryTestCase.h"

namespace FIX
{
void DictionaryTestCase::setGetString::onRun( Dictionary& object )
{
  object.setString( "STRINGKEY1", "STRINGVALUE1" );
  object.setString( "STRINGKEY2", "stringvalue2" );

  assert( object.getString( "STRINGKEY1" ) == "STRINGVALUE1" );
  assert( object.getString( "STRINGKEY2" ) == "stringvalue2" );
  assert( object.getString( "STRINGKEY2", true ) == "STRINGVALUE2" );
  try{ object.getString( "STRINGKEY3" ); assert( false ); }
  catch ( ConfigError& ) {}
}

void DictionaryTestCase::setGetLong::onRun( Dictionary& object )
{
  object.setLong( "LONGKEY1", 12 );
  object.setLong( "LONGKEY2", 9827362 );
  object.setString( "BADLONGKEY", "AB12" );

  assert( object.getLong( "LONGKEY1" ) == 12 );
  assert( object.getLong( "LONGKEY2" ) == 9827362 );
  try{ object.getLong( "LONGKEY3" ); assert( false ); }
  catch ( ConfigError& ) {}
  try{ object.getLong( "BADLONGKEY" ); assert( false ); }
  catch ( ConfigError& ) {}
}

void DictionaryTestCase::setGetDouble::onRun( Dictionary& object )
{
  object.setDouble( "DOUBLEKEY1", 12.3 );
  object.setDouble( "DOUBLEKEY2", 9827362.9827362 );
  object.setString( "BADDOUBLEKEY", "AB12.3" );

  assert( object.getDouble( "DOUBLEKEY1" ) == 12.3 );
  assert( object.getDouble( "DOUBLEKEY2" ) == 9827362.9827362 );
  try{ object.getDouble( "DOUBLEKEY3" ); assert( false ); }
  catch ( ConfigError& ) {}
  try{ object.getDouble( "BADDOUBLEKEY" ); assert( false ); }
  catch ( ConfigError& ) {}
}

void DictionaryTestCase::getDay::onRun( Dictionary& object )
{
  object.setString( "DAY1", "SU" );
  object.setString( "DAY2", "MO" );
  object.setString( "DAY3", "TU" );
  object.setString( "DAY4", "WE" );
  object.setString( "DAY5", "TH" );
  object.setString( "DAY6", "FR" );
  object.setString( "DAY7", "SA" );

  assert( object.getDay( "DAY1" ) == 1 );
  assert( object.getDay( "DAY2" ) == 2 );
  assert( object.getDay( "DAY3" ) == 3 );
  assert( object.getDay( "DAY4" ) == 4 );
  assert( object.getDay( "DAY5" ) == 5 );
  assert( object.getDay( "DAY6" ) == 6 );
  assert( object.getDay( "DAY7" ) == 7 );
}

void DictionaryTestCase::merge::onRun( Dictionary& object )
{
  object.setString( "FIRSTKEY", "FIRSTVALUE" );
  object.setString( "THIRDKEY", "FIRST" );
  Dictionary second;
  second.setString( "SECONDKEY", "SECONDVALUE" );
  second.setString( "THIRDKEY", "SECOND" );
  object.merge( second );
  assert( object.getString( "FIRSTKEY" ) == "FIRSTVALUE" );
  assert( object.getString( "SECONDKEY" ) == "SECONDVALUE" );
  assert( object.getString( "THIRDKEY" ) == "FIRST" );
}
}
