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

#if (HAVE_LIBXML > 0 || _MSC_VER == 0)
#include "LIBXML_DOMDocument.h"
#include <libxml/xpath.h>
#include <sstream>

namespace FIX
{
  bool LIBXML_DOMAttributes::get( const std::string& name, std::string& value )
  { QF_STACK_PUSH(LIBXML_DOMAttributes::get)

    xmlChar* result = xmlGetProp(m_pNode, (const xmlChar*)name.c_str());
    if(result == NULL) return false;
    value = (char*)result;
    xmlFree( result );
    return true;

    QF_STACK_POP
  }

  DOMAttributes::map LIBXML_DOMAttributes::toMap()
  { QF_STACK_PUSH(LIBXML_DOMAttributes::toMap)

    xmlAttr* attr = m_pNode->properties;
    DOMAttributes::map map;
    while( attr != 0 )
    {
      std::string value;
      std::string name;
      if( attr->name ) name = (char*)attr->name;
      get(name, value);
      map[name] = value;
      attr = attr->next;
    }
    return map;

    QF_STACK_POP
  }

  DOMNodePtr LIBXML_DOMNode::getFirstChildNode()
  { QF_STACK_PUSH(LIBXML_DOMNode::getFirstChildNode)

    if( !m_pNode->children ) return DOMNodePtr();
    xmlNodePtr pNode = m_pNode->children;
    if( pNode == NULL ) return DOMNodePtr();
    return DOMNodePtr(new LIBXML_DOMNode(pNode));

    QF_STACK_POP
  }

  DOMNodePtr LIBXML_DOMNode::getNextSiblingNode()
  { QF_STACK_PUSH(LIBXML_DOMAttributes::getNextSiblingNode)

    if( !m_pNode->next ) return DOMNodePtr();
    xmlNodePtr pNode = m_pNode->next;
    if( pNode == NULL ) return DOMNodePtr();
    return DOMNodePtr(new LIBXML_DOMNode(pNode));

    QF_STACK_POP
  }

  DOMAttributesPtr LIBXML_DOMNode::getAttributes()
  { QF_STACK_PUSH(LIBXML_DOMAttributes::getAttributes)
    return DOMAttributesPtr(new LIBXML_DOMAttributes(m_pNode));
    QF_STACK_POP
  }

  std::string LIBXML_DOMNode::getName()
  { QF_STACK_PUSH(LIBXML_DOMAttributes::getName)
    return m_pNode->name ? (char*)m_pNode->name : "";
    QF_STACK_POP
  }

  std::string LIBXML_DOMNode::getText()
  { QF_STACK_PUSH(LIBXML_DOMAttributes::getText)
    return m_pNode->content ? (char*)m_pNode->content : "";
    QF_STACK_POP
  }

  LIBXML_DOMDocument::LIBXML_DOMDocument() throw( ConfigError )
  : m_pDoc(NULL)
  {
  }

  LIBXML_DOMDocument::~LIBXML_DOMDocument()
  {
    xmlFreeDoc(m_pDoc);
  }

  bool LIBXML_DOMDocument::load( std::istream& stream )
  { QF_STACK_PUSH(LIBXML_DOMAttributes::load)

    try
    {
      std::stringstream sstream;
      sstream << stream.rdbuf();
      m_pDoc = xmlParseDoc((xmlChar*)sstream.str().c_str());
      return m_pDoc != NULL;
    }
    catch( ... ) { return false; }

    QF_STACK_POP
  }

  bool LIBXML_DOMDocument::load( const std::string& url )
  { QF_STACK_PUSH(LIBXML_DOMAttributes::lead)

    try
    {
      m_pDoc = xmlParseFile(url.c_str());
      return m_pDoc != NULL;
    }
    catch( ... ) { return false; }

    QF_STACK_POP
  }

  bool LIBXML_DOMDocument::xml( std::ostream& out )
  { QF_STACK_PUSH(LIBXML_DOMAttributes::xml)
    return false;
    QF_STACK_POP
  }

  DOMNodePtr LIBXML_DOMDocument::getNode( const std::string& XPath )
  { QF_STACK_PUSH(LIBXML_DOMAttributes::getNode)

    xmlXPathContextPtr context = xmlXPathNewContext(m_pDoc);
    xmlXPathObjectPtr xpathObject = xmlXPathEval((xmlChar*)XPath.c_str(), context);

    if( xpathObject == NULL
        || xpathObject->nodesetval == NULL
        || xpathObject->nodesetval->nodeNr != 1 )
    {
      xmlXPathFreeContext(context);
      return DOMNodePtr();
    }

    DOMNodePtr result(new LIBXML_DOMNode(xpathObject->nodesetval->nodeTab[0]));
    xmlXPathFreeContext(context);
    xmlXPathFreeObject(xpathObject);
    return result;

    QF_STACK_POP
  }
}

#endif
