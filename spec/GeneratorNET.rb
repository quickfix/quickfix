require 'PrintFile'

class GeneratorNET
  def initialize(type, major, minor, dir)
    @type = type
    @major = major
    @minor = minor
    if(type == "FIXT")
        @namespace = "QuickFixT" + major + minor
    else
        @namespace = "QuickFix" + major + minor
    end
    @beginstring = type + "." + major + "." + minor
    if @type == "FIX" && major >= "5"
      @beginstring = "FIXT.1.1"
    end
    @depth = 0;
    @dir = dir + "/" + type.downcase + major + minor + "/"
    @basefile = createVersionFile("Message.cs")
    @f = @basefile
  end

  def createBaseFile(name)
    PrintFile.new(@basedir + "/" + name)
  end

  def createVersionFile(name)
    PrintFile.new(@dir + "/" + name)
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
    @f.indent
    @f.puts tabs + "public class Header : QuickFix.Message.Header"
    @f.puts tabs + "{"
    @f.indent
    @f.puts tabs + "Header(QuickFix.Message message) : base(message) {}"
    @f.puts
  end

  def headerEnd
    @f.dedent
    @f.puts tabs + "};"
    @f.puts
    @f.dedent
  end

  def trailerStart
    @f.indent
    @f.puts tabs + "public class Trailer : QuickFix.Message.Trailer"
    @f.puts tabs + "{"
    @f.indent
    @f.puts tabs + "Trailer(QuickFix.Message message) : base(message) {}"
    @f.puts
  end

  def trailerEnd
    @f.dedent
    @f.puts tabs + "};"
    @f.puts
    @f.dedent
  end

  def baseMessageStart
    @f.indent
    @f.puts tabs + "public class Message : QuickFix.Message"
    @f.puts tabs + "{"
    @f.indent
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
    @f.dedent
    @f.puts tabs + "};"
    @f.puts
  end

  def baseMessageEnd
    @f.dedent
  end

  def groupStart(name, number, delim, order)
    @f.indent    
    @f.puts tabs + "public class " + name + ": QuickFix.Group"
    @f.puts tabs + "{"
    @f.puts tabs + "public " + name + "() : base(" + number + "," + delim + "," + "message_order ) {}"
    @f.print tabs + "static int[] message_order = new int[] {"
    order.each { |field| @f.print field + "," }
    @f.puts "0};"
  end

  def groupEnd
    @f.puts tabs + "};"
    @f.dedent
  end

  def messageStart(name, msgtype, required)
    @f = createFile(name + ".cs")
    @f.puts "namespace " + @namespace
    @f.puts "{"
    @f.puts

    @f.indent
    @f.puts tabs + "public class " + name + " : Message"
    @f.puts tabs + "{"
    @f.indent
    @f.puts tabs + "public " + name + "() : base(MsgType()) {}"
    @f.puts tabs + "static QuickFix.MsgType MsgType() { return new QuickFix.MsgType(" + "\"" + msgtype + "\"); }"

    if( required.size > 0 )
      @f.puts
      @f.puts tabs + "public " + name + "("
      @f.indent
      required.each_index { |i|
      field = required[i]
      @f.print tabs + "QuickFix." + field + " a" + field 
      if(i != required.size-1)
        @f.puts ","
      else
        @f.puts " )"
      end
      }
      @f.dedent
      @f.puts tabs + ": base(MsgType()) {"
      @f.indent
      required.each { |field|
      @f.puts tabs + "set(a" + field + ");" }
      @f.dedent
      @f.puts tabs + "}"
    end
    @f.puts
    @f.dedent
  end

  def messageEnd
    @f.puts tabs + "};"
    @f.puts
    @f.dedent
    @f.puts tabs + "}"
    @f.puts
    @f.close
  end

  def back
    @f = @basefile
    @f.puts "}"
    @f.puts
  end

  def fieldsStart
  end
    
  def fields(name, number, type)
  end

  def fieldsEnd
  end

end
