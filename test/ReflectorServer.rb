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

require './SocketServer'
require './Reflector'

class ReflectorServer < SocketServer

  def initialize(messages, address = "localhost", port = 5000)
    @reflector = Reflector.new
    @parser = nil
    @socket = nil
    @messages = messages
    @port = port
    
    def @reflector.socket=(s)
      @socket = s
    end

    def @reflector.socket
      return @socket
    end

    def @reflector.server=(s)
      @server = s
    end

    def @reflector.parser=(s)
      @parser = s
    end

    def @reflector.expectedAction(msg, cid)
      m = @parser.readFixMessage
      @server.compareAction(msg, m)
    end

    def @reflector.initiateAction(msg, cid)
      @socket.write(msg)
    end

    def @reflector.waitConnectAction(cid)
	@server.waitConnectAction
    end

    def @reflector.waitDisconnectAction(cid)
      if IO.select([@socket], nil, nil, 10) == nil then 
	raise "Connection hangs after five seconds."
      elsif !@socket.eof? then
	raise "Expected disconnection, got data"
      end
    end

  end

  def connectAction(s)
    if @socket == nil
      @socket = s
      @reflector.socket = s
      @reflector.server = self
    else
      s.close
    end
  end

  def waitConnectAction
    gs = TCPServer.open(@port)
    addr = gs.addr
    addr.shift
    if IO.select([gs], nil, nil, 10) == nil then 
      raise "Connection hangs after ten seconds."
    end
    @socket = gs.accept
    @parser = FixParser.new(@socket)
    @reflector.parser = @parser
    @reflector.socket = @socket
  end

  def disconnectAction(s)
  end

  def receiveAction(s)
  end
  
  def compareAction(e, a)
  end

  def start
    @reflector.server = self
    @reflector.processFile(@messages)
  end

end
