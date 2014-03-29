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

#ifndef ORDERMATCH_IDGENERATOR_H
#define ORDERMATCH_IDGENERATOR_H

#include <string>
#include <sstream>

class IDGenerator
{
public:
IDGenerator() : m_orderID( 0 ), m_executionID( 0 ) {}

  std::string genOrderID()
  {
    std::stringstream stream;
    stream << ++m_orderID;
    return stream.str();
  }

  std::string genExecutionID()
  {
    std::stringstream stream;
    stream << ++m_executionID;
    return stream.str();
  }

private:
  long m_orderID;
  long m_executionID;
};

#endif
