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
  object.setString( "STRINGKEY2", "STRINGVALUE2" );

  assert( object.getString( "STRINGKEY1" ) == "STRINGVALUE1" );
  assert( object.getString( "STRINGKEY2" ) == "STRINGVALUE2" );
  try{ object.getString( "STRINGKEY3" ); assert( false ); }
  catch ( ConfigError& ) {}}

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
  catch ( ConfigError& ) {}}

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
  catch ( ConfigError& ) {}}

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
