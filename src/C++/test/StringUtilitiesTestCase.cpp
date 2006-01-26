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

#include "StringUtilitiesTestCase.h"

namespace FIX
{
  void StringUtilitiesTestCase::replace::onRun( std::string& object )
  {
    object = "replace the A in this string with a B";
    string_replace( "A", "B", object );
    assert( "replace the B in this string with a B" == object );
    string_replace( "B", "A", object );
    assert( "replace the A in this string with a A" == object );
    string_replace( "A", "AB", object );
    assert( "replace the AB in this string with a AB" == object );
    string_replace( "AB", "ABCDE", object );
    assert( "replace the ABCDE in this string with a ABCDE" == object );
    string_replace( "ABCDE", "AB", object );
    assert( "replace the AB in this string with a AB" == object );
  }
}
