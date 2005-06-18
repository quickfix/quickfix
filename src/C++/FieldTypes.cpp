/****************************************************************************
** Copyright (c) 2001-2005 quickfixengine.org  All rights reserved.
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
#include "stdafx.h"
#else
#include "config.h"
#endif
#include "CallStack.h"

#include "FieldTypes.h"

namespace FIX
{
void UtcTimeStamp::setTime( const UtcTimeOnly& time )
{ QF_STACK_PUSH(UtcTimeStamp::setTime)

  setHour( time.getHour() );
  setMinute( time.getMinute() );
  setSecond( time.getSecond() );
  setMillisecond( time.getMillisecond() );

  QF_STACK_POP
}

void UtcTimeStamp::operator+=( long seconds )
{
  tm copy = *this;
  time_t time = mktime( const_cast < tm* > ( &copy ) );
  time += seconds;
  *static_cast < tm* > ( this ) = time_localtime( &time );
  tm_isdst = -1;
}
}
