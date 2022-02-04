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

#ifndef FIX_DOMDOCUMENT_H
#define FIX_DOMDOCUMENT_H

#include <string>
#include <map>
#include <iostream>
#include <memory>
#include "Utility.h"

namespace FIX
{
  #include "Utility.h"
  /// Interface that represents attribute from underlying XML parser.
  class DOMAttributes
  {
  public:
    typedef std::map<std::string, std::string> map;

    virtual ~DOMAttributes() {}

    virtual bool get( const std::string&, std::string& ) = 0;
    virtual map toMap() = 0;
  };
  typedef SmartPtr<DOMAttributes> DOMAttributesPtr;

  /// Interface that represents node from underlying XML parser.
  class DOMNode
  {
  public:
    virtual ~DOMNode() {}

    virtual SmartPtr<DOMNode> getFirstChildNode() = 0;
    virtual SmartPtr<DOMNode> getNextSiblingNode() = 0;
    virtual SmartPtr<DOMAttributes> getAttributes() = 0;
    virtual std::string getName() = 0;
    virtual std::string getText() = 0;
  };
  typedef SmartPtr<DOMNode> DOMNodePtr;

  /// Interface that represents document of underlying XML parser.
  class DOMDocument
  {
  public:
    virtual ~DOMDocument() {}

    virtual bool load( std::istream& ) = 0;
    virtual bool load( const std::string& ) = 0;
    virtual bool xml( std::ostream& ) = 0;

    virtual SmartPtr<DOMNode> getNode( const std::string& ) = 0;
  };
  typedef SmartPtr<DOMDocument> DOMDocumentPtr;
}

#endif
