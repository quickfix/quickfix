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

class Reflector < Array

  def identifyMessage(message)
    if [?I, ?E, ?R, ?i, ?e].include?(message[0]) 
      return message[0]
    else 
      return ?X
    end
  end

  def processFile(messages)
    lineNum = 0
    messages.each_line do
      | line |
      lineNum += 1
      line.chomp!
      if line.empty? then
      elsif (/^[IEie]\d{1},/ === line) then
	cid = line[1].to_i - 48
	body = fixify!(timify!(line[3, line.length]))
      else
	cid = 1
	body = fixify!(timify!(line[1, line.length]))
      end

      begin
        processLine(lineNum, line, body, cid)      
      rescue
        errorAction(lineNum, line);
      end
    end
  end
  
  def processLine(lineNum, line, body, cid)
    if line.empty?
    elsif line[0] == ?\#
    elsif identifyMessage(line) == ?I
      initiateAction(body, cid)
    elsif identifyMessage(line) == ?E
      expectedAction(body, cid)
    elsif identifyMessage(line) == ?i
      if body == "CONNECT"
        connectAction(cid)
      elsif body == "DISCONNECT"
        disconnectAction(cid)
      else
        raise "Syntax error: " + body
      end
    elsif identifyMessage(line) == ?e
      if body == "CONNECT"
        waitConnectAction(cid)
      elsif body == "DISCONNECT"
        waitDisconnectAction(cid)
      else
        raise "Syntax error: " + body
      end
    else
        raise "Syntax error: " + body
    end
  end

  def fixify!(message)
    hasLength = (message =~ /[\001]9=.*?[\001]/)
    length = ""

    head = message.slice!(/^8=.*?[\001]/)

    if head == nil
      return message
    end

    checksum = message.slice(/[\001]10=.*[\001]$/)
    if(checksum != nil)
      message.slice!(/[\001]10=.*[\001]$/)
    end
    
    message.chomp!
    if hasLength == nil      
      length = "9=" + message.length.to_s + "\001"
    end
    
    if checksum == nil
      checksumStr = sprintf("%03d", (head + length + message).sum(8));
      checksum = "10=" + checksumStr + "\001"
    end

    message.replace(head + length + message + checksum)
    return message
  end

  def timify!(message)
    copy = ""
    copy.replace(message)
    t = getTime
    
    strtime = t.strftime("%Y%m%d-%H:%M:%S")
    message.sub!("<TIME>", strtime)
    if( message != copy )
      return timify!(message)
    end

    pos1 = /\<TIME[+-]\d+\>/ =~ message
    pos2 = /\>/ =~ message
    if( pos1 != nil )
      op = message[pos1 + 5]
      num = message.slice(pos1+6..pos2-1)
      if( op == ?+ )
	t += num.to_i
      else
	t -= num.to_i
      end

      strtime = t.strftime("%Y%m%d-%H:%M:%S")
      exp = Regexp.compile("<TIME[" + op.chr + "]" + num + ">")
      message.sub!(exp, strtime)
      if( message != copy )
	return timify!(message)
      end
    end

    return message
  end
  
  def getTime
    t = Time.new
    t = t.gmtime
    return t
  end

end