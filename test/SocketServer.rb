#****************************************************************************
# Copyright (c) 2001-2014
#
# This file is part of the QuickFIX FIX Engine
#
# This file may be distributed under the terms of the quickfixengine.org
# license as defined by quickfixengine.org and appearing in the file
# LICENSE included in the packaging of this file.
#
# This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
# WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
#
# See http://www.quickfixengine.org/LICENSE for licensing information.
#
# Contact ask@quickfixengine.org if any conditions of this licensing are
# not clear to you.
#****************************************************************************

require "socket"

class SocketServer

  def listen(port)
    @gs = TCPServer.open(port)
    addr = @gs.addr
    addr.shift
    while !@gs.closed?
      ns = @gs.accept
      Thread.start do
	s = ns
	connectAction(s)
	receiveAction(s)
	s.close
	disconnectAction(s)
      end
    end

  end

  def stop
    if not @gs.nil?
      @gs.close
    end
  end

  def closed?
    return @gs.closed?
  end

  def wait
    while( closed? ) 
    end
  end

end
