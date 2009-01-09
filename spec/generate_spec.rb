require "rexml/document"

class DataDictionary
	def initialize( major, minor )
		@f = File.new( "FIX#{major}#{minor}.out.xml", File::CREAT|File::TRUNC|File::RDWR )
		@major = major
		@minor = minor

		directory = "FIX.#{major}.#{minor}"
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

		parseDictionary
		printDictionary
	end

	def tagShouldBeSkipped( tag )
		return true if tag == 101
		return true if tag == 261
		return true if tag == 809
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
		fieldName.split(" (")[0].split("(")[0].strip
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
		description.gsub!('+ ', '+')
		description.gsub!(',', '_')
		description.gsub!(' ', '_')
		description.gsub!('-', '_')
		description.gsub!('/', '_')
		description.gsub!('+', 'PLUS')
		description.gsub!("'", '')
		description.gsub!("&", '')
		description = description.split("___")[0]
		description.squeeze!("_") if description != nil
		return description
	end

	def toType( type )
		case type
			when "CHAR"
				return "STRING"
			else
				return type
		end
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
		enumArray = Array.new
		lastTag = 0

		@enumsDoc.elements["dataroot"].elements.each("Enums") { |enumsElement|
			tag = enumsElement.elements["Tag"].text.to_i
			next if enumsShouldBeSkipped( tag )

			enum = enumsElement.elements["Enum"].text
			next if enum.upcase == "(NOT SPECIFIED)"
			description = toDescription(enumsElement.elements["Description"].text)
			description = "NOT_ASSIGNED" if description == nil
			enumArray = Array.new if lastTag != tag

			enumArray.push( [enum,description] )
			@tagToEnum[ tag ] = enumArray

			lastTag = tag
		}
	end

	def parseMsgType
		@msgTypeDoc.elements["dataroot"].elements.each("MsgType") { |msgTypeElement|
			msgId = msgTypeElement.elements["MsgID"].text.to_i
			msgType = msgTypeElement.elements["MsgType"].text
			messageName = toMessageName(msgTypeElement.elements["MessageName"].text)
			componentType = msgTypeElement.elements["ComponentType"].text
			category = msgTypeElement.elements["Category"].text

#			next if messageName != "NewOrderList"

			category = category == "Session" ? "admin" : "app"

			msgTypeHash = Hash.new
 			msgTypeHash[ "msgtype" ] = msgType
			msgTypeHash[ "name" ] = messageName
			msgTypeHash[ "msgcat" ] = category
			@msgIdToMsgType[ msgId ] = msgTypeHash
		}
	end

	def parseMsgContents
		msgContentsArray = Array.new
		lastMsgId = 0

		@msgContentsDoc.elements["dataroot"].elements.each("MsgContents") { |msgContentsElement|
			tag = msgContentsElement.elements["TagText"].text.to_i
			next if tag == 0
			msgId = msgContentsElement.elements["MsgID"].text.to_i
			indent = msgContentsElement.elements["Indent"].text.to_i
			position = msgContentsElement.elements["Position"].text.to_i
			name = @tagToField[ tag ]["fieldName"]
			required = msgContentsElement.elements["Reqd"].text.to_i == 1 ? "Y" : "N"
			msgContentsArray = Array.new if lastMsgId != msgId

			msgContentsArray.push( [tag,name,indent,required] )
			@msgIdToMsgContents[ msgId ] = msgContentsArray

			lastMsgId = msgId
		}
	end

	def parseDictionary
		parseFields
		parseEnums
		parseMsgType
		parseMsgContents
	end

	def printVersion
		return @specDoc.add_element( "fix", { "major" => @major.to_s, "minor" => @minor.to_s } )
	end

	def printFields
		@fieldsElement = @fixElement.add_element( "fields" )
		@tagToField.sort.each { |tag, fieldHash|
			next if fieldHash == nil
			type = fieldHash[ "type" ]
			fieldName = fieldHash[ "fieldName" ]
			fieldElement = @fieldsElement.add_element( "field", { "field" => tag.to_s, "name" => fieldName, "type" => type } )
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

 		enumArray.each_index { |index|
			enum = enumArray[index][0]
			description = enumArray[index][1]
			next if description == nil
			description = "YES" if isBool && enum == "Y"
			description = "NO" if isBool && enum == "N"
			fieldElement.add_element( "value", { "enum" => enum, "description" => description } )
		}
	end

	def printMessages
		messagesElement = @fixElement.add_element( "messages" )
		@msgIdToMsgType.sort.each { |msgId, msgTypeHash|
			next if msgTypeHash == nil
			name = msgTypeHash[ "name" ]
			msgtype = msgTypeHash[ "msgtype" ]
			msgcat = msgTypeHash[ "msgcat" ]

			msgContentsArray = @msgIdToMsgContents[msgId]
			next if msgContentsArray == nil

			messageElement = messagesElement.add_element( "message", { "name" => name, "msgtype" => msgtype, "msgcat" => msgcat } )

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
					groupElement = queue.last.add_element( "group", "name" => name )
					queue.push( groupElement )
					lastIndent = indent
					next
				end

				fieldElement = queue.last.add_element( "field", "name" => name, "required" => required )
				lastIndent = indent
			}
		}
	end

	def printDictionary
		@fixElement = printVersion
		printMessages
		printFields
		@specDoc.write( @f, 1, false, true )
	end
end

DataDictionary.new( 4, 2 )
