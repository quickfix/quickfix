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

#if (HAVE_LIBXML > 0 || _MSC_VER == 0)
#ifndef FIX_LIBXMLDOMDOCUMENT_H
#define FIX_LIBXMLDOMDOCUMENT_H

#ifdef _MSC_VER
#pragma comment( lib, "libxml2" )
#endif

#include "DOMDocument.h"
#include "Exceptions.h"
#include <libxml/xmlmemory.h>
#include <libxml/parser.h>

namespace FIX
{
  /// XML attribute as represented by libxml.
  class LIBXML_DOMAttributes : public DOMAttributes
  {
  public:
    LIBXML_DOMAttributes( xmlNodePtr pNode )
    : m_pNode(pNode) {}

    bool get( const std::string&, std::string& );
    DOMAttributes::map toMap();

  private:
    xmlNodePtr m_pNode;
  };

  /// XML node as represented by libxml.
  class LIBXML_DOMNode : public DOMNode
  {
  public:
    LIBXML_DOMNode( xmlNodePtr pNode )
    : m_pNode(pNode) {}
    ~LIBXML_DOMNode() {}

    DOMNodePtr getFirstChildNode();
    DOMNodePtr getNextSiblingNode();
    DOMAttributesPtr getAttributes();
    std::string getName();
    std::string getText();

  private:
    xmlNodePtr m_pNode;
  };

  /// XML document as represented by libxml.
  class LIBXML_DOMDocument : public DOMDocument
  {
  public:
    LIBXML_DOMDocument() throw( ConfigError );
    ~LIBXML_DOMDocument();

    bool load( std::istream& );
    bool load( const std::string& );
    bool xml( std::ostream& );

    DOMNodePtr getNode( const std::string& );

  private:
    xmlDocPtr m_pDoc;
  };
}

#endif
#endif
