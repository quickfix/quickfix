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
	cid = line[1].ord.to_i - 48
	body = fixify!(fileify!(timeify!(line[3, line.length])))
      else
	cid = 1
	body = fixify!(fileify!(timeify!(line[1, line.length])))
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

  def timeify!(message)
    copy = ""
    copy.replace(message)
    t = getTime
    
    strtime = t.strftime("%Y%m%d-%H:%M:%S")
    message.sub!("<TIME>", strtime)
    if( message != copy )
      return timeify!(message)
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
	return timeify!(message)
      end
    end

    return message
  end
  
  def fileify!(message)
    copy = ""
    copy.replace(message)
    
    pos1 = /\<FILE:.+>/ =~ message
    pos2 = /\>/ =~ message
    if( pos1 != nil )
      file = message.slice(pos1+6..pos2-1)
      contents = File.open(file, "rb").read.strip
      exp = Regexp.compile("<FILE:#{file}>")
      message.sub!(exp, contents)
      if( message != copy )
        return fileify!(message)
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
