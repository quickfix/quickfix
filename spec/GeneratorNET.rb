class GeneratorNET
  def initialize(major, minor, dir)
    @major = major
    @minor = minor
    @namespace = "QuickFix" + major + minor
    @beginstring = "FIX." + major + "." + minor
    @depth = 0;
    @dir = dir + "/" + "fix" + major + minor + "/"
    @basefile = createFile("Message.cs")
    @f = @basefile
  end

  def createFile(name)
    attr = File::CREAT|File::TRUNC|File::RDWR
    return File.new(@dir + name, attr, 0644)
  end

  def tabs
    count = 0
    result = ""
    while (count != @depth)
      result += "  " 
      count += 1
    end
    return result
  end

  def front
    @f.puts "namespace " + @namespace
    @f.puts "{"
  end

  def field(name, number)
    @f.puts tabs + "  public void set(QuickFix." + name + " value)" 
    @f.puts tabs + "  { setField(value); }"
    @f.puts tabs + "  public QuickFix." + name + " get(QuickFix." + name + "  value)"
    @f.puts tabs + "  { getField(value); return value; }"
    @f.puts tabs + "  public QuickFix." + name + " get" + name + "()"
    @f.puts tabs + "  { QuickFix." + name + " value = new QuickFix." + name + "();"
    @f.puts tabs + "    getField(value); return value; }"
    @f.puts tabs + "  public bool isSet(QuickFix." + name + " field)"
    @f.puts tabs + "  { return isSetField(field); }"
    @f.puts tabs + "  public bool isSet" + name + "()"
    @f.puts tabs + "  { return isSetField(" + number.to_s + "); }"
    @f.puts
  end

  def headerStart
    @depth += 1
    @f.puts tabs + "public class Header : QuickFix.Message.Header"
    @f.puts tabs + "{"
    @depth += 1
    @f.puts tabs + "Header(QuickFix.Message message) : base(message) {}"
    @f.puts
  end

  def headerEnd
    @depth -= 1
    @f.puts tabs + "};"
    @f.puts
    @depth -= 1
  end

  def trailerStart
    @depth += 1
    @f.puts tabs + "public class Trailer : QuickFix.Message.Trailer"
    @f.puts tabs + "{"
    @depth += 1
    @f.puts tabs + "Trailer(QuickFix.Message message) : base(message) {}"
    @f.puts
  end

  def trailerEnd
    @depth -= 1
    @f.puts tabs + "};"
    @f.puts
    @depth -= 1
  end

  def baseMessageStart
    @depth += 1
    @f.puts tabs + "public class Message : QuickFix.Message"
    @f.puts tabs + "{"
    @depth += 1
    @f.puts tabs + "public Message() : base(new QuickFix.BeginString(\"" + @beginstring + "\"))"
    @f.puts tabs + "{"
    @f.puts tabs + "  m_header = new Header(this);"
    @f.puts tabs + "  m_trailer = new Trailer(this);"
    @f.puts tabs + "}"
    @f.puts
    @f.puts tabs + "public Message( QuickFix.MsgType msgType ) : base(new QuickFix.BeginString(\"" + @beginstring + "\"), msgType)"
    @f.puts tabs + "{"
    @f.puts tabs + "  m_header = new Header(this);"
    @f.puts tabs + "  m_trailer = new Trailer(this);"
    @f.puts tabs + "}"
    @f.puts
    @f.puts tabs + "public new Header getHeader() { return (Header)(base.getHeader()); }"
    @f.puts tabs + "public new Trailer getTrailer() { return (Trailer)(base.getTrailer()); }"
    @depth -= 1
    @f.puts tabs + "};"
    @f.puts
  end

  def baseMessageEnd
    @depth -= 1
  end

  def groupStart(name, number, delim, order)
    @depth += 1    
    @f.puts tabs + "class " + name + ": QuickFix.Group"
    @f.puts tabs + "{"
    @f.puts tabs + "public " + name + "() : base(" + number + "," + delim + "," + "message_order ) {}"
    @f.print tabs + "static int[] message_order = new int[] {"
    order.each { |field| @f.print field + "," }
    @f.puts "0};"
  end

  def groupEnd
    @f.puts tabs + "};"
    @depth -= 1
  end

  def messageStart(name, msgtype, required)
    @f = createFile(name + ".cs")
    @f.puts "namespace " + @namespace
    @f.puts "{"
    @f.puts

    @depth += 1
    @f.puts tabs + "public class " + name + " : Message"
    @f.puts tabs + "{"
    @depth += 1
    @f.puts tabs + "public " + name + "() : base(MsgType()) {}"
    @f.puts tabs + "static QuickFix.MsgType MsgType() { return new QuickFix.MsgType(" + "\"" + msgtype + "\"); }"

    if( required.size > 0 )
      @f.puts
      @f.puts tabs + "public " + name + "("
      @depth += 1
      required.each_index { |i|
      field = required[i]
      @f.print tabs + "QuickFix." + field + " a" + field 
      if(i != required.size-1)
        @f.puts ","
      else
        @f.puts " )"
      end
      }
      @depth -= 1
      @f.puts tabs + ": base(MsgType()) {"
      @depth += 1
      required.each { |field|
      @f.puts tabs + "set(a" + field + ");" }
      @depth -= 1
      @f.puts tabs + "}"
    end
    @f.puts
    @depth -= 1
  end

  def messageEnd
    @f.puts tabs + "};"
    @f.puts
    @depth -= 1
    @f.puts tabs + "}"
    @f.puts
    @f.close
  end

  def back
    @f = @basefile
    @f.puts "}"
    @f.puts
  end
end
