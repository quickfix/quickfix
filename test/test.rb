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
