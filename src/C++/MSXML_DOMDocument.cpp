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
#include "stdafx.h"
#include <atlbase.h>
#include <atlconv.h>
#else
#include "config.h"
#endif
#include "CallStack.h"

#if (HAVE_LIBXML == 0 && _MSC_VER > 0)
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

    CComBSTR result;
    pNode->get_text(&result);
    value = (char*)_bstr_t(result);
    pNode->Release();
    return true;

    QF_STACK_POP
  }

  DOMAttributes::map MSXML_DOMAttributes::toMap()
  {
    return DOMAttributes::map();
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

    CComBSTR result;
    m_pNode->get_nodeName(&result);
    return (char*)_bstr_t(result);

    QF_STACK_POP
  }

  std::string MSXML_DOMNode::getText()
  { QF_STACK_PUSH(MSXML_DOMNode::getText)

    CComBSTR result;
    m_pNode->get_text(&result);
    return (char*)_bstr_t(result);

    QF_STACK_POP
  }

  MSXML_DOMDocument::MSXML_DOMDocument() throw( ConfigError )
  : m_pDoc(NULL)
  {
    if(FAILED(CoInitializeEx( 0, COINIT_MULTITHREADED )))
      if(FAILED(CoInitializeEx( 0, COINIT_APARTMENTTHREADED )))
        throw ConfigError("Could not initialize COM");

    HRESULT hr = CoCreateInstance(
      MSXML2::CLSID_DOMDocument, NULL, CLSCTX_ALL, __uuidof( MSXML2::IXMLDOMDocument2 ),
      ( void ** ) & m_pDoc );

    if ( hr != S_OK )
      throw( ConfigError( "MSXML DOM Document could not be created" ) );
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
      return success != FALSE;
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
      return success != FALSE;
    }
    catch( ... ) { return false; }

    QF_STACK_POP
  }

  bool MSXML_DOMDocument::xml( std::ostream& out )
  { QF_STACK_PUSH(MSXML_DOMDocument::xml)

    try
    {
      CComBSTR result;
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

#endif
