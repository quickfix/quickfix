/* ====================================================================
 * The QuickFIX Software License, Version 1.0
 *
 * Copyright (c) 2001 ThoughtWorks, Inc.  All rights
 * reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 *
 * 3. The end-user documentation included with the redistribution,
 *    if any, must include the following acknowledgment:
 *       "This product includes software developed by
 *        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
 *    Alternately, this acknowledgment may appear in the software itself,
 *    if and wherever such third-party acknowledgments normally appear.
 *
 * 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
 *    not be used to endorse or promote products derived from this
 *    software without prior written permission. For written
 *    permission, please contact quickfix-users@lists.sourceforge.net.
 *
 * 5. Products derived from this software may not be called "QuickFIX",
 *    nor may "QuickFIX" appear in their name, without prior written
 *    permission of ThoughtWorks, Inc.
 *
 * THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
 * ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
 * USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 * ====================================================================
 */

#include <stddef.h>
#include "quickfix_api.h"
#include <quickfix/include/Message.h>
#include <quickfix/include/FIX42_Messages.h>

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
