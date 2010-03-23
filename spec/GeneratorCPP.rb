require 'PrintFile'

class GeneratorCPP
  def initialize(type, major, minor, sp, basedir)
    @type = type
    @major = major
    @minor = minor
    @namespace = type + major + minor
    if( sp != "0" )
      @namespace += "SP#{sp}"
    end
    @beginstring = type + "." + major + "." + minor
    if @type == "FIX" && major >= "5"
      @beginstring = "FIXT.1.1"
    end
    @basedir = basedir
    @dir = basedir + "/" + @namespace.downcase
    @basefile = createVersionFile("Message.h")
    @f = @basefile
  end

  def createBaseFile(name)
    PrintFile.new(@basedir + "/" + name)
  end

  def createVersionFile(name)
    PrintFile.new(@dir + "/" + name)
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
    @f.indent
    @f.puts "FIELD_SET(*this, FIX::" + name + ");"
    @f.dedent
  end

  def headerStart
    @f.indent
    @f.puts "class Header : public FIX::Header"
    @f.puts "{"
    @f.puts "public:"
  end

  def headerEnd
    @f.puts "};"
    @f.puts
    @f.dedent
  end

  def trailerStart
    @f.indent
    @f.puts "class Trailer : public FIX::Trailer"
    @f.puts "{"
    @f.puts "public:"
  end

  def trailerEnd
    @f.puts "};"
    @f.puts
    @f.dedent
  end

  def baseMessageStart
    @f.indent
    @f.puts "class Message : public FIX::Message"
    @f.puts "{"
    @f.puts "public:"
    @f.indent
    @f.puts "Message( const FIX::MsgType& msgtype )"
    @f.puts ": FIX::Message("
    @f.puts "  FIX::BeginString(\"" + @beginstring + "\"), msgtype ) {}"
    @f.puts
    @f.puts "Message(const FIX::Message& m) : FIX::Message(m) {}"
    @f.puts "Message(const Message& m) : FIX::Message(m) {}"
    @f.puts "Header& getHeader() { return (Header&)m_header; }"
    @f.puts "const Header& getHeader() const { return (Header&)m_header; }"
    @f.puts "Trailer& getTrailer() { return (Trailer&)m_trailer; }"
    @f.puts "const Trailer& getTrailer() const { return (Trailer&)m_trailer; }"
    @f.dedent
    @f.puts "};"
    @f.puts
  end

  def baseMessageEnd
    @f.dedent
  end

  def groupStart(name, number, delim, order)
    @f.indent    
    @f.puts "class " + name + ": public FIX::Group"
    @f.puts "{"
    @f.puts "public:"
    @f.print name + "() : FIX::Group(" + number + "," + delim + "," + "FIX::message_order("
    order.each { |field| @f.printInline field + "," }
    @f.putsInline "0)) {}"
  end

  def groupEnd
    @f.puts "};"
    @f.dedent
  end

  def messageStart(name, msgtype, required)
    @f = createVersionFile(name + ".h")
    @f.puts "#ifndef " + @namespace + "_" + name.upcase + "_H"
    @f.puts "#define " + @namespace + "_" + name.upcase + "_H"
    @f.puts
    @f.puts "#include \"Message.h\""
    @f.puts
    @f.puts "namespace " + @namespace
    @f.puts "{"
    @f.puts

    @f.indent
    @f.puts "class " + name + " : public Message"
    @f.puts "{"
    @f.puts "public:"
    @f.indent
    @f.puts name + "() : Message(MsgType()) {}"
    @f.puts name + "(const FIX::Message& m) : Message(m) {}"
    @f.puts name + "(const Message& m) : Message(m) {}"
    @f.puts name + "(const #{name}& m) : Message(m) {}"
    @f.puts "static FIX::MsgType MsgType() { return FIX::MsgType(" + "\"" + msgtype + "\"); }"

    if( required.size > 0 )
      @f.puts
      @f.puts name + "("
      @f.indent
      required.each_index { |i|
        field = required[i]
        @f.print "const FIX::" + field + "& a" + field 
        if(i != required.size-1)
          @f.putsInline ","
        else
          @f.putsInline " )"
        end
      }
      @f.dedent
      @f.puts ": Message(MsgType())"
      @f.puts "{"
      @f.indent
      required.each { |field|
  @f.puts "set(a" + field + ");" }
      @f.dedent
      @f.puts "}"
    end
    @f.puts
    @f.dedent
  end

  def messageEnd
    @f.puts "};"
    @f.puts
    @f.dedent
    @f.puts "}"
    @f.puts
    @f.puts "#endif"
    @f.close
  end

  def back
    @f = @basefile
    @f.puts "}"
    @f.puts
    @f.puts "#endif"
  end

  def fieldsStart
    @ff = createBaseFile("FixFields.h")
    @fn = createBaseFile("FixFieldNumbers.h")
    @fv = createBaseFile("FixValues.h")
    fixFieldsStart(@ff)
    fixFieldNumbersStart(@fn)
    fixFieldValuesStart(@fv)
  end

  def fields(name, number, type, values)
    fixFields(@ff, name, number, type)
    fixFieldNumbers(@fn, name, number, type)
    fixFieldValues(@fv, name, number, type, values)
  end

  def fieldsEnd
    fixFieldsEnd(@ff)
    fixFieldNumbersEnd(@fn)
    fixFieldValuesEnd(@fv)
    @ff.close
    @fn.close
    @fv.close
  end

  def fixFieldsStart(f)
    f.puts "#ifndef FIX_FIELDS_H"
    f.puts "#define FIX_FIELDS_H"
    f.puts
    f.puts '#include "Field.h"'
    f.puts
    f.puts "#undef Yield"
    f.puts
    f.puts "namespace FIX"
    f.puts "{"
    f.indent
  end
    
  def fixFields(f, name, number, type)
    if( name == "CheckSum" )
      f.puts "DEFINE_CHECKSUM(#{name});"
    else
      f.puts "DEFINE_#{type.upcase}(#{name});"
    end
  end

  def fixFieldsEnd(f)
    f.dedent
    f.puts "}"
    f.puts "#endif //FIX_FIELDS_H"
  end

  def fixFieldNumbersStart(f)
    f.puts "#ifndef FIX_FIELD_NUMBERS_H"
    f.puts "#define FIX_FIELD_NUMBERS_H"
    f.puts
    f.puts "namespace FIX"
    f.puts "{"
    f.indent
    f.puts "namespace FIELD"
    f.puts "{"
    f.indent
  end
    
  def fixFieldNumbers(f, name, number, type)
    f.puts "const int #{name} = #{number};"
  end

  def fixFieldNumbersEnd(f)
    f.dedent
    f.puts "}"
    f.dedent
    f.puts "}"
    f.puts "#endif //FIX_FIELDNUMBERS_H"
  end

  def fixFieldValuesStart(f)
    f.puts "#ifndef FIX_VALUES_H"
    f.puts "#define FIX_VALUES_H"
    f.puts
    f.puts "#include <string>"
    f.puts
    f.puts "namespace FIX"
    f.puts "{"
    f.indent
  end

  def fixFieldValues(f, name, number, type, values)
    values.each { |description, enum|
      case type
        when "INT"
          f.puts "const int #{name}_#{description} = #{enum};"
        when "STRING", "MULTIPLESTRINGVALUE"
          f.puts "const char #{name}_#{description}[] = \"#{enum}\";"
        else
          f.puts "const char #{name}_#{description} = '#{enum}';"
      end
    }
  end

  def fixFieldValuesEnd(f)
    f.puts "}"
    f.puts "#endif //FIX_VALUES_H"
  end

end
