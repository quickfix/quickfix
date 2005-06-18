/* -*- C++ -*- */

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

using System;

namespace QuickFix
{
  public class DefaultMessageFactory : MessageFactory
  {
    public DefaultMessageFactory()
    {
      fix40Factory = new QuickFix40.MessageFactory();
      fix41Factory = new QuickFix41.MessageFactory();
      fix42Factory = new QuickFix42.MessageFactory();
      fix43Factory = new QuickFix43.MessageFactory();
      fix44Factory = new QuickFix44.MessageFactory();
    }

    public QuickFix.Message create( String beginString, String msgType )
    {
      if ( beginString.Equals( "FIX.4.0" ) )
        return fix40Factory.create( beginString, msgType );
      if ( beginString.Equals( "FIX.4.1" ) )
        return fix41Factory.create( beginString, msgType );
      if ( beginString.Equals( "FIX.4.2" ) )
        return fix42Factory.create( beginString, msgType );
      if ( beginString.Equals( "FIX.4.3" ) )
        return fix43Factory.create( beginString, msgType );
      if ( beginString.Equals( "FIX.4.4" ) )
        return fix44Factory.create( beginString, msgType );
      return new Message();
    }

    private QuickFix40.MessageFactory fix40Factory;
    private QuickFix41.MessageFactory fix41Factory;
    private QuickFix42.MessageFactory fix42Factory;
    private QuickFix43.MessageFactory fix43Factory;
    private QuickFix44.MessageFactory fix44Factory;
  };
}
