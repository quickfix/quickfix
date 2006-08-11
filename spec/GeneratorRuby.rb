class GeneratorRuby
  def initialize(major, minor, dir)
    @major = major
    @minor = minor
    @beginstring = "FIX." + major + "." + minor
    @depth = 0;
    @dir = dir + "/"
    @f = createFile( "quickfix" + major + minor + ".rb" )
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
    @f.puts "require 'quickfix'"
    @f.puts "module Quickfix#{@major}#{@minor}"
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
    @f.puts tabs + "class Message < Quickfix::Message"
    @depth += 1
    @f.puts tabs + "def initialize"
    @depth += 1
    @f.puts tabs + "super"
    @f.puts tabs + "getHeader().setField( Quickfix::BeginString.new(" + "\"" + @beginstring + "\"" + ") )"
    @depth -= 1
    @f.puts tabs + "end"
    @depth -= 1
  end

  def baseMessageEnd
    @f.puts tabs + "end"
  end

  def groupStart(name, number, delim, order)
    return if @messageStarted == false
    @f.puts

    @depth += 1    
    @f.puts tabs + "class " + name + " < Quickfix::Group"
    @depth += 1
    @f.puts tabs + "def initialize"
    @depth += 1
    @f.puts tabs + "order = Quickfix.IntArray(#{order.size+1})"
    order.each_index { |i| @f.puts tabs + "order[#{i}] = #{order[i]}" }
    @f.puts tabs + "order[#{order.size}] = 0"
    @f.puts tabs + "super(#{number}, #{delim}, order)"
    @depth -= 1
    @f.puts tabs + "end"
    @depth -= 1
  end

  def groupEnd
    return if @messageStarted == false
    @f.puts tabs + "end"
    @depth -= 1
  end

  def messageStart(name, msgtype, required)
    @messageStarted = true
    @f.puts

    @f.puts tabs + "class " + name + " < Message"
    @depth += 1
    @f.puts tabs + "def initialize"
    @depth += 1
    @f.puts tabs + "super"
    @f.puts tabs + "getHeader().setField( Quickfix::MsgType.new(" + "\"" + msgtype + "\") )"
    @depth -= 1
    @f.puts tabs + "end"
    @depth -= 1
  end

  def messageEnd
    @messageStarted = false
    @f.puts tabs + "end"
  end

  def back
    @f.puts tabs + "end"
  end
end
