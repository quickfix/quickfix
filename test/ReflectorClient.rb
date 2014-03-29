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

require './Reflector'
require './FixParser'
require "socket"

class ReflectorClient

  def initialize(messages, address, port)
    @reflector = Reflector.new
    @messages = messages
    @sockets = Hash.new(nil)
    @parsers = Hash.new(nil)

    def @reflector.address=(a)
      @address = a
    end

    def @reflector.port=(p)
      @port = p
    end

    def @reflector.client=(c)
      @client = c
    end

    def @reflector.sockets=(s)
      @sockets = s
    end

    def @reflector.parsers=(p)
      @parsers = p
    end

    def @reflector.connectAction(cid)
      socket = TCPSocket.open(@address, @port)
      if socket == nil
	    raise IOError("failed to connect")
      end
      @sockets[cid] = socket
      @parsers[cid] = FixParser.new(socket)
    end

    def @reflector.disconnectAction(cid)
      @sockets[cid].close
      @sockets.delete(cid)
      @parsers.delete(cid)
    end

    def @reflector.waitConnectAction(cid)
    end

    def @reflector.waitDisconnectAction(cid)
      socket = @sockets[cid]
      if IO.select([socket], nil, nil, 10) == nil then 
	    raise "Connection hangs after ten seconds."
      elsif !socket.eof? then
	    raise "Expected disconnection, got data"
      end
    end

    def @reflector.initiateAction(msg, cid)
      if( @sockets[cid] == nil )
        raise "Unable to send message because connection was dropped"
      end
      @sockets[cid].write(msg)
      @client.initiateAction(msg, cid)
    end

    def @reflector.expectedAction(msg, cid)
      m = @parsers[cid].readFixMessage
      @client.expectedAction(msg, cid)
      @client.compareAction(msg, m)
    end

    def @reflector.errorAction(lineNum, line)
      @client.errorAction(lineNum, line)
    end

    @reflector.client = self
    @reflector.address = address
    @reflector.port = port
    @reflector.sockets = @sockets
    @reflector.parsers = @parsers
  end

  def start()
    @reflector.processFile(@messages)
  end

  def stop()
    @sockets.each do
      |cid, s|
      begin
	s.close
      rescue
      end
    end
  end

  def initiateAction(msg, cid)
  end
  def expectedAction(msg, cid)
  end
  def responseAction(msg, cid)
  end
end
