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

#include "stdafx.h"

#include "Group.h"

namespace Fix
{
void Group::setField( StringField* field )
{
  m_pUnmanaged->setField( FIX::StringField( field->getField(), convertString( field->getValue() ) ) );
}

void Group::setField( BooleanField* field )
{
  m_pUnmanaged->setField( FIX::BoolField( field->getField(), field->getValue() ) );
}

void Group::setField( CharField* field )
{
  m_pUnmanaged->setField( FIX::CharField( field->getField(), field->getValue() ) );
}

void Group::setField( IntField* field )
{
  m_pUnmanaged->setField( FIX::IntField( field->getField(), field->getValue() ) );
}

void Group::setField( DoubleField* field )
{
  m_pUnmanaged->setField( FIX::DoubleField( field->getField(), field->getValue() ) );
}

void Group::setField( UtcTimeStampField* field )
{
  DateTime value = field->getValue();
  m_pUnmanaged->setField( FIX::UtcTimeStampField(
                            field->getField(),
                            FIX::UtcTimeStamp( value.Hour, value.Minute, value.Second,
                                               value.Day, value.Month, value.Year ) ) );

}

void Group::setField( UtcDateField* field )
{
  DateTime value = field->getValue();
  m_pUnmanaged->setField( FIX::UtcDateField(
                            field->getField(),
                            FIX::UtcDate( value.Day, value.Month, value.Year ) ) );
}

void Group::setField( UtcTimeOnlyField* field )
{
  DateTime value = field->getValue();
  m_pUnmanaged->setField( FIX::UtcTimeOnlyField(
                            field->getField(),
                            FIX::UtcTimeOnly( value.Hour, value.Minute, value.Second ) ) );
}

StringField* Group::getField( StringField* field ) throw( FieldNotFound* )
{
  try
  {
    field->setValue( m_pUnmanaged->getField( field->getField() ).c_str() );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

BooleanField* Group::getField( BooleanField* field ) throw( FieldNotFound* )
{
  try
  {
    field->setValue( FIX::BoolConvertor::convert( m_pUnmanaged->getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

CharField* Group::getField( CharField* field ) throw( FieldNotFound* )
{
  try
  {
    field->setValue( FIX::CharConvertor::convert( m_pUnmanaged->getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

IntField* Group::getField( IntField* field ) throw( FieldNotFound* )
{
  try
  {
    field->setValue( FIX::IntConvertor::convert( m_pUnmanaged->getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

DoubleField* Group::getField( DoubleField* field ) throw( FieldNotFound* )
{
  try
  {
    field->setValue( FIX::DoubleConvertor::convert( m_pUnmanaged->getField( field->getField() ) ) );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

UtcTimeStampField* Group::getField( UtcTimeStampField* field ) throw( FieldNotFound* )
{
  try
  {
    FIX::UtcTimeStamp fixd;
    fixd = FIX::UtcTimeStampConvertor::convert( m_pUnmanaged->getField( field->getField() ) );
    DateTime d( fixd.getYear(), fixd.getMonth(), fixd.getDate(),
                fixd.getHour(), fixd.getMinute(), fixd.getSecond() );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

UtcDateField* Group::getField( UtcDateField* field ) throw( FieldNotFound* )
{
  try
  {
    FIX::UtcDate fixd;
    fixd = FIX::UtcDateConvertor::convert( m_pUnmanaged->getField( field->getField() ) );
    DateTime d( fixd.getYear(), fixd.getMonth(), fixd.getDate(), 0, 0, 0 );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}

UtcTimeOnlyField* Group::getField( UtcTimeOnlyField* field ) throw( FieldNotFound* )
{
  try
  {
    FIX::UtcTimeOnly fixd;
    fixd = FIX::UtcTimeOnlyConvertor::convert( m_pUnmanaged->getField( field->getField() ) );
    DateTime d( 0, 0, 0, fixd.getHour(), fixd.getMinute(), fixd.getSecond() );
    field->setValue( d );
    return field;
  }
  catch ( FIX::FieldNotFound & e )
  { throw new FieldNotFound( e.field ); }
}
}
