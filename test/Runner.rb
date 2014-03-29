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

require './ReflectorClient'
require './Comparator'

def extendProcess(c)

  def c.errorAction(lineNum, line)
    report =  "    " + $!.to_s + "\n"    
    report += "    <line>" + lineNum.to_s + "</line>\n"
    raise report
  end

  def c.compareAction(e, a)
    if( !defined? @patterns )
      @patterns = "10=\\d{1,3}\n52=\\d{8}-\\d{2}:\\d{2}:\\d{2}\n";
    end
    if( !defined? @comp )
      @comp = Comparator.new(@patterns)
    end

    if( !@comp.compare(e,a) )
       e.tr!("\001", "*")
       a.tr!("\001", "*")
       report =  @comp.reason + "\n"
       report += "    <expected><![CDATA[" + e + "]]></expected>\n"
       report += "    <received><![CDATA[" + a + "]]></received>"
       raise report
    end
  end
    
  def c.patterns=(p)
    @patterns = p
  end

  c.patterns = File.open("definitions/fields.fmt", "r")
end

def printResult(test, exception)
  print "<test name='", test,  "' result='"
  if exception == nil then
    print "success'/>\n"
  else
    print "failure' >\n"
    print "  <message>\n", $!, "  </message>\n"
    #print "  <trace><![CDATA["
    #print $!.backtrace.join("]]></trace>\n  <trace><![CDATA[")
    #print "  ]]></trace>\n"
    print "</test>\n"
  end
  STDOUT.flush
end

def createProcess(file, address, port)
  newarray = [1,2,3,4,5,6,7,8,9,10]
  newarray.each do
    | num |
    begin
      socket = TCPSocket.open(address, port);
    rescue
    end
    if socket == nil 
      sleep 3
      next
    else
      socket.close
      break
    end
  end

  file.each_line do
    | line |
    if line =~ /^i\d*,?CONNECT/ then
      return ReflectorClient.new(file, address, port)
    elsif line =~ /^e\d*,?CONNECT/ then
      return ReflectorServer.new(file)
    end
  end
  return nil
end

i = 0
newarray = ARGV[2, ARGV.length-2]
exitValue = 0
total = 0
failures = 0

begin
  print "<at>\n"
  newarray.each do
    | v |
    file = File.open(v, "r")
    process = createProcess(file, ARGV[0], ARGV[1])
    if process.nil? then
      print "  <test name='", v,  "' result='", "failure' >\n"
      print "    <message><![CDATA[Test definition did "
      print "not contain iCONNECT or eCONNECT]]></message>\n"
      print "  </test>\n"
      exitValue += 1
      next
    end
    file.rewind
    extendProcess(process)

  sleep(0.1)
    total += 1
    begin
      process.start
      printResult(v, nil)
      process.stop
    rescue
      failures += 1
      exitValue += 1
      printResult(v, $!)
      process.stop
    end
  end
  print "\n<results total='", total, "' failures='", failures, "'/>\n"
  print "</at>\n"
rescue
  print "  ",$!,"\n"
  print "</at>\n"
end

exit exitValue

if not Object.respond_to?("is_testing") or not Object.is_testing then
end
