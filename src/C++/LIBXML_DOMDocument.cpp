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

#include "LIBXML_DOMDocument.h"
#include <sstream>

namespace FIX
{
  DOMNodePtr LIBXML_DOMNode::getFirstChildNode()
  {
    xmlNodePtr pNode = m_pNode->children;
    if( pNode == NULL ) return DOMNodePtr();
    return DOMNodePtr(new LIBXML_DOMNode(pNode));
  }

  DOMNodePtr LIBXML_DOMNode::getNextSiblingNode()
  {
    xmlNodePtr pNode = m_pNode->next;
    if( pNode == NULL ) return DOMNodePtr();
    return DOMNodePtr(new LIBXML_DOMNode(pNode));
  }

  bool LIBXML_DOMNode::getAttributes( std::map<std::string, std::string>& attrs )
  {
    return false;
  }

  std::string LIBXML_DOMNode::getName()
  {
    return (char*)m_pNode->name;
  }

  std::string LIBXML_DOMNode::getText()
  {
    return (char*)m_pNode->content;
  }

  LIBXML_DOMDocument::LIBXML_DOMDocument() throw( ConfigError& )
  : m_pDoc(NULL)
  {
  }

  LIBXML_DOMDocument::~LIBXML_DOMDocument()
  {
    xmlFreeDoc(m_pDoc);
  }

  bool LIBXML_DOMDocument::load( std::istream& stream )
  {  
    try
    {
      std::stringstream sstream;
      sstream << stream.rdbuf();

      m_pDoc = xmlParseDoc((xmlChar*)sstream.str().c_str());
      return m_pDoc != NULL;
    }
    catch( ... ) { return false; }
  }

  bool LIBXML_DOMDocument::xml( std::ostream& out )
  {
    return false;
  }

  DOMNodePtr LIBXML_DOMDocument::getNode( const std::string& XPath )
  {
    xmlNodePtr pNode = xmlNewDocNode(m_pDoc,NULL,(xmlChar*)XPath.c_str(), NULL);
    if( pNode == NULL ) return DOMNodePtr();
    return DOMNodePtr(new LIBXML_DOMNode(pNode));
  }
}
