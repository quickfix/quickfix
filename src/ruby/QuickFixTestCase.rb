require 'runit/testcase'
require '.libs/librbquickfix.so'

class QuickFixTestCase < RUNIT::TestCase

  def test_Logon
    logon = Logon.new

    exceptionCaught = false
    begin
      logon.getEncryptMethod()
    rescue
      exceptionCaught = true
    end
    assert(exceptionCaught)
    
    logon.setEncryptMethod(12)

    encryptMethod = 0
    assert_equals(12, logon.getEncryptMethod())
  end

end

require 'runit/cui/testrunner'
RUNIT::CUI::TestRunner.run(QuickFixTestCase.suite)
