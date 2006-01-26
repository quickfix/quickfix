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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "FieldBaseTestCase.h"

namespace FIX
{
  void FieldBaseTestCase::set::onRun( FieldBase& object )
  {
    object.setString("VALUE");
    assert(object.getValue() == "12=VALUE\001");
    assert(object.getTotal() == 542);
    assert(object.getLength() == 9);
    object.setString("VALUF");
    assert(object.getValue() == "12=VALUF\001");
    assert(object.getTotal() == 543);
    assert(object.getLength() == 9);
    object.setField(13);
    assert(object.getValue() == "13=VALUF\001");
    assert(object.getTotal() == 544);
    assert(object.getLength() == 9);
  }
}
