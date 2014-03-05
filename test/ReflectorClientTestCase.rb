require './ReflectorClient'
require 'runit/testcase'
require './ReflectorServer'
require "thread"

class ReflectorClientTestCase < RUNIT::TestCase

  def test_reflectMessages

    serverMessages = "E8=FIX.4.2\0019=13\00135=AC\001108=30\00110=31\001\n"
    serverMessages += "I8=FIX.4.2\0019=13\00135=AS\001108=10\00110=31\001\n"
    serverMessages += "E8=FIX.4.2\0019=13\00135=BC\001108=25\00110=31\001\n"
    serverMessages += "I8=FIX.4.2\0019=13\00135=BS\001108=15\00110=31\001\n"

    clientMessages = "iCONNECT\n"
    clientMessages += "I8=FIX.4.2\0019=13\00135=AC\001108=30\00110=31\001\n"
    clientMessages += "E8=FIX.4.2\0019=13\00135=AS\001108=10\00110=31\001\n"
    clientMessages += "I8=FIX.4.2\0019=13\00135=BC\001108=25\00110=31\001\n"
    clientMessages += "E8=FIX.4.2\0019=13\00135=BS\001108=15\00110=31\001\n"
    clientMessages += "iDISCONNECT\n"

    server = ReflectorServer.new(serverMessages)
    client = ReflectorClient.new(clientMessages, "localhost", RUNIT::TestCase.port)

    def client.next
      begin
	return @queue.pop 0
      rescue
	return nil
      end
    end

    def client.compareAction(e, a)
      if !defined? @queue
	@queue = Queue.new
      end
      @queue.push(e)
      @queue.push(a)
    end
    
    Thread.start do
      server.listen(RUNIT::TestCase.port)
    end
    server.wait

    client.start()
    assert_equals("8=FIX.4.2\0019=13\00135=AS\001108=10\00110=31\001", client.next)
    assert_equals("8=FIX.4.2\0019=13\00135=AS\001108=10\00110=31\001", client.next)
    assert_equals("8=FIX.4.2\0019=13\00135=BS\001108=15\00110=31\001", client.next)
    assert_equals("8=FIX.4.2\0019=13\00135=BS\001108=15\00110=31\001", client.next)
    assert_equals(nil, client.next)
    server.stop
  end

end