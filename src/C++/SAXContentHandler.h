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

#ifndef FIX_SAXCONTENTHANDLER_H
#define FIX_SAXCONTENTHANDLER_H

#include <string>
#include <stack>
#include <stdexcept>
#include "DataDictionary.h"

namespace FIX
{
class ParserState
{
public:
  ParserState( DataDictionary& dataDictionary )
: m_dataDictionary( dataDictionary ) {}

  void push( const std::string& element ) { m_path.push_back( element ); }
  void pop() { m_path.pop_back(); }

  void startElement( std::string name,
                     std::map < std::string, std::string > & attrs )
  {
    m_pAttrs = &attrs;
    push( name );
    if ( getPath() == "fix/" )
      doFix();
    else if ( getPath() == "fix/header/field/" )
      doFixHeaderField();
    else if ( getPath() == "fix/trailer/field/" )
      doFixTrailerField();
    else if ( getPath() == "fix/messages/message/" )
      doFixMessagesMessage();
    else if ( getPath() == "fix/messages/message/field/" )
      doFixMessagesMessageField();
    else if ( getPath() == "fix/fields/field/" )
      doFixFieldsField();
    else if ( getPath() == "fix/fields/field/value/" )
      doFixFieldsFieldValue();
    else if ( name == "group" )
      doGroup();
    else if ( getPath( 2 ) == "group/field/" )
      doGroupField( m_lastElement == "group" );
    m_lastElement = name;
  }

  void endElement( std::string name )
  {
    if ( name == "group" )
    {
      std::pair < std::pair < int, int > , DataDictionary > pair = m_groups.back();
      int field = m_groups.back().first.first;
      int delim = m_groups.back().first.second;
      DataDictionary dataDictionary = m_groups.back().second;

      if ( m_groups.size() ) m_groups.pop_back();
      if ( m_groups.size() )
      {
        m_groups.back().second.addGroup( m_msgtype, field, delim,
                                         dataDictionary );
      }
      else
      {
        m_dataDictionary.addGroup( m_msgtype, field, delim, dataDictionary );
      }
    }
    pop();
  }

  void doFix()
  {
    std::string major;
    std::string minor;

    if ( !getValue( *m_pAttrs, "major", major ) )
      throw std::runtime_error( "No Major Version" );
    if ( !getValue( *m_pAttrs, "minor", minor ) )
      throw std::runtime_error( "No Minor Version" );

    m_beginString = "FIX." + major + "." + minor;
    m_dataDictionary.setVersion( m_beginString );
  }

  void doFixHeaderField()
  {
    if ( !getValue( *m_pAttrs, "number", m_field ) )
      throw std::runtime_error( "No Field Number" );
    m_dataDictionary.addHeaderField( atol( m_field.c_str() ) );
  }

  void doFixTrailerField()
  {
    if ( !getValue( *m_pAttrs, "number", m_field ) )
      throw std::runtime_error( "No Field Number" );
    m_dataDictionary.addTrailerField( atol( m_field.c_str() ) );
  }

  void doFixMessagesMessage()
  {
    if ( !getValue( *m_pAttrs, "msgtype", m_msgtype ) )
      throw std::runtime_error( "No MsgType" );
    m_dataDictionary.addMsgType( m_msgtype );
  }

  void doFixMessagesMessageField()
  {
    std::string required;

    if ( !getValue( *m_pAttrs, "number", m_field ) )
      throw std::runtime_error( "No Field Number" );
    getValue( *m_pAttrs, "required", required );

    m_dataDictionary.addMsgField( m_msgtype, atol( m_field.c_str() ) );

    if ( required == "Y" )
      m_dataDictionary.addRequiredField( m_msgtype, atol( m_field.c_str() ) );
  }

  void doFixFieldsField()
  {
    std::string type;

    if ( !getValue( *m_pAttrs, "number", m_field ) )
      throw std::runtime_error( "No Field Number" );
    if ( getValue( *m_pAttrs, "type", type ) )
      m_dataDictionary.addFieldType( atol( m_field.c_str() ), m_type = toType( type ) );

    m_dataDictionary.addField( atol( m_field.c_str() ) );
    m_dataDictionary.setLastField( atol( m_field.c_str() ) );
  }

