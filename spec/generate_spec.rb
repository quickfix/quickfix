# -*- coding: utf-8 -*-
require "rexml/document"

class OrderedAttributes < REXML::Formatters::Pretty
    def write_element(elm, out)
        att = elm.attributes

        class <<att
            alias _each_attribute each_attribute

            def each_attribute(&b)
                order = []                
                to_enum(:_each_attribute).each {|x| order.push(x.name)}
                to_enum(:_each_attribute).sort_by {|x| order.find_index(x)}.each(&b)
            end
        end

        super(elm, out)
    end
end

class DataDictionary
  def initialize( major, minor, sp )
    filesp = ""
    
    if( sp != 0 )
      filesp = "SP" + sp.to_s
    end
    
    filename = "FIX#{major}#{minor}#{filesp}.xml"
    @f = File.new( filename, File::CREAT|File::TRUNC|File::RDWR )
    @major = major
    @minor = minor
    @sp = sp

    directory = "FIX.#{major}.#{minor}"
    if( sp != 0 )
      directory = directory + "SP#{sp}"
    end
    directory += "/Base"

    @fieldsDoc = REXML::Document.new( File.new( "#{directory}/Fields.xml" ) )
    @enumsDoc = REXML::Document.new( File.new( "#{directory}/Enums.xml" ) )
    @msgContentsDoc = REXML::Document.new( File.new("#{directory}/MsgContents.xml") )
    @msgTypeDoc = REXML::Document.new( File.new("#{directory}/Messages.xml") )
    @componentsDoc =  REXML::Document.new( File.new("#{directory}/Components.xml") )
    
    @specDoc = REXML::Document.new()
    
    @tagToField = Hash.new
    @tagToEnum = Hash.new
    @msgIdToMsgType = Hash.new
    @msgIdToMsgContents = Hash.new
    @msgIdToTags = Hash.new
    @componentNameToMsgId = Hash.new

    puts filename
    parseDictionary
    printDictionary
  end

  def tagShouldBeSkipped( tag )
    #return true if tag == 101
    #return true if tag == 261
    #return true if tag == 809
  end

  def tagShouldNotPrint( tag )
  end
  
  def enumsShouldBeSkipped( tag )
    return true if tagShouldBeSkipped( tag )
    return true if tag == 264
  end
  
  def addEnumsToTag( tag )
    enumArray = Array.new
    
    if( tag == 156 )
      enumArray.push( ["M","MULTIPLY"] )
      enumArray.push( ["D","DIVIDE"] )
    else
      return
    end
    
    @tagToEnum[ tag ] = enumArray
  end
  
  def toFieldName( fieldName, type )
    fieldName = fieldName.split(" (")[0].split("(")[0].strip.gsub(' ', '')
    fieldName.gsub!("UnitofMeasure", "UnitOfMeasure")
    fieldName = "#{fieldName}#{type.capitalize}" if fieldName == "HaltReason"
    return fieldName
  end
  
  def toMessageName( messageName )
    messageName = messageName.split("(")[0].delete("& -/’_")
    return "NewOrderSingle" if messageName == "OrderSingle"
    return "NewOrderList" if messageName == "OrderList"
    return "DontKnowTrade" if messageName == "DontKnowTradeDK"
    return messageName
  end
  
  def toDescription( description )
    return "" if description == nil
    old = description.clone
    description.upcase!
    description = description.split("(")[0]
    return "" if description == nil
    description.strip!
    description.gsub!('&quot;', '')
    description.gsub!('+ ', '+')
    description.gsub!(',', '_')
    description.gsub!(' ', '_')
    description.gsub!('-', '_')
    description.gsub!('–', '')
    description.gsub!('/', '_')
    description.gsub!('+', ' PLUS ')
    description.gsub!("'", '')
    description.gsub!("’", '')
    description.gsub!("‘", '')
    description.gsub!("&", '')
    description.gsub!('<', '')
    description.gsub!('>', '')
    description.gsub!('[', '')
    description.gsub!(']', '')
    description.gsub!('=', '')
    description.gsub!('"', '')
    description.gsub!('.', '')
    description.gsub!(':', '')
    description.gsub!(';', '')
    description.gsub!('%', '')
    description.gsub!('*', '')
    description.gsub!('_', ' ')
    description.strip!
    description.gsub!(' ', '_')
    description = description.split("___")[0]
    description.squeeze!("_") if description != nil
    description.gsub!('NOT_ASSIGNED_', '') if description != nil
    return "FULL_REFRESH" if description == "FULL_REFERSH"
    return "INCREMENTAL_REFRESH" if description == "INCREMENTAL_REFRES"
    return description
  end

  def toType( type )
    type = type.gsub('-', '')
    return "NUMINGROUP" if type == "NUMINGRP"
    return "LOCALMKTDATE" if type == "LOCALMMKTDATE"
    return "QTY" if type == "QUANTITY"
    return type
  end
  
  def parseFields
    @fieldsDoc.elements["Fields"].elements.each("Field") { |fieldsElement|
      tag = fieldsElement.elements["Tag"].text.to_i
      type = fieldsElement.elements["Type"].text
      next if type == nil
      type.upcase!
      
      next if tagShouldBeSkipped( tag )
      addEnumsToTag( tag )

      fieldHash = Hash.new
      fieldHash[ "type" ] = toType( type )
      fieldName = toFieldName(fieldsElement.elements["Name"].text, type)
      fieldHash[ "fieldName" ] = fieldName
      
      @tagToField[ tag ] = fieldHash
    }
  end

  def parseEnums
    enums = Hash.new
    @enumsDoc.elements["Enums"].elements.each("Enum") { |enumsElement|
      tag = enumsElement.elements["Tag"].text.to_i
      next if enumsShouldBeSkipped( tag )
      
      enum = enumsElement.elements["Value"].text
      next if enum.upcase == "(NOT SPECIFIED)"
      
      description = toDescription(enumsElement.elements["Description"].text)
      description = toDescription(enum) if description == nil
      next if description == nil
      
      if( tag != 206 )
        if( !enums.has_key?(tag) )
          enums[tag] = Array.new
        end
        
        enumArray = enums[tag]
        enumArray.push( [enum,description] )
        @tagToEnum[ tag ] = enumArray
      end
    }
  end

  def parseMsgType
    @msgTypeDoc.elements["Messages"].elements.each("Message") { |msgTypeElement|
      msgId = msgTypeElement.elements["ComponentID"].text.to_i
      msgType = msgTypeElement.elements["MsgType"].text
      messageName = toMessageName(msgTypeElement.elements["Name"].text)
      componentID = msgTypeElement.elements["ComponentID"].text
      category = msgTypeElement.elements["CategoryID"].text
      
      category = category == "Session" ? "admin" : "app"
      
      msgTypeHash = Hash.new
      msgTypeHash[ "msgtype" ] = msgType
      msgTypeHash[ "name" ] = messageName
      msgTypeHash[ "msgcat" ] = category
      @msgIdToMsgType[ msgId ] = msgTypeHash
    }
  end

  def parseMsgContents
    @msgContentsDoc.elements["MsgContents"].elements.each("MsgContent") { |msgContentsElement|
      tagsInMsg = []
      msgId = msgContentsElement.elements["ComponentID"].text.to_i
      tagText = msgContentsElement.elements["TagText"].text
      next if tagText == "StandardHeader"
      next if tagText == "StandardTrailer"
      tag = tagText.to_i
      indent = msgContentsElement.elements["Indent"].text.to_i
      required = msgContentsElement.elements["Reqd"].text.to_i == 1 ? "Y" : "N"
      position = msgContentsElement.elements["Position"].text.to_i
      
      if( tag == 1017 && msgId != 1005 )
        next
      end

      if( !@msgIdToMsgContents.has_key?(msgId) )
        @msgIdToTags[ msgId ] = Hash.new
        @msgIdToMsgContents[msgId] = Array.new
      end
      
      msgContentsArray = @msgIdToMsgContents[msgId]
      
      if( tag == 0 )
        msgContentsArray.push( [tagText, tagText, indent, required] )
        @msgIdToMsgContents[ msgId ] = msgContentsArray
        next
      end

      next if !@tagToField.has_key?(tag)
      name = @tagToField[ tag ]["fieldName"]

      if( !@msgIdToTags[ msgId ].has_key?(tag) )
        @msgIdToTags[ msgId ][ tag ] = tag
        msgContentsArray.push( [tag,name,indent,required] )
      end

      @msgIdToMsgContents[ msgId ] = msgContentsArray
    }
  end
  
  def parseComponents
    @componentsDoc.elements["Components"].elements.each("Component") { |componentsElement|
      msgId = componentsElement.elements["ComponentID"].text.to_i
      name = componentsElement.elements["Name"].text
      @componentNameToMsgId[ name ] = msgId
    }	
  end
  
  def parseDictionary
    parseFields
    parseEnums
    parseMsgType
    parseMsgContents
    parseComponents
  end
  
  def printVersion
    return @specDoc.add_element( "fix", { "type" => "FIX", "major" => @major.to_s, "minor" => @minor.to_s, "servicepack" => @sp.to_s } )
  end
  
  def printFields
    @fieldsElement = @fixElement.add_element( "fields" )
    @tagToField.sort.each { |tag, fieldHash|
      next if fieldHash == nil
      next if tagShouldNotPrint( tag )
      type = fieldHash[ "type" ]
      fieldName = fieldHash[ "fieldName" ]
      fieldElement = @fieldsElement.add_element( "field", { "number" => tag.to_s, "name" => fieldName, "type" => type } )
      printEnums( fieldElement, tag )
    }
  end

  def printEnums( fieldElement, tag )
    return if !@tagToEnum.has_key?( tag )
    
    enumArray = @tagToEnum[ tag ]
    
    isBool = false
    if( enumArray.size == 2 )
      isBool = enumArray[0][0] == "Y" || enumArray[0][0] == "N"
      isBool = enumArray[1][0] == "Y" || enumArray[1][0] == "N"
    end
    
    descriptions = Hash.new
    enumArray.each_index { |index|
      description = enumArray[index][1]
      if( !descriptions.has_key?(description) )
        descriptions[description] = 1
      else
        descriptions[description] = descriptions[description] + 1
      end
    }
    
    enumArray.each_index { |index|
      enum = enumArray[index][0]
      description = enumArray[index][1]
      
      if( descriptions[description] > 1 )
        description = description + "_" + enum
      end
      next if description == nil
      description = "YES" if isBool && enum == "Y"
      description = "NO" if isBool && enum == "N"
      fieldElement.add_element( "value", { "enum" => enum, "description" => description } )
    }
  end
  
  def printComponents
    componentsElement = @fixElement.add_element( "components" )
    @componentNameToMsgId.each { |name, msgId|
      next if name == "StandardHeader"
      next if name == "StandardTrailer"
      msgContentsArray = @msgIdToMsgContents[msgId]
      componentElement = componentsElement.add_element( "component", { "name" => name } )
      printMsgContents( msgContentsArray, componentElement ) 
    }
  end

  def printMessages
    messagesElement = @fixElement.add_element( "messages" )
    @msgIdToMsgType.sort.each { |msgId, msgTypeHash|
      next if msgTypeHash == nil
      name = msgTypeHash[ "name" ]
      msgtype = msgTypeHash[ "msgtype" ]
      msgcat = msgTypeHash[ "msgcat" ]
      
      if( @major >= 5 && msgcat == "admin" )
        next
      end
      
      msgContentsArray = @msgIdToMsgContents[msgId]
      
      messageElement = messagesElement.add_element( "message", { "name" => name, "msgtype" => msgtype, "msgcat" => msgcat } )

      next if msgContentsArray == nil
      printMsgContents( msgContentsArray, messageElement )	
    }
  end
  
  def printMsgContents( msgContentsArray, messageElement )
    queue = Array.new
    queue.push( messageElement )
    nextIndent = 0
    lastIndent = 0
    messageName = messageElement.attributes["name"]
    msgContentsArray.each_index { |index|
      tag = msgContentsArray[index][0]
      name = msgContentsArray[index][1]
      indent = msgContentsArray[index][2]
      required = msgContentsArray[index][3]
      nextIndent = msgContentsArray[index+1][2] if msgContentsArray[index+1] != nil

      if(@major == 5 && messageName == "InstrumentLeg" && name == "LegPrice")
        next
      end

      if( indent < lastIndent )
        queue.pop
      end
      
      if( nextIndent > indent )
        groupElement = queue.last.add_element( "group", "name" => name, "required" => required )
        queue.push( groupElement )
        lastIndent = indent
        next
      end
      
      if(tag.class == String)
        componentElement = queue.last.add_element( "component", "name" => name, "required" => required )
      else
        fieldElement = queue.last.add_element( "field", "name" => name, "required" => required )
      end
      lastIndent = indent
    }
  end
  
  def printHeader
    headerElement = @fixElement.add_element( "header" )
    return if @major >= 5
    msgContentsArray = @msgIdToMsgContents[@componentNameToMsgId["StandardHeader"]]
    printMsgContents( msgContentsArray, headerElement ) 
  end
  
  def printTrailer
    trailerElement = @fixElement.add_element( "trailer" )
    return if @major >= 5
    msgContentsArray = @msgIdToMsgContents[@componentNameToMsgId["StandardTrailer"]]
    printMsgContents( msgContentsArray, trailerElement ) 
  end
  
  def printDictionary
    @fixElement = printVersion
    printHeader
    printMessages
    printTrailer
    printComponents
    printFields

    fmt = OrderedAttributes.new(indentation=1, true)
    fmt.write(@specDoc, @f)
    #@specDoc.write( @f, 1, false, true )
  end
end

(0..4).each { |i| DataDictionary.new( 4, i, 0 ) }
(0..2).each { |i| DataDictionary.new( 5, 0, i ) }

