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

class Comparator < Hash

  def initialize(patterns)
    patterns.each_line do
      | line |
      line.chomp!
      array = line.split("=")
      num = array[0].to_i
      regex = Regexp.new(array[1])
      self[num] = regex;
    end
  end

  def compare(left, right)
    left_array = left.split("\001")
    right_array = right.split("\001")
    # check for number of fields
    if left_array.size != right_array.size
      return false
    end
    left_array.each_index do
      | index |
      left_field = left_array[index].split("=")
      right_field = right_array[index].split("=")
      # check if field is in same order
      if left_field[0] != right_field[0]
	return false
      end
      
      regexp = self[left_field[0].to_i]
      # do a straight comparison or regex comparison
      if regexp == nil
	if left_field[1] != right_field[1]
	  return false
	end
      else
	if !(regexp === right_field[1])
	  return false
	end
      end
    end
    return true
  end

end