  void doFixFieldsFieldValue()
  {
    if ( m_type == TYPE::Boolean ) return ;

    std::string enumeration;
    if ( !getValue( *m_pAttrs, "enum", enumeration ) )
      throw std::runtime_error( "No Enum Value" );

    m_dataDictionary.addFieldValue( atol( m_field.c_str() ), enumeration );
  }

  void doGroup()
  {
    if ( !getValue( *m_pAttrs, "number", m_group ) )
      throw std::runtime_error( "No Group Number" );
  }

  void doGroupField( bool delim )
  {
    std::string number;
    if ( !getValue( *m_pAttrs, "number", number ) )
      throw std::runtime_error( "No Field Number" );
    int fieldNumber = atol( number.c_str() );

    if ( delim )
    {
      m_groups.push_back(
        std::make_pair( std::make_pair( atol( m_group.c_str() ), fieldNumber ),
                        DataDictionary() ) );
    }

    m_groups.back().second.addField( fieldNumber );
  }

  std::string getPath( int max = 0 )
  {
    std::string result;
    std::deque < std::string > ::reverse_iterator i;
    int count = 1;

    for ( i = m_path.rbegin(); i != m_path.rend(); ++i, ++count )
    {
      result = ( *i + "/" ) + result;
      if ( count == max ) break;
    }
    return result;
  }

  bool getValue( const std::map < std::string, std::string > & attrs,
                 const std::string& name, std::string& value )
  {
    std::map < std::string, std::string > ::const_iterator it =
      attrs.find( name );
    if ( it == attrs.end() )
      return false;

    value = it->second;
    return true;
  }

  TYPE::Type toType( const std::string& type )
  {
    if ( m_beginString < "FIX.4.2" && type == "CHAR" )
      return TYPE::String;

    if ( type == "STRING" ) return TYPE::String;
    if ( type == "CHAR" ) return TYPE::Char;
    if ( type == "PRICE" ) return TYPE::Price;
    if ( type == "INT" ) return TYPE::Int;
    if ( type == "AMT" ) return TYPE::Amt;
    if ( type == "QTY" ) return TYPE::Qty;
    if ( type == "CURRENCY" ) return TYPE::Currency;
    if ( type == "MULTIPLEVALUESTRING" ) return TYPE::MultipleValueString;
    if ( type == "EXCHANGE" ) return TYPE::Exchange;
    if ( type == "UTCTIMESTAMP" ) return TYPE::UtcTimeStamp;
    if ( type == "BOOLEAN" ) return TYPE::Boolean;
    if ( type == "LOCALMKTDATE" ) return TYPE::LocalMktDate;
    if ( type == "DATA" ) return TYPE::Data;
    if ( type == "FLOAT" ) return TYPE::Float;
    if ( type == "PRICEOFFSET" ) return TYPE::PriceOffset;
    if ( type == "MONTHYEAR" ) return TYPE::MonthYear;
    if ( type == "DAYOFMONTH" ) return TYPE::DayOfMonth;
    if ( type == "UTCDATE" ) return TYPE::UtcDate;
    if ( type == "UTCTIMEONLY" ) return TYPE::UtcTimeOnly;
    return TYPE::Unknown;
  }

private:
  DataDictionary& m_dataDictionary;
  std::deque < std::string > m_path;
  std::deque < std::pair < std::pair < int, int > , DataDictionary > > m_groups;
  std::map < std::string, std::string > * m_pAttrs;

  std::string m_beginString;
  std::string m_msgtype;
  std::string m_field;
  TYPE::Type m_type;
  std::string m_group;
  std::string m_lastElement;
};

#ifdef _MSC_VER
class SAXContentHandlerImpl : public ISAXContentHandler
{
public:
  SAXContentHandlerImpl() {}
  virtual ~SAXContentHandlerImpl() {}

  long __stdcall QueryInterface( const struct _GUID &, void ** ) { return 0; }
  unsigned long __stdcall AddRef( void ) { return 0; }
  unsigned long __stdcall Release( void ) { return 0; }

