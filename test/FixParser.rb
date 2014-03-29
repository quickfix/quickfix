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

require "socket"

class FixParser

  def initialize(io)
    @io = io
  end

  def readFixMessage()
    if(@io.eof?)
      raise "Was disconnected, expected data"
    end

    m = ""
    # read to begining of MsgLen field
    m = @io.gets("\0019=")
    # read contents of MsgLen field
    length = @io.gets("\001")
    m += length
    length.chop!
    
    # regex checks to make sure length is an integer
    # if it isn't there is nothing we can do so
    # close the connection
    if( (/^\d*$/ === length) == nil )
      @io.close
    end
    # read body
    m += @io.read(Integer(length))
    # read CheckSum
    m += @io.gets("\001")
    return m
  end    

end
