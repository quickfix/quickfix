# ====================================================================
# The QuickFIX Software License, Version 1.0
#
# Copyright (c) 2001 ThoughtWorks, Inc.  All rights
# reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
# 1. Redistributions of source code must retain the above copyright
#    notice, this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright
#    notice, this list of conditions and the following disclaimer in
#    the documentation and/or other materials provided with the
#    distribution.
#
# 3. The end-user documentation included with the redistribution,
#    if any, must include the following acknowledgment:
#       "This product includes software developed by
#        ThoughtWorks, Inc. (http://www.thoughtworks.com/)."
#    Alternately, this acknowledgment may appear in the software itself,
#    if and wherever such third-party acknowledgments normally appear.
#
# 4. The names "QuickFIX" and "ThoughtWorks, Inc." must
#    not be used to endorse or promote products derived from this
#    software without prior written permission. For written
#    permission, please contact quickfix-users@lists.sourceforge.net.
#
# 5. Products derived from this software may not be called "QuickFIX",
#    nor may "QuickFIX" appear in their name, without prior written
#    permission of ThoughtWorks, Inc.
#
# THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED
# WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
# OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED.  IN NO EVENT SHALL THOUGHTWORKS INC OR
# ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF
# USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
# ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
# OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
# OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
# SUCH DAMAGE.
# ====================================================================

require 'Reflector'
require 'FixParser'
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
	    raise IOError "failed to connect"
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
