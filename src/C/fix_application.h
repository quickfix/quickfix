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

#ifndef FIX_APPLICATION_C
#define FIX_APPLICATION_C

#ifdef __cplusplus
extern "C" {
#endif

struct fix_Application
{
  void(*onCreate)(fix_Application*, fix_SessionID);
  void(*onLogon)(fix_Application*, fix_SessionID);
  void(*onLogoff)(fix_Application*, fix_SessionID);
  void(*toAdmin)(fix_Application*, fix_Message, fix_SessionID);
  void(*toApp)(fix_Application*, fix_Message, fix_SessionID);
  void(*fromAdmin)(fix_Application*, fix_Message, fix_SessionID);
  void(*fromApp)(fix_Application*, fix_Message, fix_SessionID);
  fix_Application* self;
  void* data;
};

#ifdef __cplusplus
} /* extern "C" */
#endif
/* FIX_APPLICATION_C */
#endif
