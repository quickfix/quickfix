class GeneratorJava
  def initialize(major, minor, dir)
    @major = major
    @minor = minor
    @package = "quickfix.fix" + major + minor
    @beginstring = "FIX." + major + "." + minor
    @depth = 0;
    @dir = dir + "/" + "src/quickfix/fix" + major + minor + "/"
    @basefile = createFile("Message.java")
    @f = @basefile
  end

  def createFile(name)
    attr = File::CREAT|File::TRUNC|File::RDWR
    File.new(@dir + name, attr, 0644)
  end

  def tabs
    if(@depth < 0)
      return ""
    end
    count = 0
    result = ""
    while (count != @depth)
      result += "  " 
      count += 1
    end
    return result
  end

  def front
    @f.puts "package " + @package + ";"
    @f.puts "import quickfix.FieldNotFound;"
    @f.puts "import quickfix.Group;"
    @f.puts "import quickfix.field.*;"
    @f.puts
    @f.puts "public class Message extends quickfix.Message {"
    @f.puts "  public Message() {"
    @f.puts "    super();"
    @f.puts "    header = new Header( this );"
    @f.puts "    trailer = new Trailer( this );"
    @f.puts "    getHeader().setField(new BeginString(\"" + @beginstring + "\"));"
    @f.puts "  }"
  end

  def field(name, number)
    @depth += 1
    @f.puts tabs + "  public void set(quickfix.field." + name + " value)" 
    @f.puts tabs + "  { setField(value); }"
    @f.puts tabs + "  public quickfix.field." + name + " get(quickfix.field." + name + "  value)"
    @f.puts tabs + "    throws FieldNotFound" 
    @f.puts tabs + "  { getField(value); return value; }"
    @f.puts tabs + "  public quickfix.field." + name + " get" + name + "() throws FieldNotFound"
    @f.puts tabs + "  { quickfix.field." + name + " value = new quickfix.field." + name + "();"
    @f.puts tabs + "    getField(value); return value; }"
    @f.puts tabs + "  public boolean isSet(quickfix.field." + name + " field)"
    @f.puts tabs + "  { return isSetField(field); }"
    @f.puts tabs + "  public boolean isSet" + name + "()"
    @f.puts tabs + "  { return isSetField(" + number.to_s + "); }"
    @depth -= 1
  end

  def headerStart
    @depth += 1
    @f.puts tabs + "public class Header extends quickfix.Message.Header {"
    @f.puts tabs + "  public Header( Message message ) {"
    @f.puts tabs + "    super( message );"
    @f.puts tabs + "  }"
  end

  def headerEnd
    @f.puts tabs + "}"
    @f.puts
    @depth -= 1
  end

  def trailerStart
  end

  def trailerEnd
  end

  def baseMessageStart
  end

  def baseMessageEnd
    @f.puts tabs + "}"
  end

  def groupStart(name, number, delim, order)
    if( @basefile == @f )
      @f.puts "/*"
    end
    @depth += 1
    @f.puts tabs + "  public static class " + name + " extends Group {"
    @f.puts tabs + "    public " + name + "() {"
    @f.puts tabs + "      super(" + number + "," + delim + ","
    @f.print tabs + "      new int[] {"
    order.each { |field| @f.print field + "," }
    @f.puts "0 } ); }"
  end

  def groupEnd
    @f.puts tabs + "}"
    @depth -= 1
    if( @basefile == @f )
      @f.puts "*/"
    end
  end

  def messageStart(name, msgtype, required)
    @f = createFile(name + ".java")
    @depth += 1

    @f.puts tabs + "package " + @package + ";"
    @f.puts tabs + "import quickfix.FieldNotFound;"
    @f.puts tabs + "import quickfix.Group;"
    @f.puts tabs + "import quickfix.field.*;"
    @f.puts
    @f.puts tabs + "public class " + name + " extends Message"
    @f.puts tabs + "{"
    @f.puts tabs + "  public " + name + "()"
    @f.puts tabs + "  {"
    @f.puts tabs + "    getHeader().setField(new MsgType(\"" + msgtype + "\"));"
    @f.puts tabs + "  }"
    
    if( required.size > 0 )
      @f.puts tabs + "  public " + name + "("
      required.each_index { |i|
	field = required[i]
	@f.print tabs + "    quickfix.field." + field + " a" + field
	if( i!= required.size-1)
	  @f.puts ","
	else
	  @f.puts " ) {"
	end
      }
      @f.puts

      @depth += 1
      @f.puts tabs + "    getHeader().setField(new MsgType(\"" + msgtype + "\"));"
      required.each { |field|
	@f.puts tabs + "    set(a" + field + ");" }
      @depth -= 1
      @f.puts tabs + "  }"
    end
    @f.puts
    @depth -= 1
  end

  def messageEnd
    @f.puts tabs + "}"
    @f.puts
    @depth -= 1
    @f.close
  end

  def back
    @f = @basefile
  end
end
