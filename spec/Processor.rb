require "rexml/document"
require "GeneratorCPP"

include REXML

class Processor

  def initialize(filename, outputdir)
    file = File.new( filename )
    @doc = Document.new file
    @major = @doc.root.attributes["major"]
    @minor = @doc.root.attributes["minor"]
    @header = @doc.elements["fix/header"]
    @trailer = @doc.elements["fix/trailer"]
    @messages = @doc.elements["fix/messages"]
    @fields = @doc.elements["fix/fields"]
    @components = @doc.elements["fix/components"]
    populateFieldHash()
    @generator = GeneratorCPP.new(@major, @minor, outputdir)
    process
  end

  def populateFieldHash()
    @fieldHash = Hash.new
    @fields.elements.each("field") { |field|
      name = field.attributes["name"]
      number = field.attributes["number"]
      @fieldHash[name] = number;
    }
  end

  def lookupField( name )
    @fieldHash[name]
  end

  def lookupComponent( name )
    component = @components.elements["component[@name='"+name+"']"]
  end

  def process
    front
    header
    trailer
    baseMessage
    messages
    back
  end

  def front
    @generator.front
  end

  def header
    @generator.headerStart
    @header.elements.each("field") { |element|
      @generator.field(element.attributes["name"]) } 
    groups(@header)
    @generator.headerEnd
  end

  def trailer
    @generator.trailerStart
    @trailer.elements.each("field") { |element|
      @generator.field(element.attributes["name"]) } 
    groups(@trailer)
    @generator.trailerEnd
  end

  def baseMessage
    @generator.baseMessageStart
    @generator.baseMessageEnd
  end

  def component( element )
    component = lookupComponent( element.attributes["name"] )
    component.elements.each("field") { |field|
      @generator.field(field.attributes["name"]) }
    groups( lookupComponent(element.attributes["name"]) )
  end

  def groups( element )
    element.elements.each("group") { |group|
      name = group.attributes["name"]
      number = lookupField(name);

      fieldElement = group.elements["field"]
      componentElement = group.elements["component"]
      
      if( fieldElement )
	delim = lookupField(fieldElement.attributes["name"])
      else
	component = lookupComponent( componentElement.attributes["name"] )
	delim = lookupField(component.elements["field"].attributes["name"])
      end

      order = Array.new
      group.elements.each("*") { |element|
	if(element.name == "field")
	  order.push(lookupField(element.attributes["name"]))
	end
	if(element.name == "component")
	  component = lookupComponent( element.attributes["name"] )
	  component.elements.each("field") { |field|
	    order.push(lookupField(field.attributes["name"])) }
	end
      }

      @generator.field(name)
      @generator.groupStart(name, number, delim, order)
      group.elements.each("*") { |element|
	if(element.name == "field")
	  @generator.field(element.attributes["name"])
	end
	if(element.name == "component")
	  component(element)
	end
      }

      groups( group )
      @generator.groupEnd
    }
  end

  def messages
    @messages.elements.each("message") { |message|
      name = message.attributes["name"]
      msgtype = message.attributes["msgtype"]

      required = Array.new
      message.elements.each("field[@required='Y']") { |field|
	required.push(field.attributes["name"]) }

      @generator.messageStart(name, msgtype, required)
      message.elements.each("*") { |element|
	if(element.name == "field")
	  @generator.field(element.attributes["name"])
	end
	if(element.name == "component")
	  component( element )
	end
      }
      groups( message )
      @generator.messageEnd
    }
  end

  def back
    @generator.back
  end
end

