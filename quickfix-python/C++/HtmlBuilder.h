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

#ifndef HTML_BUILDER_H
#define HTML_BUILDER_H

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 4290 )
#endif

#include <sstream>

namespace HTML
{
class TAG
{
public:
  TAG( const std::string& tag, std::ostream& stream )
  : m_tag( tag ), m_stream( stream ) 
  {
    m_stream << "<" << m_tag;
  }

  virtual ~TAG() 
  {
    m_stream << m_value.str();
    m_stream << "</" << m_tag << ">";
  }

  TAG& text()
  { m_stream << ">"; return *this; }
  TAG& text( const std::string& value )
  { m_value << value; text(); return *this; }
  TAG& text( int value )
  { m_value << value; text(); return *this; } 

 private:
  std::string m_tag;
  std::stringstream m_value;

 protected:
  std::ostream& m_stream;
};

class SPECIAL
{
 public:
  SPECIAL( const std::string& value, std::ostream& stream )
  {
    stream << "&" << value << ";";
  }
};

class A : public TAG
{
public:
  A( std::ostream& stream )
  : TAG( "A", stream ) {}

  A& href( const std::string& value )
  { m_stream << " href='" << value << "'"; return *this; }
};

class BODY : public TAG
{
public:
  BODY( std::ostream& stream )
  : TAG( "BODY", stream ) {}
};

class BR : public TAG
{
public:
  BR( std::ostream& stream )
  : TAG( "BR", stream ) {}
};

class CAPTION : public TAG
{
public:
  CAPTION( std::ostream& stream )
  : TAG( "CAPTION", stream ) {}
};

class CENTER : public TAG
{
public:
  CENTER( std::ostream& stream )
  : TAG( "CENTER", stream ) {}
};

class EM : public TAG
{
public:
  EM( std::ostream& stream )
  : TAG( "EM", stream ) {}
};

class H1 : public TAG
{
public:
  H1( std::ostream& stream )
  : TAG( "H1", stream ) {}
};

class H2 : public TAG
{
public:
  H2( std::ostream& stream )
  : TAG( "H2", stream ) {}
};

class HEAD : public TAG
{
public:
  HEAD( std::ostream& stream )
  : TAG( "HEAD", stream ) {}
};

class HR : public TAG
{
public:
  HR( std::ostream& stream )
  : TAG( "HR", stream ) {}
};

const char* NBSP = "&nbsp;";

class TABLE : public TAG
{
public:
  TABLE( std::ostream& stream )
  : TAG( "TABLE", stream ) {}

  TABLE& border( int value )
  { m_stream << " border='" << value << "'"; return *this; }
  TABLE& cellspacing( int value )
  { m_stream << " cellspacing='" << value << "'"; return *this; }
  TABLE& width( int value )
  { m_stream << " width='" << value << "%'"; return *this; }
};

class TD : public TAG
{
public:
  TD( std::ostream& stream )
  : TAG( "TD", stream ) {}

  TD& align( const std::string& value )
  { m_stream << " align='" << value << "'"; return *this; }
};

class TITLE : public TAG
{
public:
  TITLE( std::ostream& stream )
  : TAG( "TITLE", stream ) {}
};

class TR : public TAG
{
public:
  TR( std::ostream& stream )
  : TAG( "TR", stream ) {}
};
}

#endif
