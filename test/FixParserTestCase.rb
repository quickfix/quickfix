require './FixParser'
require 'runit/testcase'
require "thread"
require './SocketServer'

class FixParserTestCase < RUNIT::TestCase

  def test_readFixMessage
    fixMsg1 = "8=FIX.4.2\0019=12\00135=A\001108=30\00110=31\001"
    fixMsg2 = "8=FIX.4.2\0019=17\00135=4\00136=88\001123=Y\00110=34\001"

    server = SocketServer.new
    def server.message=(m)
      @message = m
    end

    def server.connectAction(s)
    end

    def server.receiveAction(s)
      s.write(@message)
    end

    def server.disconnectAction(s)
    end

    server.message = fixMsg1 + fixMsg2
    Thread.start do
      server.listen(RUNIT::TestCase.port)
    end
    server.wait

    s = TCPSocket.open("localhost", RUNIT::TestCase.port)
    parser = FixParser.new(s)
    begin
      assert_equals(fixMsg1, parser.readFixMessage)
      assert_equals(fixMsg2, parser.readFixMessage)
    rescue IOError
      # I have no idea why this is being thrown
    end

    s.close
    server.stop()
  end

end
