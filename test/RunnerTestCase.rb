require './Runner'
require 'runit/testcase'

class RunnerTestCase < RUNIT::TestCase
  def test_createProcess
    process = createProcess("foo\nbar\niCONNECT\nbaz", "localhost", 39333)
    assert process.kind_of?(ReflectorClient)
    process = createProcess("iCONNECT\nfoo\nbar\nbaz", "localhost", 39333)
    assert process.kind_of?(ReflectorClient)
    process = createProcess("foo\nbar\neCONNECT\nbaz", "localhost", 39333)
    assert process.kind_of?(ReflectorServer)
    process = createProcess("eCONNECT\nfoo\nbar\nbaz", "localhost", 39333)
    assert process.kind_of?(ReflectorServer)
    process = createProcess("foo\nbar\nbaz", "localhost", 39333)
    assert process.nil?
    process = createProcess("foo\nbar\nbazeCONNECT", "localhost", 39333)
    assert process.nil?
    process = createProcess("", "localhost", 39333)
    assert process.nil?
  end
end
