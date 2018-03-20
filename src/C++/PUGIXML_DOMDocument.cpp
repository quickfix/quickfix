/****************************************************************************
** Copyright (c) 2001-2014
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
#else
#include "config.h"
#endif

#include "PUGIXML_DOMDocument.h"
#include <sstream>

namespace FIX
{
  bool PUGIXML_DOMAttributes::get( const std::string& name, std::string& value )
  {
    pugi::xml_attribute result = m_pNode.attribute(name.c_str());
    if( !result ) return false;
    value = result.value();
    return true;
  }

  DOMAttributes::map PUGIXML_DOMAttributes::toMap()
  {
    return DOMAttributes::map();
  }

  DOMNodePtr PUGIXML_DOMNode::getFirstChildNode()
  {
    pugi::xml_node pNode = m_pNode.first_child();
    if( !pNode ) return DOMNodePtr();
    return DOMNodePtr(new PUGIXML_DOMNode(pNode));
  }

  DOMNodePtr PUGIXML_DOMNode::getNextSiblingNode()
  {
    pugi::xml_node pNode = m_pNode.next_sibling();
    if( !pNode ) return DOMNodePtr();
    return DOMNodePtr(new PUGIXML_DOMNode(pNode));
  }

  DOMAttributesPtr PUGIXML_DOMNode::getAttributes()
  {
    return DOMAttributesPtr(new PUGIXML_DOMAttributes(m_pNode));
  }

  std::string PUGIXML_DOMNode::getName()
  {
    return m_pNode.name();
  }

  std::string PUGIXML_DOMNode::getText()
  {
    return m_pNode.value();
  }

  PUGIXML_DOMDocument::PUGIXML_DOMDocument()
  {
  }

  PUGIXML_DOMDocument::~PUGIXML_DOMDocument()
  {
    //xmlFreeDoc(m_pDoc);
  }

  bool PUGIXML_DOMDocument::load( std::istream& stream )
  {
    try
    {
      return m_pDoc.load(stream);
    }
    catch( ... ) { return false; }
  }

  bool PUGIXML_DOMDocument::load( const std::string& url )
  {
    try
    {
      return m_pDoc.load_file(url.c_str());
    }
    catch( ... ) { return false; }
  }

  bool PUGIXML_DOMDocument::xml( std::ostream& out )
  {
    return false;
  }

  DOMNodePtr PUGIXML_DOMDocument::getNode( const std::string& XPath )
  {
    pugi::xpath_node result = m_pDoc.select_single_node(XPath.c_str());
    if( !result ) return DOMNodePtr();

    return DOMNodePtr(new PUGIXML_DOMNode(result.node()));
  }
}
