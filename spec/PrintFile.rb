class PrintFile
  def initialize(name)
    @depth = 0
    @name = name
    @file = createFile(name)
  end

  def createFile(name)
    attr = File::CREAT|File::TRUNC|File::RDWR
    File.new(name, attr, 0644)
  end

  def tabs
    return "" if @depth == 0
    count = 0
    result = ""
    while (count != @depth)
      result += "  " 
      count += 1
    end
    return result
  end

  def indent
    @depth += 1
  end

  def dedent
    return if @depth == 0
    @depth -= 1
  end

  def printInline(*values)
    values.each do |value|
      @file.print(value)
    end
  end

  def putsInline(*values)
    @file.puts(values)
  end

  def print(*values)
    if(values.length == 0)
      return
    end

    @file.print tabs
    values.each do |value|
      @file.print(value)
    end
  end

  def puts(*values)
    if(values.length == 0)
      @file.puts
      return
    end

    @file.print tabs
    @file.puts values
  end

  def close
    @file.close
  end
end