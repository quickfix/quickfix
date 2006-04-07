class GeneratorPython
  def initialize(major, minor, dir)
    @major = major
    @minor = minor
    @beginstring = "FIX." + major + "." + minor
    @depth = 0;
    @dir = dir + "/"
    @f = createFile( "quickfix" + major + minor + ".py" )
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
    @f.puts tabs + "def __init__(self,parent):"
    @depth += 1
    @f.puts tabs + "self.getHeader().setField( fix.BeginString(" + "\"" + @beginstring + "\"" + ") )"
    @depth -= 1
    @depth -= 1
  end

  def baseMessageEnd
  end

  def groupStart(name, number, delim, order)
#    @depth += 1    
#    @f.puts tabs + "public class " + name + ": QuickFix.Group"
#    @f.puts tabs + "{"
#    @f.puts tabs + "public " + name + "() : base(" + number + "," + delim + "," + "message_order ) {}"
#    @f.print tabs + "static int[] message_order = new int[] {"
#    order.each { |field| @f.print field + "," }
#    @f.puts "0};"
  end

  def groupEnd
#    @f.puts tabs + "};"
#    @depth -= 1
  end

  def messageStart(name, msgtype, required)
    @f.puts

    @f.puts tabs + "class " + name + "(Message):"
    @depth += 1
    @f.puts tabs + "def __init__(self,parent):"
    @depth += 1
    @f.puts tabs + "self.getHeader().setField( fix.MsgType(" + "\"" + msgtype + "\") )"
    @depth -= 1
    @depth -= 1
  end

  def messageEnd
  end

  def back
  end
end
