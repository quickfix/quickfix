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

#include "Message.h"
#include <iomanip>

namespace FIX
{
std::auto_ptr<DataDictionary> Message::s_dataDictionary;

Message::Message()
    : m_header( message_order( message_order::header ) ),
    m_trailer( message_order( message_order::trailer ) ),
m_validStructure( true ) {}

Message::Message( const std::string& string, bool validate )
throw( InvalidMessage& )
    : m_header( message_order( message_order::header ) ),
    m_trailer( message_order( message_order::trailer ) ),
    m_validStructure( true )
{
  if ( !setString( string, validate ) )
    throw InvalidMessage();
}

Message::Message( const std::string& string, const DataDictionary& dataDictionary )
throw( InvalidMessage& )
    : m_header( message_order( message_order::header ) ),
    m_trailer( message_order( message_order::trailer ) ),
    m_validStructure( true )
{
  if ( !setString( string, true, &dataDictionary ) )
    throw InvalidMessage();
}

bool Message::InitializeXML( const std::string& url )
{
  try
  {
    std::auto_ptr<DataDictionary> p =
      std::auto_ptr<DataDictionary>(new DataDictionary(url));
    s_dataDictionary = p;
    return true;
  }
  catch( ConfigError& )
  { return false; }
}

std::string Message::getString() const
{
  m_header.setField( BodyLength( bodyLength() ) );
  m_trailer.setField( CheckSum( checkSum() ) );

  return
    m_header.calculateString() +
    FieldMap::calculateString() +
    m_trailer.calculateString();
}

std::string Message::getXML() const
{
  std::stringstream stream;
  stream << "<message>"                         << "\n"
         << std::setw(2) << " " << "<header>"   << "\n"  
         << getXMLFields(getHeader(), 4)
         << std::setw(2) << " " << "</header>"  << "\n"
         << std::setw(2) << " " << "<body>"     << "\n"
         << getXMLFields(*this, 4)
         << std::setw(2) << " " << "</body>"    << "\n"
         << std::setw(2) << " " << "<trailer>"  << "\n"
         << getXMLFields(getTrailer(), 4)
         << std::setw(2) << " " << "</trailer>" << "\n"
         << "</message>";

  return stream.str();
}

std::string Message::getXMLFields(const FieldMap& fields, int space) const
{
  std::stringstream stream;
  FieldMap::iterator i;
  std::string name;
  for(i = fields.begin(); i != fields.end(); ++i)
  {       
    int field = i->first;
    std::string value = i->second.getString();

    stream << std::setw(space) << " " << "<field ";
    if(s_dataDictionary.get() && s_dataDictionary->getFieldName(field, name))
      stream << "name=\"" << name << "\" ";
    stream << "number=\"" << field << "\" value=\"" << value << "\"";
    if(s_dataDictionary.get() && s_dataDictionary->getValueName(field, value, name))
      stream << " enum=\"" << name << "\"";
    stream << "/>\n";
  }

  FieldMap::g_iterator j;
  for(j = fields.g_begin(); j != fields.g_end(); ++j)
  {
    std::vector<FieldMap*>::const_iterator k;
    for(k = j->second.begin(); k != j->second.end(); ++k)
    {
      stream << std::setw(space) << " " << "<group>\n"
             << getXMLFields(*(*k), space+2)
             << std::setw(space) << " " << "</group>\n";
    }
  }

  return stream.str();
}

bool Message::setString( const std::string& string,
                         bool doValidation,
                         const DataDictionary* pDataDictionary )
{
  clear();

  std::string::size_type pos = 0;
  int count = 0;
  std::string msg;

  static FIELD::Field const headerOrder[] =
    {
      FIELD::BeginString,
      FIELD::BodyLength,
      FIELD::MsgType
    };

  field_type type = header;

  while ( pos < string.size() )
  {
    FieldBase field = extractField( string, pos );
    if ( count < 3 && headerOrder[ count++ ] != field.getField() )
      if ( doValidation ) return false;

    if ( isHeaderField( field, pDataDictionary ) )
    {
      if ( type != header ) m_validStructure = false;
      if ( field.getField() == FIELD::MsgType )
        msg = field.getString();
      m_header.setField( field );
    }
    else if ( isTrailerField( field, pDataDictionary ) )
    {
      type = trailer;
      m_trailer.setField( field );
    }
    else
    {
      if ( type == trailer ) m_validStructure = false;
      type = body;
      setField( field );
      if ( pDataDictionary )
      {
        setGroup( msg, field, string, pos, *this, *pDataDictionary );
      }
    }
  }
  if ( doValidation ) return validate();
  return true;
}

void Message::setGroup( const std::string& msg, const FieldBase& field, const std::string& string,
                        std::string::size_type& pos, FieldMap& map,
                        const DataDictionary& dataDictionary )
{
  int group = field.getField();
  int delim;
  const DataDictionary* pDD = 0;
  if ( !dataDictionary.getGroup( msg, group, delim, pDD ) ) return ;
  if ( IntConvertor::convert(field.getString() ) <= 0 ) return ;
  Group* pGroup = 0;

  while ( pos < string.size() )
  {
    std::string::size_type oldPos = pos;
    FieldBase field = extractField( string, pos );
    if ( field.getField() == delim )
    {
      if ( pGroup ) { map.addGroup( group, *pGroup ); delete pGroup; }
      pGroup = new Group( field.getField(), delim );
    }
    else if ( !pDD->isField( field.getField() ) )
    {
      map.addGroup( group, *pGroup ); delete pGroup;
      pos = oldPos;
      return ;
    }

    if ( !pGroup ) return ;
    pGroup->setField( field );
    setGroup( msg, field, string, pos, *pGroup, *pDD );
  }
}

bool Message::setStringHeader( const std::string& string )
{
  clear();

  std::string::size_type pos = 0;
  int count = 0;

  while ( pos < string.size() )
  {
    FieldBase field = extractField( string, pos );
    if ( count < 3 && headerOrder[ count++ ] != field.getField() )
      return false;

    if ( isHeaderField( field ) )
      m_header.setField( field );
    else break;
  }
  return true;
}

FieldBase Message::extractField
( const std::string& string, std::string::size_type& pos )
{
  int field;
  std::string fieldString;
  std::string valueString;

  std::string::size_type equalSign = string.find_first_of( '=', pos );
  fieldString = string.substr( pos, equalSign - pos );

  std::string::size_type soh =
    string.find_first_of( '\001', equalSign + 1 );
  if ( soh == std::string::npos ) throw InvalidMessage();
  valueString = string.substr( equalSign + 1, soh - ( equalSign + 1 ) );

  field = atol( fieldString.c_str() );

  pos = soh + 1;
  return FieldBase( field, valueString );
}
}
