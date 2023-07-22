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
    report = "    line    : #{lineNum}\n#{$!.to_s}\n"
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
       e.tr!("\001", "|")
       a.tr!("\001", "|")
       report =  "    reason  : #{@comp.reason}\n"
       report += "    expected: #{e}\n"
       report += "    received: #{a}"
       raise report
    end
  end
    
  def c.patterns=(p)
    @patterns = p
  end

  c.patterns = File.open("definitions/fields.fmt", "r")
end

def printResult(test, exception)
  if exception == nil then
  else
    puts $!
  end
  STDOUT.flush
end

def createProcess(file, address, port)
  (1...30).each do
    | num |
    begin
      socket = TCPSocket.new(address, port);
    rescue
    end

    if socket == nil 
      sleep 1
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
exitValue = 0
total = 0
failures = 0

begin
  ARGV[2, ARGV.length-2].each do
    | v |
    puts v
    file = File.open(v, "r")
    process = createProcess(file, ARGV[0], ARGV[1])
    if process.nil? then
      puts "    Test definition did not contain iCONNECT or eCONNECT"
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
  if failures != 0
    puts "FAILED #{failures} out of #{total} tests"
  else
    puts "#{total} tests passed"
  end
rescue
  print "  ",$!,"\n"
end

exit exitValue

if not Object.respond_to?("is_testing") or not Object.is_testing then
end
