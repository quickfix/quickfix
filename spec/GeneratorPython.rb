class GeneratorPython
  def initialize(type, major, minor, sp, verid, dir)
    @type = type
    @major = major
    @minor = minor
    @beginstring = type + "." + major + "." + minor
    if @type == "FIX" && major >= "5"
      @beginstring = "FIXT.1.1"
    end
    @depth = 0;
    @dir = dir + "/"
    if( sp != "0" )
      @f = createFile( "quick" + type.downcase + major + minor + "sp#{sp}" + ".py" )
    else
      @f = createFile( "quick" + type.downcase + major + minor + ".py" )
    end
    @verid = verid
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
    if( @verid != "0" )
      @f.puts tabs + "self.getHeader().setField( fix.ApplVerID(" + "\"" + @verid + "\"" +") )"
    end
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

  def fieldsStart
    @f = createFile("quickfix_fields.py")
    @f.puts tabs + "import quickfix"
    @f.puts
  end
  
  def fieldType( name, type )
    return "CheckSum" if name == "CheckSum"
    return "Char" if type == "CHAR"
    return "Double" if type == "PRICE"
    return "Int" if type == "INT"
    return "Double" if type == "AMT"
    return "Double" if type == "QTY"
    return "UtcTimeStamp" if type == "UTCTIMESTAMP"
    return "Bool" if type == "BOOLEAN"
    return "Double" if type == "FLOAT"
    return "Double" if type == "PRICEOFFSET"
    return "UtcDate" if type == "UTCDATE"
    return "UtcDate" if type == "UTCDATEONLY"
    return "UtcTimeOnly" if type == "UTCTIMEONLY"
    return "Int" if type == "NUMINGROUP"
    return "Double" if type == "PERCENTAGE"
    return "Int" if type == "SEQNUM"
    return "Int" if type == "LENGTH"
    return "String"
  end
  
  def fields(name, number, type, values)
    @f.puts tabs + "class #{name}(quickfix.#{fieldType(name, type)}Field):"
    @depth += 1
    @f.puts tabs + "def __init__(self, data = None):"
    @depth += 1
    @f.puts tabs + "if data == None:"
    @depth += 1
    @f.puts tabs + "quickfix.#{fieldType(name, type)}Field.__init__(self, #{number})"
    @depth -= 1
    @f.puts tabs + "else:"
    @depth += 1
    @f.puts tabs + "quickfix.#{fieldType(name, type)}Field.__init__(self, #{number}, data)"
    @depth -= 1
    @depth -= 1
    @depth -= 1
    @f.puts
  end

  def fieldsEnd
    @f.close
  end

  def back
    @f.close
  end
end
