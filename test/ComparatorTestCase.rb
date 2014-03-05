require './Comparator'
require 'runit/testcase'

class ComparatorTestCase < RUNIT::TestCase

  def test_parsePatterns
    patterns = "10=\\d{1,3}\n52=\\d{8}-\\d2:\\d2:\\d2\n"
    comp = Comparator.new(patterns)
    assert_equals(/\d{1,3}/, comp[10])
    assert_equals(/\d{8}-\d2:\d2:\d2/, comp[52])
  end

  def test_compare
    patterns = "10=\\d{1,3}\n52=\\d{8}-\\d{2}:\\d{2}:\\d{2}\n"
    comp = Comparator.new(patterns)
    # matching fields
    assert(comp.compare("1=hello\0012=goodbye\001", "1=hello\0012=goodbye\001"))
    assert(comp.reason == nil)
    # non-matching field
    assert(!comp.compare("1=helloo\0012=goodbye\001", "1=hello\0012=goodbye\001"))
    assert(comp.reason == "Value in field (1) should be (helloo) but was (hello)")
    # out of order fields
    assert(!comp.compare("2=hello\0011=goodbye\001", "1=hello\0012=goodbye\001"))
    assert(comp.reason == "Expected field (2) but found field (1)")
    # different number of fields
    assert(!comp.compare("1=hello\001", "1=hello\0012=goodbye\001"))
    assert(comp.reason == "Number of fields do not match")
    # mathing non-deterministic field
    assert(comp.compare(
	"1=hello\0012=goodbye\00152=12345678-12:23:34\001", "1=hello\0012=goodbye\00152=87654321-98:87:76\001"))
    # non-matching non-deterministic field
    assert(!comp.compare(
	"1=hello\0012=goodbye\00152=12345678-12:23:34\001", "1=hello\0012=goodbye\00152=7654321-98:87:76\001"))
    assert(comp.reason == "Field (52) does not match pattern")
  end

end
