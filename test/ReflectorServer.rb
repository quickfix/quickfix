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

require 'SocketServer'
require 'Reflector'

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
