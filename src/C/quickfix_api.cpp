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

#include <stddef.h>
#include "quickfix_api.h"
#include <quickfix/Message.h>
#include <quickfix/fix42/Logon.h>

using FIX42::Logon;

Logon* objectToLogon( fix_Message object )
{
  void* pVoid = reinterpret_cast<void*>(object);
  return static_cast<Logon*>(pVoid);
}

extern "C" {

fix_Message fix_CreateLogon()
{
  return reinterpret_cast<fix_Message>(new Logon());
}

void fix_DestroyLogon( fix_Message object )
{
  delete objectToLogon(object);
}

int fix_GetLength( fix_Message object )
{
  Logon* pLogon = objectToLogon(object);
  return pLogon->getString().length();
}

int fix_GetString( fix_Message object, unsigned int size, char* buffer )
{
  Logon* pLogon = objectToLogon(object);
  std::string s = pLogon->getString();
  if( s.length() + 1 > size )
    return 0;

  strcpy(buffer, s.c_str());
  return s.length();
}

int fix_SetEncryptMethod( fix_Message object, int value )
{
  Logon* pLogon = objectToLogon(object);
  pLogon->set( FIX::EncryptMethod(value) );
  return 1;
}

int fix_GetEncryptMethod( fix_Message object, int* value )
{
  Logon* pLogon = objectToLogon(object);
  FIX::EncryptMethod encryptMethod;

  if( !pLogon->isSet( encryptMethod ) )
    return 0;
  else
    {
      *value = pLogon->get( encryptMethod );
      return 1;
    }
}

} /* extern "C" */
