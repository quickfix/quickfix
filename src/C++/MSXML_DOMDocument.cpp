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
#include <atlbase.h>
#include <atlconv.h>
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "MSXML_DOMDocument.h"
#include <sstream>

namespace FIX
{
  MSXML_DOMAttributes::~MSXML_DOMAttributes()
  { QF_STACK_IGNORE_BEGIN
    if(m_pNodeMap) m_pNodeMap->Release();
    QF_STACK_IGNORE_END
  }

  bool MSXML_DOMAttributes::get( const std::string& name, std::string& value )
  { QF_STACK_PUSH(MSXML_DOMAttributes::get)

    if(!m_pNodeMap) return false;
    MSXML2::IXMLDOMNode* pNode = NULL;
    m_pNodeMap->getNamedItem(_bstr_t(name.c_str()), &pNode);
    if( pNode == NULL ) return false;

    BSTR result;
    pNode->get_text(&result);
    value = (char*)_bstr_t(result);
    pNode->Release();
    return true;

    QF_STACK_POP
  }

  MSXML_DOMNode::~MSXML_DOMNode()
  { QF_STACK_IGNORE_BEGIN
    m_pNode->Release();
    QF_STACK_IGNORE_END
  }

  DOMNodePtr MSXML_DOMNode::getFirstChildNode()
  { QF_STACK_PUSH(MSXML_DOMNode::getFirstChildNode)

    MSXML2::IXMLDOMNode* pNode = NULL;
    m_pNode->get_firstChild(&pNode);
    if( pNode == NULL ) return DOMNodePtr();
    return DOMNodePtr(new MSXML_DOMNode(pNode));

    QF_STACK_POP
  }

  DOMNodePtr MSXML_DOMNode::getNextSiblingNode()
  { QF_STACK_PUSH(MSXML_DOMNode::getNextSiblingNode)

    MSXML2::IXMLDOMNode* pNode = NULL;
    m_pNode->get_nextSibling(&pNode);
    if( pNode == NULL ) return DOMNodePtr();
    return DOMNodePtr(new MSXML_DOMNode(pNode));

    QF_STACK_POP
  }

  DOMAttributesPtr MSXML_DOMNode::getAttributes()
  { QF_STACK_PUSH(MSXML_DOMNode::getAttributes)
    return DOMAttributesPtr(new MSXML_DOMAttributes(m_pNode));
    QF_STACK_POP
  }

  std::string MSXML_DOMNode::getName()
  { QF_STACK_PUSH(MSXML_DOMNode::getName)

    BSTR result;
    m_pNode->get_nodeName(&result);
    return (char*)_bstr_t(result);

    QF_STACK_POP
  }

  std::string MSXML_DOMNode::getText()
  { QF_STACK_PUSH(MSXML_DOMNode::getText)

    BSTR result;
    m_pNode->get_text(&result);
    return (char*)_bstr_t(result);

    QF_STACK_POP
  }

  MSXML_DOMDocument::MSXML_DOMDocument() throw( ConfigError& )
  : m_pDoc(NULL)
  {
    if(FAILED(CoInitialize(NULL)))
      throw ConfigError("Could not initialize COM");

    HRESULT hr = CoCreateInstance(
      MSXML2::CLSID_DOMDocument, NULL, CLSCTX_ALL, __uuidof( MSXML2::IXMLDOMDocument2 ),
      ( void ** ) & m_pDoc );

    if ( hr != S_OK )
      throw( ConfigError( "MSXML SAX Parser could not be created" ) );
  }

  MSXML_DOMDocument::~MSXML_DOMDocument()
  { QF_STACK_IGNORE_BEGIN
    if(m_pDoc != NULL)
      m_pDoc->Release();
    CoUninitialize();
    QF_STACK_IGNORE_END
  }

  bool MSXML_DOMDocument::load( std::istream& stream )
  { QF_STACK_PUSH(MSXML_DOMDocument::load)

    try
    {
      m_pDoc->put_async(VARIANT_FALSE);
      m_pDoc->put_resolveExternals(VARIANT_FALSE);
      m_pDoc->setProperty(_bstr_t("SelectionLanguage"), _variant_t("XPath"));

      std::stringstream sstream;
      sstream << stream.rdbuf();

      VARIANT_BOOL success = FALSE;
      m_pDoc->loadXML(_bstr_t(sstream.str().c_str()), &success);
      return success != TRUE;
    }
    catch( ... ) { return false; }

    QF_STACK_POP
  }

  bool MSXML_DOMDocument::load( const std::string& url )
  { QF_STACK_PUSH(MSXML_DOMDocument::load)

    try
    {
      m_pDoc->put_async(VARIANT_FALSE);
      m_pDoc->put_resolveExternals(VARIANT_FALSE);
      m_pDoc->setProperty(_bstr_t("SelectionLanguage"), _variant_t("XPath"));

      VARIANT_BOOL success = FALSE;
      m_pDoc->load(_variant_t(url.c_str()), &success);
      return success != TRUE;
    }
    catch( ... ) { return false; }

    QF_STACK_POP
  }

  bool MSXML_DOMDocument::xml( std::ostream& out )
  { QF_STACK_PUSH(MSXML_DOMDocument::xml)

    try
    {
      BSTR result;
      HRESULT hr = m_pDoc->get_xml(&result);
      if( hr != S_OK ) return false;
      out << (char*)_bstr_t(result);
      return true;
    }
    catch( ... ) { return false; }

    QF_STACK_POP
  }

  DOMNodePtr MSXML_DOMDocument::getNode( const std::string& XPath )
  { QF_STACK_PUSH(MSXML_DOMDocument::getNode)

    HRESULT hr;

    MSXML2::IXMLDOMNode* pNode = NULL;
    hr = m_pDoc->selectSingleNode(_bstr_t(XPath.c_str()), &pNode);
    if( pNode == NULL ) return DOMNodePtr();
    return DOMNodePtr(new MSXML_DOMNode(pNode));

    QF_STACK_POP
  }
}
