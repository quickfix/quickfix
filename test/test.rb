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

def Object.is_testing=(b)
  @is_testing = b
end

def Object.is_testing
  return @is_testing
end

Object.is_testing = true

require 'runit/cui/testrunner'
require 'ReflectorTestCase'
require 'FixParserTestCase'
require 'SocketServerTestCase'
#require 'ReflectorServerTestCase'
require 'ReflectorClientTestCase'
require 'ComparatorTestCase'

class << RUNIT::TestCase
  def port=(p)
    @port = p
  end

  def port
    return @port
  end
end

if ARGV[0] == nil then
  RUNIT::TestCase.port = 5001
  print "port: ", RUNIT::TestCase.port, "\n"
else
  RUNIT::TestCase.port = ARGV[0]
  print "port: ", RUNIT::TestCase.port, "\n"
end

RUNIT::CUI::TestRunner.run(ReflectorTestCase.suite)
RUNIT::CUI::TestRunner.run(FixParserTestCase.suite)
RUNIT::CUI::TestRunner.run(SocketServerTestCase.suite)
#RUNIT::CUI::TestRunner.run(ReflectorClientTestCase.suite)
RUNIT::CUI::TestRunner.run(ComparatorTestCase.suite)
#RUNIT::CUI::TestRunner.run(ReflectorServerTestCase.suite)
