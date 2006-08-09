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

#ifndef FIX_HTTPMESSAGESTESTCASE_H
#define FIX_HTTPMESSAGESTESTCASE_H

#include <CPPTest/TestCase.h>
#include "HttpMessage.h"

namespace FIX
{
class HttpMessageTestCase : public CPPTest::TestCase < HttpMessage >
{
public:
  HttpMessageTestCase()
  {
    add( &m_setString );
  }

  typedef CPPTest::SimpleTest < HttpMessage > SimpleTest;

  class setString : public SimpleTest
  {
    void onRun( HttpMessage& object );
  } m_setString;
};

}

#endif //FIX_HTTPMESSAGESTESTCASE_H
