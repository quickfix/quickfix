require './Reflector'

class MockReflector < Reflector
  def getTime
    t = Time.gm(2000, "jan", 1, 20, 15, 1)
    return t
  end
end

require 'runit/testcase'

class ReflectorTestCase < RUNIT::TestCase

  def test_identifyMessage
    reflector = Reflector.new
    message = "I8=FIX42"
    assert(reflector.identifyMessage(message) == ?I)    
    message = "E8=FIX42"
    assert(reflector.identifyMessage(message) == ?E)
    message = "R8=FIX42"
    assert(reflector.identifyMessage(message) == ?R)
    message = "8=FIX42"
    assert(reflector.identifyMessage(message) == ?X)
    message = "iACTION"
    assert(reflector.identifyMessage(message) == ?i)
    message = "eACTION"
    assert(reflector.identifyMessage(message) == ?e)
  end

  def test_all
    reflector = MockReflector.new
    
    str = "8=FIX.4.235=D34=249=PATS52=<TIME>56=RCG1=acct111=121=138=240=154=155=ESU260=<TIME>167=FUT204=1207=CME9701=omni19702=19706=E9707=1239708=G"
    reflector.timeify!(str)
    reflector.fixify!(str)
    assert_equals("8=FIX.4.29=17135=D34=249=PATS52=20000101-20:15:0156=RCG1=acct111=121=138=240=154=155=ESU260=20000101-20:15:01167=FUT204=1207=CME9701=omni19702=19706=E9707=1239708=G10=121", str)
    
    str = "8=FIX.4.235=D34=249=PATS52=<TIME>56=RCG1=acct111=121=138=240=154=155=<FILE:test.txt>60=<TIME>167=FUT204=1207=CME9701=omni19702=19706=E9707=1239708=G9709=PEA"
    reflector.timeify!(str)
    reflector.fileify!(str)
    reflector.fixify!(str)    
    assert_equals("8=FIX.4.29=18935=D34=249=PATS52=20000101-20:15:0156=RCG1=acct111=121=138=240=154=155=File Contents60=20000101-20:15:01167=FUT204=1207=CME9701=omni19702=19706=E9707=1239708=G9709=PEA10=062", str)
    
  end

  def test_fixify_bang
    reflector = Reflector.new

    str = "8=FIX.4.235=A34=149=TW52=20000426-12:05:06" + 
      "56=ISLD98=0108=30"
    reflector.fixify!(str)
    assert_equals("8=FIX.4.29=5735=A34=149=TW52=20000426-12:05:0656=ISLD98=0108=3010=005", str)
    
    str = "8=FIX.4.29=5735=A34=149=TW52=20000426-12:05:06" +
      "56=ISLD98=0108=3010=005"
    reflector.fixify!(str)
    assert_equals("8=FIX.4.29=5735=A34=149=TW52=20000426-12:05:0656=ISLD98=0108=3010=005", str)
  end

  def test_timeify_bang
    reflector = Reflector.new
    
    str = "8=FIX.4.29=5735=A34=149=TW52=20011010-10:10:1056=ISLD98=0108=3010=005"
    reflector.timeify!(str)
    assert_equals("8=FIX.4.29=5735=A34=149=TW52=20011010-10:10:1056=ISLD98=0108=3010=005", str)

    str = "8=FIX.4.29=5735=A34=149=TW52=<TIME>56=ISLD98=0" + 
      "108=3010=005"
    reflector.timeify!(str)
    match = (/8=FIX.4.29=5735=A34=149=TW52=\d{8}-\d{2}:\d{2}:\d{2}56=ISLD98=0108=3010=005/ === str)
    assert(match)

    str = "8=FIX.4.29=5735=A34=149=TW52=<TIME>56=ISLD" +
      "122=<TIME>98=0108=3010=005"
    reflector.timeify!(str)
    match = (/8=FIX.4.29=5735=A34=149=TW52=\d{8}-\d{2}:\d{2}:\d{2}56=ISLD122=\d{8}-\d{2}:\d{2}:\d{2}98=0108=3010=005/ === str)
    assert(match)

    str = "8=FIX.4.29=5735=A34=149=TW52=<TIME+9>56=ISLD98=0" + 
      "108=3010=005"
    reflector.timeify!(str)
    match = (/8=FIX.4.29=5735=A34=149=TW52=\d{8}-\d{2}:\d{2}:\d{2}56=ISLD98=0108=3010=005/ === str)
    assert(match)
    
    str = "8=FIX.4.29=5735=A34=149=TW52=<TIME>56=ISLD98=0" + 
      "108=3060=<TIME>10=005"
    reflector.timeify!(str)
    match = (/8=FIX.4.29=5735=A34=149=TW52=\d{8}-\d{2}:\d{2}:\d{2}56=ISLD98=0108=3060=\d{8}-\d{2}:\d{2}:\d{2}10=005/ === str)
    assert(match)
    
    str = "8=FIX.4.235=D34=249=PATS52=<TIME>56=RCG1=acct111=121=138=240=154=155=ESU2" +
      "60=<TIME>167=FUT204=1207=CME9701=omni19702=19706=E9707=1239708=G9710=PEA"
    reflector.timeify!(str)
    match = (/8=FIX.4.235=D34=249=PATS52=\d{8}-\d{2}:\d{2}:\d{2}56=RCG1=acct111=121=138=240=154=155=ESU260=\d{8}-\d{2}:\d{2}:\d{2}167=FUT204=1207=CME9701=omni19702=19706=E9707=1239708=G9710=PEA/ === str)
    assert(match)
  end

  def test_fileify_bang
    reflector = Reflector.new
    
    str = "8=FIX.4.235=C94=033=158=<FILE:test.txt>"
    reflector.fileify!(str)
    match = (/8=FIX.4.235=C94=033=158=File Contents/ === str)
    assert(match)
  end

  def test_identifyFile
    reflector = Reflector.new
    messages = "E8=1\nI8=2\n\nI8=3\nE8=4\n#foo\nE8=5\nE8=6\nI8=7\niCONNECT\neDISCONNECT\neCONNECT\niDISCONNECT\nE2,8=8\n"
    cum = ""
  
    def reflector.ini=(i)
      @ini = i
    end
    def reflector.ini
      return @ini
    end

    def reflector.cum=(c)
      @cum = c
    end
    def reflector.cum
      return @cum
    end

    def reflector.exp=(e)
      @exp = e
    end
    def reflector.exp
      return @exp
    end

    def reflector.icon=(i)
      @icon = i
    end
    def reflector.icon
      return @icon
    end

    def reflector.idis=(i)
      @idis = i
    end
    def reflector.idis
      return @idis
    end

    def reflector.econ=(e)
      @econ = e
    end
    def reflector.econ
      return @econ
    end

    def reflector.edis=(e)
      @edis = e
    end
    def reflector.edis
      return @edis
    end

    def reflector.err=(e)
      @err = e
    end
    def reflector.err
      return @err
    end

    reflector.ini = ""; reflector.cum = "";
    reflector.exp = ""; reflector.icon = ""; 
    reflector.idis = ""; reflector.econ = ""; 
    reflector.edis = ""; reflector.err = "";

    def reflector.initiateAction(msg, cid)
      @cum += cid.to_s + "," + msg + "|"
      @ini += cid.to_s + "," + msg + "|"
    end

    def reflector.expectedAction(msg, cid)
      @cum += cid.to_s + "," + msg + "|"
      @exp += cid.to_s + "," + msg + "|"
    end
    
    def reflector.connectAction(cid)
      @cum += cid.to_s + "," + "iCONNECT" + "|"
      @icon += cid.to_s + "," + "iCONNECT" + "|"
    end

    def reflector.disconnectAction(cid)
      @cum += cid.to_s + "," + "iDISCONNECT" + "|"
      @idis += cid.to_s + "," + "iDISCONNECT" + "|"
    end

    def reflector.waitConnectAction(cid)
      @cum += cid.to_s + "," + "eCONNECT" + "|"
      @econ += cid.to_s + "," + "eCONNECT" + "|"
    end

    def reflector.waitDisconnectAction(cid)
      @cum += cid.to_s + "," + "eDISCONNECT" + "|"
      @edis += cid.to_s + "," + "eDISCONNECT" + "|"
    end

    def reflector.errorAction(lineNum, msg)
      @cum += msg + "|"
      @err += msg + "|"
    end

    reflector.processFile(messages)

    #messages = "E8=1\nI8=2\n\nI8=3\nE8=4\n#foo\nE8=5\nE8=6\nI8=7\niCONNECT\neDISCONNECT\neCONNECT\niDISCONNECT\nE2,8=8\n"

    assert_equals("1,8=1|1,8=2|1,8=3|1,8=4|1,8=5|1,8=6|1,8=7|" +
                  "1,iCONNECT|1,eDISCONNECT|1,eCONNECT|1,iDISCONNECT|2,8=8|", 
                   reflector.cum)
    assert_equals("1,8=2|1,8=3|1,8=7|", reflector.ini)
    assert_equals("1,8=1|1,8=4|1,8=5|1,8=6|2,8=8|", reflector.exp)
    assert_equals("1,iCONNECT|", reflector.icon)
    assert_equals("1,iDISCONNECT|", reflector.idis)
    assert_equals("1,eCONNECT|", reflector.econ)
    assert_equals("1,eDISCONNECT|", reflector.edis)
  end
end
