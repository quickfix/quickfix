require "rexml/document"

include REXML

class Processor

  def initialize(filename, generators)
    file = File.new( filename )
    fileT = File.new( "FIXT11.xml" )
    @filename = filename
    @doc = Document.new file
    @docT = Document.new fileT
    @major = @doc.root.attributes["major"]
    @minor = @doc.root.attributes["minor"]
    @header = @doc.elements["fix/header"]
    @trailer = @doc.elements["fix/trailer"]
    @messages = @doc.elements["fix/messages"]
    @fields = @doc.elements["fix/fields"]
    @fieldsT = @docT.elements["fix/fields"]
    @components = @doc.elements["fix/components"]
    populateFieldHash()
    @generators = generators    
  end

  def populateFieldHash
    @fieldHash = Hash.new
    if( @major == "5" )
      @fieldsT.elements.each("field") { |field|
        name = field.attributes["name"]
        number = field.attributes["number"]
        @fieldHash[name] = number;
      }
    end
    @fields.elements.each("field") { |field|
      name = field.attributes["name"]
      number = field.attributes["number"]
      @fieldHash[name] = number;
    }
  end

  def lookupField( name )
    result = @fieldHash[name]
    raise "field '#{name}' not found" if result == nil
    return result
  end

  def lookupComponent( name )
    result = @components.elements["component[@name='"+name+"']"]
    raise "component '#{name}' not found" if result == nil
    return result
  end

  def process
    puts @filename

    front
    header
    trailer
    baseMessage
    messages
    back
    fields
  end

  def process( aggregator )
    puts @filename
    @aggregator = aggregator

    front
    header
    trailer
    baseMessage
    messages
    back

    @generators.each { |generator|
      generator.fieldsStart
    }

    aggregator.getFields.each { |name, values|
      number = values["number"]
      type = values["type"]
      values = values["values"]

      if( number == "35" )
        values = aggregator.getMsgToType
      end

      @generators.each { |generator|
        generator.fields(name, number, type, values)
      }
    }

    @generators.each { |generator|
      generator.fieldsEnd
    }
  end

  def processFields
    puts @filename

    fields
    messageTypes
  end

  def front
    @generators.each { |generator|
      generator.front
    }
  end

  def header
    @generators.each { |generator|
      generator.headerStart
    }

    @header.elements.each("field") { |element|
      @generators.each { |generator|
        generator.field(element.attributes["name"], lookupField(element.attributes["name"])) 
      }
    } 
      
    groups(@header)
    @generators.each { |generator|
      generator.headerEnd
    }
  end

  def trailer
    @generators.each { |generator|
      generator.trailerStart
    }

    @trailer.elements.each("field") { |element|
      @generators.each { |generator|
        generator.field(element.attributes["name"], lookupField(element.attributes["name"])) 
      }
    }
 
    groups(@trailer)
    @generators.each { |generator|
      generator.trailerEnd
    }
  end

  def baseMessage
    @generators.each { |generator|
      generator.baseMessageStart
      generator.baseMessageEnd
    }
  end

  def component( element )
    component = lookupComponent( element.attributes["name"] )
    component.elements.each("*") { |child|
      if(child.name == "field")
        @generators.each { |generator|
          generator.field(child.attributes["name"], lookupField(child.attributes["name"])) 
        }
      elsif(child.name == "component")
        component(child)
      end
    }
    groups( lookupComponent(element.attributes["name"]) )
  end

  def groups( element )
    element.elements.each("group") { |group|
      name = group.attributes["name"]
      number = lookupField(name);

      element = group.elements["*"]
      
      delim = nil
      order = Array.new
      group.elements.each("*") { |element|
	if(element.name == "field" || element.name == "group")
	  field = lookupField(element.attributes["name"])
	  delim = field if delim == nil
	  order.push(field)
	end
	if(element.name == "component")
	  component = lookupComponent( element.attributes["name"] )
	  component.elements.each("*") { |componentElement|
            if(componentElement.name == "field" || componentElement.name == "group")
	      field = lookupField(componentElement.attributes["name"])
	      delim = field if delim == nil
              order.push(field) 
            end }
	end
      }

      @generators.each { |generator|
        generator.field(name, number)
        generator.groupStart(name, number, delim, order)
      }

      group.elements.each("*") { |element|
        if(element.name == "field")
          @generators.each { |generator|
            generator.field(element.attributes["name"], lookupField(element.attributes["name"]))
          }
	end
        if(element.name == "component")
	  component(element)
	end
      }

      groups( group )
      @generators.each { |generator|
        generator.groupEnd
      }
    }
  end

  def messages
    @messages.elements.each("message") { |message|
      name = message.attributes["name"]
      puts name
      msgtype = message.attributes["msgtype"]

      required = Array.new
      message.elements.each("field[@required='Y']") { |field|
	required.push(field.attributes["name"]) }

      @generators.each { |generator|
        generator.messageStart(name, msgtype, required)
      }
      message.elements.each("*") { |element|
	if(element.name == "field")
          @generators.each { |generator|
	    generator.field(element.attributes["name"], lookupField(element.attributes["name"]))
          }
	end
	if(element.name == "component")
	  component( element )
	end
      }
      groups( message )
      @generators.each { |generator|
        generator.messageEnd
      }
    }
  end

  def messageTypes
      @messages.elements.each("message") { |message|
        name = message.attributes["name"]
        msgtype = message.attributes["msgtype"]

        @generators.each { |generator|
          generator.messageStart(name, msgtype, "N")
        }
      }
  end

  def fields
    @generators.each { |generator|
      generator.fieldsStart
    }
    fixTTFields = Hash.new

    if( @major == "5" )
      @fieldsT.elements.each("field") { |field|
        name = field.attributes["name"]
        number = field.attributes["number"]
        type = field.attributes["type"]

        values = Hash.new
        field.elements.each("value") { |value|
          enum = value.attributes["enum"]
	  description = value.attributes["description"]
          values[description] = enum
        }

        if( number == "35" )
          if(@aggregator == nil)
	    values = Hash.new
          end
        end

        @generators.each { |generator|
          generator.fields(name, number, type, values)
        }
	fixTTFields[name] = name
      }
    end

    @fields.elements.each("field") { |field|
      name = field.attributes["name"]
      number = field.attributes["number"]
      type = field.attributes["type"]

      values = Hash.new
      field.elements.each("value") { |value|
        enum = value.attributes["enum"]
        description = value.attributes["description"]
        values[description] = enum
      }

      if( number == "35" )
        if(@aggregator == nil)
	  values = Hash.new
        end
      end

      if( !fixTTFields.has_key?(name) )
      @generators.each { |generator|
        generator.fields(name, number, type, values)
      }
      end
    }

    @generators.each { |generator|
      generator.fieldsEnd
    }
  end

  def back
    @generators.each { |generator|
      generator.back
    }
  end
end

