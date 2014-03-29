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
    @reason = nil
    left_array = left.split("\001")
    right_array = right.split("\001")
    # check for number of fields
    if left_array.size != right_array.size
      @reason = "Number of fields do not match"
      return false
    end
    left_array.each_index do
      | index |
      left_field = left_array[index].split("=")
      right_field = right_array[index].split("=")
      # check if field is in same order
      if left_field[0] != right_field[0]
        @reason = "Expected field (" + left_field[0] + ") but found field (" + right_field[0] + ")"
	return false
      end
      
      regexp = self[left_field[0].to_i]
      # do a straight comparison or regex comparison
      if regexp == nil
	if left_field[1] != right_field[1]
	  @reason = "Value in field (" + left_field[0] + ") should be (" + left_field[1] + ") but was (" + right_field[1] + ")"
	  return false
	end
      else
	if !(regexp === right_field[1])
	  @reason = "Field (" + left_field[0] + ") does not match pattern"
	  return false
	end
      end
    end
    return true
  end
  
  def reason()
    return @reason
  end

end
