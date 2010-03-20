require "rexml/document"

class DataDictionary
	def initialize( major, minor, sp )
	    	filesp = ""
	    	if( sp == nil )
		    sp = ""
		else
		    filesp = "_" + sp
		end

		@f = File.new( "FIX#{major}#{minor}#{filesp}.xml", File::CREAT|File::TRUNC|File::RDWR )
		@major = major
		@minor = minor

		directory = "FIX.#{major}.#{minor}#{sp}"
		@fieldsDoc = REXML::Document.new( File.new( "#{directory}/Fields.xml" ) )
		@enumsDoc = REXML::Document.new( File.new( "#{directory}/Enums.xml" ) )
		@msgContentsDoc = REXML::Document.new( File.new("#{directory}/MsgContents.xml") )
		@msgTypeDoc = REXML::Document.new( File.new("#{directory}/MsgType.xml") )
		@componentsDoc =  REXML::Document.new( File.new("#{directory}/Components.xml") )

		@specDoc = REXML::Document.new()

		@tagToField = Hash.new
		@tagToEnum = Hash.new
		@msgIdToMsgType = Hash.new
		@msgIdToMsgContents = Hash.new
		@componentNameToMsgId = Hash.new

		parseDictionary
		printDictionary
	end

	def tagShouldBeSkipped( tag )
		return true if tag == 101
		return true if tag == 261
		return true if tag == 809
	end

	def tagShouldNotPrint( tag )
		if( @major >= 5 )
		    return true if tag == 7
		    return true if tag == 8
		    return true if tag == 9
		    return true if tag == 10
		    return true if tag == 16
		    return true if tag == 34
		    return true if tag == 35
		    return true if tag == 36
		    return true if tag == 43
		    return true if tag == 49
		    return true if tag == 50
		    return true if tag == 52
		    return true if tag == 56
		    return true if tag == 57
		    return true if tag == 89
		    return true if tag == 90
		    return true if tag == 91
		    return true if tag == 93
		    return true if tag == 97
		    return true if tag == 98
		    return true if tag == 108
		    return true if tag == 112
		    return true if tag == 115
		    return true if tag == 116
		    return true if tag == 122
		    return true if tag == 123
		    return true if tag == 128
		    return true if tag == 129
		    return true if tag == 141
		    return true if tag == 142
		    return true if tag == 143
		    return true if tag == 144
		    return true if tag == 145
		    return true if tag == 212
		    return true if tag == 213
		    return true if tag == 347
		    return true if tag == 369
		    return true if tag == 371
		    return true if tag == 373
		    return true if tag == 383
		    return true if tag == 384
		    return true if tag == 385
		    return true if tag == 464
		    return true if tag == 627
		    return true if tag == 628
		    return true if tag == 629
		    return true if tag == 630
		    return true if tag == 789
		    return true if tag == 1128
		    return true if tag == 1129
		    return true if tag == 1130
		    return true if tag == 1131
		    return true if tag == 1137
		end
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

	def toFieldName( fieldName )
		fieldName = fieldName.split(" (")[0].split("(")[0].strip.gsub(' ', '')
		fieldName.gsub("UnitofMeasure", "UnitOfMeasure")
	end

	def toMessageName( messageName )
		messageName = messageName.split("(")[0].delete("& -/’")
		return "NewOrderSingle" if messageName == "OrderSingle"
		return "NewOrderList" if messageName == "OrderList"
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
		description.gsub!('/', '_')
		description.gsub!('+', ' PLUS ')
		description.gsub!("'", '')
		description.gsub!("&", '')
		description.gsub!('<', '')
		description.gsub!('>', '')
		description.gsub!('[', '')
		description.gsub!(']', '')
		description.gsub!('=', '')
		description.gsub!('"', '')
		description.gsub!('.', '')
		description.gsub!(':', '')
		description.gsub!('%', '')
		description.gsub!('*', '')
		description.gsub!('_', ' ')
		description.strip!
		description.gsub!(' ', '_')
		description = description.split("___")[0]
		description.squeeze!("_") if description != nil
		return "FULL_REFRESH" if description == "FULL_REFERSH"
		return "INCREMENTAL_REFRESH" if description == "INCREMENTAL_REFRES"
		return description
	end

	def toType( type )
		type = type.gsub('-', '')
		return "NUMINGROUP" if type == "NUMINGRP"
		return type
	end

	def parseFields
		@fieldsDoc.elements["dataroot"].elements.each("Fields") { |fieldsElement|
			tag = fieldsElement.elements["Tag"].text.to_i
			next if tagShouldBeSkipped( tag )
			addEnumsToTag( tag )

			fieldName = toFieldName(fieldsElement.elements["FieldName"].text)
			type = fieldsElement.elements["Type"].text
			next if type == nil
			type.upcase!

			fieldHash = Hash.new
			fieldHash[ "type" ] = toType( type )
			fieldHash[ "fieldName" ] = fieldName

			@tagToField[ tag ] = fieldHash
		}
	end

	def parseEnums
		enums = Hash.new
		@enumsDoc.elements["dataroot"].elements.each("Enums") { |enumsElement|
			tag = enumsElement.elements["Tag"].text.to_i
			next if enumsShouldBeSkipped( tag )

			enum = enumsElement.elements["Enum"].text
			next if enum.upcase == "(NOT SPECIFIED)"
			description = toDescription(enumsElement.elements["Description"].text)
			description = "NOT_ASSIGNED" if description == nil

			if( !enums.has_key?(tag) )
			    enums[tag] = Array.new
			end

			enumArray = enums[tag]

			enumArray.push( [enum,description] )
			@tagToEnum[ tag ] = enumArray
		}
	end

	def parseMsgType
		@msgTypeDoc.elements["dataroot"].elements.each("MsgType") { |msgTypeElement|
			msgId = msgTypeElement.elements["MsgID"].text.to_i
			msgType = msgTypeElement.elements["MsgType"].text
			messageName = toMessageName(msgTypeElement.elements["MessageName"].text)
			componentType = msgTypeElement.elements["ComponentType"].text
			category = msgTypeElement.elements["Category"].text

			category = category == "Session" ? "admin" : "app"

			msgTypeHash = Hash.new
 			msgTypeHash[ "msgtype" ] = msgType
			msgTypeHash[ "name" ] = messageName
			msgTypeHash[ "msgcat" ] = category
			@msgIdToMsgType[ msgId ] = msgTypeHash
		}
	end

	def parseMsgContents
		@msgContentsDoc.elements["dataroot"].elements.each("MsgContents") { |msgContentsElement|
			msgId = msgContentsElement.elements["MsgID"].text.to_i
			tagText = msgContentsElement.elements["TagText"].text
			next if tagText == "StandardHeader"
			next if tagText == "StandardTrailer"
			tag = tagText.to_i
			indent = msgContentsElement.elements["Indent"].text.to_i
			required = msgContentsElement.elements["Reqd"].text.to_i == 1 ? "Y" : "N"
			position = msgContentsElement.elements["Position"].text.to_i

			if( !@msgIdToMsgContents.has_key?(msgId) )
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

			msgContentsArray.push( [tag,name,indent,required] )
			@msgIdToMsgContents[ msgId ] = msgContentsArray
		}
	end

	def parseComponents
		@componentsDoc.elements["dataroot"].elements.each("Components") { |componentsElement|
			msgId = componentsElement.elements["MsgID"].text.to_i
			name = componentsElement.elements["ComponentName"].text
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
		return @specDoc.add_element( "fix", { "type" => "FIX", "major" => @major.to_s, "minor" => @minor.to_s } )
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
			next if msgContentsArray == nil

			messageElement = messagesElement.add_element( "message", { "name" => name, "msgtype" => msgtype, "msgcat" => msgcat } )

			printMsgContents( msgContentsArray, messageElement )	
		}
	end

	def printMsgContents( msgContentsArray, messageElement )
		queue = Array.new
		queue.push( messageElement )
		nextIndent = 0
		lastIndent = 0

		msgContentsArray.each_index { |index|
			tag = msgContentsArray[index][0]
			name = msgContentsArray[index][1]
			indent = msgContentsArray[index][2]
			required = msgContentsArray[index][3]
			nextIndent = msgContentsArray[index+1][2] if msgContentsArray[index+1] != nil

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
		@specDoc.write( @f, 1, false, true )
	end
end

DataDictionary.new( 4, 0, nil )
DataDictionary.new( 4, 1, nil )
DataDictionary.new( 4, 2, nil )
DataDictionary.new( 4, 3, nil )
DataDictionary.new( 4, 4, nil )
DataDictionary.new( 5, 0, nil )
DataDictionary.new( 5, 0, "SP1" )
DataDictionary.new( 5, 0, "SP2" )
