class GeneratorCPP
  def initialize(major, minor, dir)
    @major = major
    @minor = minor
    @namespace = "FIX" + major + minor
    @beginstring = "FIX." + major + "." + minor
    @depth = 0;
    @dir = dir + "/" + @namespace.downcase + "/"
    @basefile = createFile("Message.h")
    @f = @basefile
  end

  def createFile(name)
    attr = File::CREAT|File::TRUNC|File::RDWR
    File.new(@dir + name, attr, 0644)
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
    @f.puts "#ifndef " + @namespace + "_MESSAGES_H"
    @f.puts "#define " + @namespace + "_MESSAGES_H"
    @f.puts
    @f.puts "#include \"../Message.h\""
    @f.puts "#include \"../Group.h\""
    @f.puts
    @f.puts "namespace " + @namespace
    @f.puts "{"
  end

  def field(name, number)
    @depth += 1
    @f.puts tabs + "FIELD_SET(*this, FIX::" + name + ");"
    @depth -= 1
  end

  def headerStart
    @depth += 1
    @f.puts tabs + "class Header : public FIX::Header"
    @f.puts tabs + "{"
    @f.puts tabs + "public:"
  end

  def headerEnd
    @f.puts tabs + "};"
    @f.puts
    @depth -= 1
  end

  def trailerStart
    @depth += 1
    @f.puts tabs + "class Trailer : public FIX::Trailer"
    @f.puts tabs + "{"
    @f.puts tabs + "public:"
  end

  def trailerEnd
    @f.puts tabs + "};"
    @f.puts
    @depth -= 1
  end

  def baseMessageStart
    @depth += 1
    @f.puts tabs + "class Message : public FIX::Message"
    @f.puts tabs + "{"
    @f.puts tabs + "public:"
    @depth += 1
    @f.puts tabs + "Message( const FIX::MsgType& msgtype )"
    @f.puts tabs + ": FIX::Message("
    @f.puts tabs + "  FIX::BeginString(\"" + @beginstring + "\"), msgtype ) {}"
    @f.puts
    @f.puts tabs + "Message(const FIX::Message& m) : FIX::Message(m) {}"
    @f.puts tabs + "Message(const Message& m) : FIX::Message(m) {}"
    @f.puts tabs + "Header& getHeader() { return (Header&)m_header; }"
    @f.puts tabs + "const Header& getHeader() const { return (Header&)m_header; }"
    @f.puts tabs + "Trailer& getTrailer() { return (Trailer&)m_trailer; }"
    @f.puts tabs + "const Trailer& getTrailer() const { return (Trailer&)m_trailer; }"
    @depth -= 1
    @f.puts tabs + "};"
    @f.puts
  end

  def baseMessageEnd
    @depth -= 1
  end

  def groupStart(name, number, delim, order)
    @depth += 1    
    @f.puts tabs + "class " + name + ": public FIX::Group"
    @f.puts tabs + "{"
    @f.puts tabs + "public:"
    @f.print tabs + name + "() : FIX::Group(" + number + "," + delim + "," + "FIX::message_order("
    order.each { |field| @f.print field + "," }
    @f.puts "0)) {}"
  end

  def groupEnd
    @f.puts tabs + "};"
    @depth -= 1
  end

  def messageStart(name, msgtype, required)
    @f = createFile(name + ".h")
    @f.puts "#ifndef " + @namespace + "_" + name.upcase + "_H"
    @f.puts "#define " + @namespace + "_" + name.upcase + "_H"
    @f.puts
    @f.puts "#include \"Message.h\""
    @f.puts
    @f.puts "namespace " + @namespace
    @f.puts "{"
    @f.puts

    @depth += 1
    @f.puts tabs + "class " + name + " : public Message"
    @f.puts tabs + "{"
    @f.puts tabs + "public:"
    @depth += 1
    @f.puts tabs + name + "() : Message(MsgType()) {}"
    @f.puts tabs + name + "(const FIX::Message& m) : Message(m) {}"
    @f.puts tabs + name + "(const Message& m) : Message(m) {}"
    @f.puts tabs + name + "(const #{name}& m) : Message(m) {}"
    @f.puts tabs + "static FIX::MsgType MsgType() { return FIX::MsgType(" + "\"" + msgtype + "\"); }"

    if( required.size > 0 )
      @f.puts
      @f.puts tabs + name + "("
      @depth += 1
      required.each_index { |i|
  field = required[i]
  @f.print tabs + "const FIX::" + field + "& a" + field 
  if(i != required.size-1)
    @f.puts ","
  else
    @f.puts " )"
  end
      }
      @depth -= 1
      @f.puts tabs + ": Message(MsgType())"
      @f.puts tabs + "{"
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
    @f.puts tabs + "#endif"
    @f.close
  end

  def back
    @f = @basefile
    @f.puts "}"
    @f.puts
    @f.puts "#endif"
  end
end
