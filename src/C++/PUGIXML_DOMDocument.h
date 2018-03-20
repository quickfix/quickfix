/* -*- C++ -*- */

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

#ifndef FIX_PUGIXMLDOMDOCUMENT_H
#define FIX_PUGIXMLDOMDOCUMENT_H

#include "DOMDocument.h"
#include "Exceptions.h"
#include "pugixml.hpp"

namespace FIX
{
  /// XML attribute as represented by pugixml.
  class PUGIXML_DOMAttributes : public DOMAttributes
  {
  public:
    PUGIXML_DOMAttributes( pugi::xml_node pNode )
    : m_pNode(pNode) {}

    bool get( const std::string&, std::string& );
    DOMAttributes::map toMap();

  private:
    pugi::xml_node m_pNode;
  };

  /// XML node as represented by pugixml.
  class PUGIXML_DOMNode : public DOMNode
  {
  public:
    PUGIXML_DOMNode( pugi::xml_node pNode )
    : m_pNode(pNode) {}
    ~PUGIXML_DOMNode() {}

    DOMNodePtr getFirstChildNode();
    DOMNodePtr getNextSiblingNode();
    DOMAttributesPtr getAttributes();
    std::string getName();
    std::string getText();

  private:
    pugi::xml_node m_pNode;
  };

  /// XML document as represented by pugixml.
  class PUGIXML_DOMDocument : public DOMDocument
  {
  public:
    PUGIXML_DOMDocument();
    ~PUGIXML_DOMDocument();

    bool load( std::istream& );
    bool load( const std::string& );
    bool xml( std::ostream& );

    DOMNodePtr getNode( const std::string& );

  private:
    pugi::xml_document m_pDoc;
  };
}

#endif
