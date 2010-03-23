require 'PrintFile'

class Aggregator
  def initialize
    @fields = Hash.new
    @msgToType = Hash.new
  end

  def getFields
    @fields
  end

  def getMsgToType
    @msgToType
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
    @msgToType[name] = msgtype
  end

  def messageEnd
  end

  def back
  end

  def fieldsStart
  end

  def fields(name, number, type, values)
    if( @fields.has_key?(name) )
      oldValues = @fields[name]["values"]
      values = oldValues.merge!(values)
    end

    @fields[name] = { "name" => name, "number" => number, "type" => type, "values" => values }
  end

  def fieldsEnd
  end

end
