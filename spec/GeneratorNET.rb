require 'PrintFile'

class GeneratorNET
  def initialize(type, major, minor, sp, verid, basedir)
    @type = type
    @major = major
    @minor = minor
    if(type == "FIXT")
        @namespace = "QuickFixT" + major + minor
    else
        @namespace = "QuickFix" + major + minor
        if( sp != "0" )
          @namespace += "Sp#{sp}"
        end
    end
    @verid = verid
    @beginstring = type + "." + major + "." + minor
    if @type == "FIX" && major >= "5"
      @beginstring = "FIXT.1.1"
    end
    @depth = 0;
    @basedir = basedir
    if( sp != "0" )
      @dir = basedir + "/" + type.downcase + major + minor + "sp#{sp}" + "/"
    else
      @dir = basedir + "/" + type.downcase + major + minor + "/"
    end
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
    @f.puts "  public void set(QuickFix." + name + " value)" 
    @f.puts "  { setField(value); }"
    @f.puts "  public QuickFix." + name + " get(QuickFix." + name + "  value)"
    @f.puts "  { getField(value); return value; }"
    @f.puts "  public QuickFix." + name + " get" + name + "()"
    @f.puts "  { QuickFix." + name + " value = new QuickFix." + name + "();"
    @f.puts "    getField(value); return value; }"
    @f.puts "  public bool isSet(QuickFix." + name + " field)"
    @f.puts "  { return isSetField(field); }"
    @f.puts "  public bool isSet" + name + "()"
    @f.puts "  { return isSetField(" + number.to_s + "); }"
    @f.puts
  end

  def headerStart
    @f.indent
    @f.puts "public class Header : QuickFix.Message.Header"
    @f.puts "{"
    @f.indent
    @f.puts "Header(QuickFix.Message message) : base(message) {}"
    @f.puts
  end

  def headerEnd
    @f.dedent
    @f.puts "};"
    @f.puts
    @f.dedent
  end

  def trailerStart
    @f.indent
    @f.puts "public class Trailer : QuickFix.Message.Trailer"
    @f.puts "{"
    @f.indent
    @f.puts "Trailer(QuickFix.Message message) : base(message) {}"
    @f.puts
  end

  def trailerEnd
    @f.dedent
    @f.puts "};"
    @f.puts
    @f.dedent
  end

  def baseMessageStart
    @f.indent
    @f.puts "public class Message : QuickFix.Message"
    @f.puts "{"
    @f.indent
    @f.puts "public Message() : base(new QuickFix.BeginString(\"" + @beginstring + "\"))"
    @f.puts "{"
    @f.puts "  m_header = new Header(this);"
    @f.puts "  m_trailer = new Trailer(this);"
    if( @verid != "0" )
      @f.puts "  getHeader().setField( new QuickFix.ApplVerID(\"" + @verid + "\") );"
    end
    @f.puts "}"
    @f.puts
    @f.puts "public Message( QuickFix.MsgType msgType ) : base(new QuickFix.BeginString(\"" + @beginstring + "\"), msgType)"
    @f.puts "{"
    @f.puts "  m_header = new Header(this);"
    @f.puts "  m_trailer = new Trailer(this);"
    if( @verid != "0" )
      @f.puts "  getHeader().setField( new QuickFix.ApplVerID(\"" + @verid + "\") );"
    end
    @f.puts "}"
    @f.puts
    @f.puts "public new Header getHeader() { return (Header)(base.getHeader()); }"
    @f.puts "public new Trailer getTrailer() { return (Trailer)(base.getTrailer()); }"
    @f.dedent
    @f.puts "};"
    @f.puts
  end

  def baseMessageEnd
    @f.dedent
  end

  def groupStart(name, number, delim, order)
    @f.indent    
    @f.puts "public class " + name + ": QuickFix.Group"
    @f.puts "{"
    @f.puts "public " + name + "() : base(" + number + "," + delim + "," + "message_order ) {}"
    @f.print "static int[] message_order = new int[] {"
    order.each { |field| @f.printInline field + "," }
    @f.putsInline "0};"
  end

  def groupEnd
    @f.puts "};"
    @f.dedent
  end

  def messageStart(name, msgtype, required)
    @f = createVersionFile(name + ".cs")
    @f.puts "namespace " + @namespace
    @f.puts "{"
    @f.puts

    @f.indent
    @f.puts "public class " + name + " : Message"
    @f.puts "{"
    @f.indent
    @f.puts "public " + name + "() : base(MsgType()) {}"
    @f.puts "static QuickFix.MsgType MsgType() { return new QuickFix.MsgType(" + "\"" + msgtype + "\"); }"

    if( required.size > 0 )
      @f.puts
      @f.puts "public " + name + "("
      @f.indent
      required.each_index { |i|
      field = required[i]
      @f.print "QuickFix." + field + " a" + field 
      if(i != required.size-1)
        @f.putsInline ","
      else
        @f.putsInline " )"
      end
      }
      @f.dedent
      @f.puts ": base(MsgType()) {"
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
    @f.close
  end

  def back
    @f = @basefile
    @f.puts "}"
    @f.puts
  end

  def fieldsStart
    @f = createBaseFile("Fields.h")
    @f.puts "#pragma once"
    @f.puts
    @f.puts "#undef Yield"
    @f.puts "#undef DUPLICATE"
    @f.puts "#undef STRICT"
    @f.puts "#undef DIFFERENCE"
    @f.puts '#include "Field.h"'
    @f.puts
    @f.puts "namespace QuickFix"
    @f.puts "{"
    @f.indent
  end
    
  def fields(name, number, type, values)
    @f.puts "public __gc class #{name} : public #{getFieldType(type)}Field"
    @f.puts "{"
    @f.puts "public:"
    @f.indent
    @f.puts "static const int FIELD = #{number};"
    values.each { |description, enum|
      if(description[0].to_i >= 48 && description[0].to_i <= 57)
        description = "_" + description
      end

      case type
        when "STRING"
          @f.puts "static const String* #{description} = \"#{enum}\";"
        when "INT"
          @f.puts "static const int #{description} = #{enum};"
        else
          @f.puts "static const __wchar_t #{description} = '#{enum}';"
      end
    }
    @f.puts "#{name}() : #{getFieldType(type)}Field(#{number}) {}"
    @f.puts "#{name}(#{getType(type)} data) : #{getFieldType(type)}Field(#{number}, data) {}"
    if(getFieldType(type) == "Double")
      @f.puts "#{name}(#{getType(type)} data, int decimalPadding) : #{getFieldType(type)}Field(#{number}, data, decimalPadding) {}"
    end
    if(type == "UTTIMESTAMP" || type == "UTCTIMEONLY")
      @f.puts "#{name}(#{getType(type)} data, bool showMilliseconds) : #{getFieldType(type)}Field(#{number}, data, showMilliseconds) {}"
    end
    @f.dedent
    @f.puts"};"

    @f.puts
  end

  def fieldsEnd
    @f.dedent
    @f.puts "}"
  end

  def getType(type)
    case type
      when "CHAR"
        "__wchar_t"
      when "PRICE"
        "double"
      when "INT"
        "int"
      when "AMT"
        "double"
      when "QTY"
        "double"
      when "UTCTIMESTAMP"
        "DateTime"
      when "BOOLEAN"
        "bool"
      when "FLOAT"
        "double"
      when "PRICEOFFSET"
        "double"
      when "UTCDATE"
        "DateTime"
      when "UTCDATEONLY"
        "DateTime"
      when "UTCTIMEONLY"
        "DateTime"
      when "NUMINGROUP"
        "int"
      when "PERCENTAGE"
        "double"
      when "SEQNUM"
        "int"
      when "LENGTH"
      	"int"
      else
        "String*"
      end
  end

  def getFieldType(type)
    case type
      when "CHAR"
        "Char"
      when "PRICE"
        "Double"
      when "INT"
        "Int"
      when "AMT"
        "Double"
      when "QTY"
        "Double"
      when "UTCTIMESTAMP"
        "UtcTimeStamp"
      when "BOOLEAN"
        "Boolean"
      when "FLOAT"
        "Double"
      when "PRICEOFFSET"
        "Double"
      when "UTCDATE"
        "UtcDate"
      when "UTCDATEONLY"
        "UtcDateOnly"
      when "UTCTIMEONLY"
        "UtcTimeOnly"
      when "NUMINGROUP"
        "Int"
      when "PERCENTAGE"
        "Double"
      when "SEQNUM"
        "Int"
      when "LENGTH"
      	"Int"
      else
        "String"
      end
  end
end