  virtual HRESULT STDMETHODCALLTYPE putDocumentLocator
  (
    /* [in] */ ISAXLocator __RPC_FAR *pLocator )                 { return                 S_OK; }

  virtual HRESULT STDMETHODCALLTYPE startDocument( void ) { return S_OK; }

  virtual HRESULT STDMETHODCALLTYPE endDocument( void ) { return S_OK; }

  virtual HRESULT STDMETHODCALLTYPE startPrefixMapping
  (
    /* [in] */ wchar_t __RPC_FAR *pwchPrefix,
    /* [in] */ int cchPrefix,
    /* [in] */ wchar_t __RPC_FAR *pwchUri,
    /* [in] */ int cchUri )                 { return                 S_OK; }

  virtual HRESULT STDMETHODCALLTYPE endPrefixMapping
  (
    /* [in] */ wchar_t __RPC_FAR *pwchPrefix,
    /* [in] */ int cchPrefix )                 { return                 S_OK; }

  virtual HRESULT STDMETHODCALLTYPE startElement
  (
    /* [in] */ wchar_t __RPC_FAR *pwchNamespaceUri,
    /* [in] */ int cchNamespaceUri,
    /* [in] */ wchar_t __RPC_FAR *pwchLocalName,
    /* [in] */ int cchLocalName,
    /* [in] */ wchar_t __RPC_FAR *pwchRawName,
    /* [in] */ int cchRawName,
    /* [in] */ ISAXAttributes __RPC_FAR *pAttributes )                 { return                 S_OK; }

  virtual HRESULT STDMETHODCALLTYPE endElement
  (
    /* [in] */ wchar_t __RPC_FAR *pwchNamespaceUri,
    /* [in] */ int cchNamespaceUri,
    /* [in] */ wchar_t __RPC_FAR *pwchLocalName,
    /* [in] */ int cchLocalName,
    /* [in] */ wchar_t __RPC_FAR *pwchRawName,
    /* [in] */ int cchRawName )                 { return                 S_OK; }

  virtual HRESULT STDMETHODCALLTYPE characters
  (
    /* [in] */ wchar_t __RPC_FAR *pwchChars,
    /* [in] */ int cchChars )                 { return                 S_OK; }

  virtual HRESULT STDMETHODCALLTYPE ignorableWhitespace
  (
    /* [in] */ wchar_t __RPC_FAR *pwchChars,
    /* [in] */ int cchChars )                 { return                 S_OK; }

  virtual HRESULT STDMETHODCALLTYPE processingInstruction
  (
    /* [in] */ wchar_t __RPC_FAR *pwchTarget,
    /* [in] */ int cchTarget,
    /* [in] */ wchar_t __RPC_FAR *pwchData,
    /* [in] */ int cchData )                 { return                 S_OK; }

  virtual HRESULT STDMETHODCALLTYPE skippedEntity
  (
    /* [in] */ wchar_t __RPC_FAR *pwchName,
    /* [in] */ int cchName )                 { return                 S_OK; }

};

#else

#include <libxml/parser.h>
#include <libxml/parserInternals.h>
#include <libxml/tree.h>

xmlSAXHandler SAXContentHandlerImpl = {
0,                 //internalSubset;
0,                 //isStandalone;
0,                 //hasInternalSubset;
0,                 //hasExternalSubset;
0,                 //resolveEntity;
0,                 //getEntity;
0,                 //entityDecl;
0,                 //notationDecl;
0,                 //attributeDecl;
0,                 // elementDecl;
0,                 //unparsedEntityDecl;
0,                 //setDocumentLocator;
0,                 //startDocument;
0,                 //endDocument;
0,                 //startElement;
0,                 //endElement;
0,                 //reference;
0,                 //characters;
0,                 //ignorableWhitespace;
0,                 //processingInstruction;
0,                 //comment;
0,                 //warning;
0,                 //error;
0,                 //fatalError;
0,                 //getParameterEntity;
0,                 //cdataBlock;
};
#endif
} // namespace FIX
#endif
