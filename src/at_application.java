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

import quickfix.*;
import quickfix.field.*;

public class at_application implements Application
{
private at_messagecracker cracker = new at_messagecracker();

public void onCreate( SessionID sessionID ) {
  Session session = Session.lookupSession( sessionID );
  try {
    if ( session != null ) session.reset();
  } catch( java.io.IOException ioe ) {
  }
}

public void onLogon( SessionID sessionID ) {}

public void onLogout( SessionID sessionID ) {
  cracker.reset();
}

public void toAdmin( Message message, SessionID sessionID ) {}
public void toApp( Message message, SessionID sessionID )
  throws DoNotSend {}
public void fromAdmin( Message message, SessionID sessionID )
  throws FieldNotFound, IncorrectDataFormat,
  IncorrectTagValue, RejectLogon {}
public void fromApp( Message message, SessionID sessionID )
  throws FieldNotFound, IncorrectDataFormat,
  IncorrectTagValue, UnsupportedMessageType {
cracker.crack( message, sessionID );
}
}
