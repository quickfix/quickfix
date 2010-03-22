require 'PrintFile'

class Aggregator
  def initialize
    @fields = Hash.new
  end

  def getFields
    @fields
  end

  def front
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
  end

  def baseMessageEnd
  end

  def groupStart(name, number, delim, order)
  end

  def groupEnd
  end

  def messageStart(name, msgtype, required)
  end

  def messageEnd
  end

  def back
  end

  def fieldsStart
  end

  def fields(name, number, type, values)
    @fields[name] = { "name" => name, "number" => number, "type" => type, "values" => values }
  end

  def fieldsEnd
  end

end
