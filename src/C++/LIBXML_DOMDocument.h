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
  class LIBXML_DOMAttributes : public DOMAttributes
  {
  public:
    LIBXML_DOMAttributes( xmlNodePtr pNode )
    : m_pNode(pNode) {}

    bool get( const std::string&, std::string& );
    DOMAttributes::map LIBXML_DOMAttributes::toMap();

  private:
    xmlNodePtr m_pNode;
  };

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

  class LIBXML_DOMDocument : public DOMDocument
  {
  public:
    LIBXML_DOMDocument() throw( ConfigError& );
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
