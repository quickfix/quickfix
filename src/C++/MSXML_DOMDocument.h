/* -*- C++ -*- */

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

#ifndef FIX_MSXMLDOMDOCUMENT_H
#define FIX_MSXMLDOMDOCUMENT_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include "DOMDocument.h"
#include "Exceptions.h"

namespace FIX
{
  /// XML attribute as represented by msxml.
  class MSXML_DOMAttributes : public DOMAttributes
  {
  public:
    MSXML_DOMAttributes( MSXML2::IXMLDOMNode* pNode )
    {
      pNode->get_attributes(&m_pNodeMap);
    }

    ~MSXML_DOMAttributes();

    bool get( const std::string&, std::string& );
    DOMAttributes::map toMap();

  private:
    MSXML2::IXMLDOMNamedNodeMap* m_pNodeMap;
  };

  /// XML node as represented by msxml.
  class MSXML_DOMNode : public DOMNode
  {
  public:
    MSXML_DOMNode( MSXML2::IXMLDOMNode* pNode )
    : m_pNode( pNode ) {}

    ~MSXML_DOMNode();

    DOMNodePtr getFirstChildNode();
    DOMNodePtr getNextSiblingNode();
    DOMAttributesPtr getAttributes();
    std::string getName();
    std::string getText();

  private:
    MSXML2::IXMLDOMNode* m_pNode;
  };

  /// XML document as represented by msxml.
  class MSXML_DOMDocument : public DOMDocument
  {
  public:
    MSXML_DOMDocument() throw( ConfigError );
    ~MSXML_DOMDocument();

    bool load( std::istream& );
    bool load( const std::string& );
    bool xml( std::ostream& );

    DOMNodePtr getNode( const std::string& );

  private:
    MSXML2::IXMLDOMDocument2* m_pDoc;
  };
}

#endif
