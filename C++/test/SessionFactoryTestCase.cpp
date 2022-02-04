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

#ifdef _MSC_VER
#pragma warning( disable : 4503 4355 4786 )
#include "stdafx.h"
#else
#include "config.h"
#endif

#include <UnitTest++.h>
#include <SessionFactory.h>
#include <Application.h>
#include <MessageStore.h>

using namespace FIX;

SUITE(SessionFactoryTests)
{

TEST(validConfiguration)
{
  NullApplication application;
  MemoryStoreFactory messageStoreFactory;
  SessionFactory object(application, messageStoreFactory, 0);

  SessionID sessionID("FIX.4.2", "SENDER", "TARGET");
  Dictionary settings;
  settings.setString(CONNECTION_TYPE, "initiator");
  settings.setString(USE_DATA_DICTIONARY, "N");
  settings.setString(START_TIME, "12:00:00");
  settings.setString(END_TIME, "12:00:00");
  settings.setString(HEARTBTINT, "30");
  object.destroy(object.create(sessionID, settings));
}

TEST(startDayAndEndDayAreDifferent)
{
  NullApplication application;
  MemoryStoreFactory messageStoreFactory;
  SessionFactory object(application, messageStoreFactory, 0);

  SessionID sessionID("FIX.4.2", "SENDER", "TARGET");
  Dictionary settings;
  settings.setString(CONNECTION_TYPE, "initiator");
  settings.setString(USE_DATA_DICTIONARY, "N");
  settings.setString(START_TIME, "12:00:00");
  settings.setString(END_TIME, "12:00:00");
  settings.setString(START_DAY, "Sun");
  settings.setString(END_DAY, "Mon");
  settings.setString(HEARTBTINT, "30");
  object.destroy(object.create(sessionID, settings));
}

}
