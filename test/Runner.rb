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

require 'ReflectorClient'
require 'Comparator'

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

  sleep(.1)
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
