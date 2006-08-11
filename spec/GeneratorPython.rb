class GeneratorPython
  def initialize(major, minor, dir)
    @major = major
    @minor = minor
    @beginstring = "FIX." + major + "." + minor
    @depth = 0;
    @dir = dir + "/"
    @f = createFile( "quickfix" + major + minor + ".py" )
    @messageStarted = false
  end

  def createFile(name)
    attr = File::CREAT|File::TRUNC|File::RDWR
    return File.new(@dir + name, attr, 0644)
  end

  def tabs
    count = 0
    result = ""
    while (count != @depth)
      result += "\t" 
      count += 1
    end
    return result
  end

  def front
    @f.puts "import quickfix as fix"
    @f.puts
  end

  def field(name, number)
  end

  def headerStart
  end

  def headerEnd
  end

  def trailerStart
  end

  def trailerEnd
  end

  def baseMessageStart
    @f.puts tabs + "class Message(fix.Message):"
    @depth += 1
    @f.puts tabs + "def __init__(self):"
    @depth += 1
    @f.puts tabs + "fix.Message.__init__(self)"
    @f.puts tabs + "self.getHeader().setField( fix.BeginString(" + "\"" + @beginstring + "\"" + ") )"
    @depth -= 1
    @depth -= 1
  end

  def baseMessageEnd
  end

  def groupStart(name, number, delim, order)
    return if @messageStarted == false

    @f.puts

    @depth += 1    
    @f.puts tabs + "class " + name + "(fix.Group):"
    @depth += 1
    @f.puts tabs + "def __init__(self):"
    @depth += 1
    @f.puts tabs + "order = fix.IntArray(#{order.size+1})"
    order.each_index { |i| @f.puts tabs + "order[#{i}] = #{order[i]}" }
    @f.puts tabs + "order[#{order.size}] = 0"
    @f.puts tabs + "fix.Group.__init__(self, #{number}, #{delim}, order)"
    @depth -= 1
    @depth -= 1
  end

  def groupEnd
    return if @messageStarted == false
    @depth -= 1
  end

  def messageStart(name, msgtype, required)
    @messageStarted = true;
    @f.puts

    @f.puts tabs + "class " + name + "(Message):"
    @depth += 1
    @f.puts tabs + "def __init__(self):"
    @depth += 1
    @f.puts tabs + "Message.__init__(self)"
    @f.puts tabs + "self.getHeader().setField( fix.MsgType(" + "\"" + msgtype + "\") )"
    @depth -= 1
    @depth -= 1
  end

  def messageEnd
    @messageStarted = false
  end

  def back
    @f.close
  end
end
