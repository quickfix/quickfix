/****************************************************************************
** Copyright (c) 2001-2004 quickfixengine.org  All rights reserved.
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

#include "UtcTimeOnlyTestCase.h"

namespace FIX
{
bool UtcTimeOnlyTestCase::compare::onSetup( UtcTimeOnly*& pObject )
{
  m_object.setHour( 12 );
  m_object.setMinute( 20 );
  m_object.setSecond( 10 );
  m_object.setMillisecond( 0 );

  pObject = &m_object;
  return true;
}

void UtcTimeOnlyTestCase::compare::onRun( UtcTimeOnly& object )
{
  UtcTimeOnly lesserObject;
  lesserObject.setHour( 12 );
  lesserObject.setMinute( 10 );
  lesserObject.setSecond( 5 );
  lesserObject.setMillisecond( 0 );

  assert( lesserObject < object );
  assert( lesserObject <= object );
  assert( object > lesserObject );
  assert( object >= lesserObject );

  UtcTimeOnly greaterObject;
  greaterObject.setHour( 13 );
  greaterObject.setMinute( 10 );
  greaterObject.setSecond( 5 );
  greaterObject.setMillisecond( 0 );
  assert( greaterObject > object );
  assert( greaterObject >= object );
  assert( object < greaterObject );
  assert( object <= greaterObject );

  assert( object <= object );
  assert( object >= object );
  assert( object == object );
}
}
