# -*- coding: utf-8 -*-
require "rexml/document"
require "rexml/xpath"

class String
  def camel_to_snake_case
    self.gsub(/([A-Z]+)([A-Z][a-z])/, '\1_\2')
        .gsub(/([a-z\d])([A-Z])/, '\1_\2')
        .downcase
  end
end

class OrderedAttributes < REXML::Formatters::Pretty
  def write_element(elm, out)
    att = elm.attributes

    class << att
      alias _each_attribute each_attribute

      def each_attribute(&b)
        order = []
        to_enum(:_each_attribute).each { |x| order.push(x.name) }
        to_enum(:_each_attribute).sort_by { |x| order.find_index(x) }.each(&b)
      end
    end

    super(elm, out)
  end
end

class DataDictionary
  def initialize()
    @fieldOrGroupOrComponentXPath = '*[self::fieldRef or self::repeatingGroup or self::componentRef]'
    @repositoryDoc = REXML::Document.new(File.new("Unified/FixRepository.xml"))

    @repositoryDoc.root.elements.each do |inputFixElement|
      processSpec(inputFixElement)  
    end
  end

  def processSpec(inputFixElement)
    version = inputFixElement['version']
    print version

    decomposedVersion = version.split('.')
    type = decomposedVersion[0]
    major = decomposedVersion[1].to_i
    minorAndMaybeServicePack = decomposedVersion[2].split("SP")
    minor = minorAndMaybeServicePack[0].to_i
    servicepack = minorAndMaybeServicePack[1] != nil ? minorAndMaybeServicePack[1].to_i : 0

    filename = "#{type}#{major}#{minor}#{servicepack == 0 ? "" : "SP" + servicepack.to_s}.xml"
    file = File.new(filename, File::CREAT | File::TRUNC | File::RDWR)

    specDoc = REXML::Document.new()
    outputFixElement = specDoc.add_element("fix", {'type' => type, 'major' => major, 'minor' => minor, 'servicepack' => servicepack})

    processHeader(major, minor, inputFixElement, outputFixElement)
    processMessages(major, minor, inputFixElement, outputFixElement)
    processTrailer(major, minor, inputFixElement, outputFixElement)
    processComponents(major, minor, inputFixElement, outputFixElement)
    processFields(major, minor, inputFixElement, outputFixElement)

    if(major = 5 && minor == 0)
      outputFixElement.elements.delete_all("components/component[@name = 'InstrmtLegExecGrp']/group[@name = 'NoLegs']/field[@name = 'LegPrice']")
    end

    format = OrderedAttributes.new(indentation = 1, true)
    puts " -> #{file.path}"
    format.write(specDoc, file)
  end

  def processHeader(major, minor, inputFixElement, outputFixElement)
    outputHeaderElement = outputFixElement.add_element("header")
    return if major >= 5
    inputHeaderElement = REXML::XPath.first(inputFixElement, "components/component[@name = 'StandardHeader']")
    inputHeaderElement.each_element(@fieldOrGroupOrComponentXPath) do |inputFieldElement|
      processFieldOrGroupOrComponent(major, minor, inputFixElement, inputFieldElement, outputHeaderElement, :inlineComponent)
    end    
  end

  def processMessages(major, minor, inputFixElement, outputFixElement)
    outputMessagesElement = outputFixElement.add_element('messages')
    inputMessagesElement = REXML::XPath.first(inputFixElement, 'messages')
    inputMessagesElement.each_element('message') do |inputMessageElement|
      name = toMessageName(inputMessageElement.attributes['name'])
      msgtype = inputMessageElement.attributes['msgType']
      msgcat = inputMessageElement.attributes['category'] == 'Session' ? 'admin' : 'app'
      next if(major >= 5 && msgcat == 'admin')
      outputMessageElement = outputMessagesElement.add_element('message', {'name' => name, 'msgtype' => msgtype, 'msgcat' => msgcat})

      inputMessageElement.each_element(@fieldOrGroupOrComponentXPath) do |inputElement|
        processFieldOrGroupOrComponent(major, minor, inputFixElement, inputElement, outputMessageElement, :processComponent)
      end  
    end    
  end

  def processTrailer(major, minor, inputFixElement, outputFixElement)
    outputTrailerElement = outputFixElement.add_element("trailer")
    return if major >= 5
    inputTrailerElement = REXML::XPath.first(inputFixElement, "components/component[@name = 'StandardTrailer']")
    inputTrailerElement.each_element(@fieldOrGroupOrComponentXPath) do |inputFieldElement|
      processFieldOrGroupOrComponent(major, minor, inputFixElement, inputFieldElement, outputTrailerElement, :inlineComponent)
    end
  end

  def processComponents(major, minor, inputFixElement, outputFixElement)
    outputComponentsElement = outputFixElement.add_element('components')
    inputComponentsElement = REXML::XPath.first(inputFixElement, 'components')
    inputComponentsElement.each_element('component') do |inputComponentElement|
      name = inputComponentElement.attributes['name']
      next if(name == 'StandardHeader' || name == 'StandardTrailer')
      outputComponentElement = outputComponentsElement.add_element('component', {'name' => name})

      inputComponentElement.each_element(@fieldOrGroupOrComponentXPath) do |inputElement|
        processFieldOrGroupOrComponent(major, minor, inputFixElement, inputElement, outputComponentElement, :processComponent)
      end  
    end
  end

  def processFields(major, minor, inputFixElement, outputFixElement)
    outputFieldsElement = outputFixElement.add_element('fields')
    inputFieldsElement = REXML::XPath.first(inputFixElement, 'fields')
    inputFieldsElement.each_element('field') do |inputFieldElement|
      number = inputFieldElement.attributes['id']
      name = inputFieldElement.attributes['name']
      type = inputFieldElement.attributes['type']
      name = toFieldName(name, lambda {type})
      outputFieldElement = outputFieldsElement.add_element('field', {'number' => number, 'name' => name, 'type' => type.upcase})

      isBool = false;
      if(inputFieldElement.elements.size == 2)
        value1 = inputFieldElement.elements[1].attributes['value']
        value2 = inputFieldElement.elements[2].attributes['value']
        isBool = (value1 == 'N' || value1 == 'Y') && (value2 == 'N' || value2 == 'Y')        
      end

      inputFieldElement.each_element('enum') do |inputEnumElement|
        enum = inputEnumElement.attributes['value']
        description = inputEnumElement.attributes['symbolicName'].camel_to_snake_case.upcase
        
        if(isBool)
          description = enum == 'Y' ? 'YES' : 'NO'
        end
        
        outputValueElement = outputFieldElement.add_element('value', {'enum' => enum, 'description' => description})
      end
    end    
  end

  def processField(major, minor, inputFixElement, inputElement, outputElement)
    name = inputElement.attributes['name']
    id = inputElement.attributes['id']
    name = toFieldName(name, lambda {REXML::XPath.first(inputFixElement, "fields/field[@id = #{id}]").attributes['type']})
    required = inputElement.attributes['required'] == '1' ? 'Y' : 'N'
    outputElement.add_element('field', {'name' => name, 'required' => required})
  end

  def processGroup(major, minor, inputFixElement, inputElement, outputElement)
    id = inputElement.attributes['id']
    name = REXML::XPath.first(inputFixElement, "fields/field[@id = #{id}]").attributes['name']
    required = inputElement.attributes['required'] == '1' ? 'Y' : 'N'
    outputGroupElement = outputElement.add_element('group', {'name' => name, 'required' => required})

    inputElement.each_element(@fieldOrGroupOrComponentXPath) do |inputFieldElement|
      processFieldOrGroupOrComponent(major, minor, inputFixElement, inputFieldElement, outputGroupElement, :processComponent)
    end
  end

  def processComponent(major, minor, inputFixElement, inputElement, outputElement)
    name = inputElement.attributes['name']
    return if(name == 'StandardHeader' || name == 'StandardTrailer')
    required = inputElement.attributes['required'] == '1' ? 'Y' : 'N'
    outputElement.add_element('component', {'name' => name, 'required' => required})
  end

  def inlineComponent(major, minor, inputFixElement, inputElement, outputElement)
    name = inputElement.attributes['name']
    return if(name == 'StandardHeader' || name == 'StandardTrailer')
    required = inputElement.attributes['required'] == '1' ? 'Y' : 'N'
    inputComponentElement = REXML::XPath.first(inputFixElement, "components/component[@name = '#{name}']")
    inputComponentElement.each_element(@fieldOrGroupOrComponentXPath) do |inputFieldElement|
      processFieldOrGroupOrComponent(major, minor, inputFixElement, inputFieldElement, outputElement, :processComponent)
    end    
  end

  def processFieldOrGroupOrComponent(major, minor, inputFixElement, inputElement, outputElement, componentHandler)
    elementName = inputElement.name

    if(elementName == 'fieldRef')
      processField(major, minor, inputFixElement, inputElement, outputElement)
    elsif(elementName == 'repeatingGroup')
      processGroup(major, minor, inputFixElement, inputElement, outputElement)
    elsif(elementName == 'componentRef')      
      method(componentHandler).call(major, minor, inputFixElement, inputElement, outputElement)
    end
  end

  def toFieldName(name, getType)
    return name == "HaltReason" ? "#{name}#{getType.call.capitalize}" : name
  end

  def toMessageName(name)
    return "NewOrderSingle" if name == "OrderSingle"
    return "NewOrderList" if name == "OrderList"
    return name
  end

end

DataDictionary.new()