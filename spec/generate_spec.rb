require "rexml/document"

class DataDictionary
	def initialize( major, minor )
		@major = major
		@minor = minor
		@tabs = 0

		directory = "FIX.#{major}.#{minor}"
		@fieldsDoc = REXML::Document.new( File.new( "#{directory}/Fields.xml" ) )
		@enumsDoc = REXML::Document.new( File.new( "#{directory}/Enums.xml" ) )

		@specDoc = REXML::Document.new()

		parseDictionary
		printDictionary
	end

	def tagShouldBeSkipped( tag )
		return true if tag == 101
		return true if tag == 261
		return true if tag == 809
	end

	def toFieldName( fieldName )
		fieldName.split(" (")[0].split("(")[0].strip
	end

	def toDescription( description )
		old = description.clone
		description.upcase!
		description = description.split("(")[0]
		description = description.split(",")[0]
		description.strip!
		description.gsub!('+ ', '+')
		description.gsub!(' ', '_')
		description.gsub!('-', '_')
		description.gsub!('/', '_')
		description.gsub!('+', 'PLUS')
		description = description.split("___")[0]
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
		@tagToField = Hash.new

		@fieldsDoc.elements["dataroot"].elements.each("Fields") { |fieldsElement|
			tag = fieldsElement.elements["Tag"].text.to_i
			next if tagShouldBeSkipped( tag )

			fieldName = toFieldName(fieldsElement.elements["FieldName"].text)
			type = fieldsElement.elements["Type"].text.upcase

			fieldHash = Hash.new
			fieldHash[ "type" ] = toType( type )
			fieldHash[ "fieldName" ] = fieldName
			@tagToField[ tag ] = fieldHash
		}
	end

	def parseEnums
		@tagToEnum = Hash.new
		enumHash = Hash.new
		lastTag = 0

		@enumsDoc.elements["dataroot"].elements.each("Enums") { |enumsElement|
			tag = enumsElement.elements["Tag"].text.to_i
			next if tagShouldBeSkipped( tag )

			enum = enumsElement.elements["Enum"]
			description = toDescription(enumsElement.elements["Description"].text)

			enumHash = Hash.new if lastTag != tag

			enumHash[ enum.text ] = description
			@tagToEnum[ tag ] = enumHash

			lastTag = tag
		}
	end

	def parseDictionary
		parseFields
		parseEnums
	end

	def printVersion
		return @specDoc.add_element( "fix", { "major" => @major.to_s, "minor" => @minor.to_s } )
	end

	def printFields
		tabUp
		outs( '<fields>' )

		tabUp
		@tagToField.sort.each { |tag, fieldHash|
			type = fieldHash[ "type" ]
			fieldName = fieldHash[ "fieldName" ]
			fieldElement = @fixElement.add_element( "field", { "field" => tag, "name" => fieldName, "type" => type } )
			printEnums( fieldElement, tag )
		}
	end

	def printEnums( fieldElement, tag )
		return if !@tagToEnum.has_key?( tag )

		tabUp
			enumHash = @tagToEnum[ tag ]
 			enumHash.sort.each { |enum, description|
				fieldElement.add_element( "value", { "enum" => enum, "description" => description } )
			}
		tabDown
	end

	def printDictionary
		@fixElement = printVersion
		printFields
		@specDoc.write( $stdout, 1, false, true )
	end

	def tabUp
		@tabs += 1
	end

	def tabDown
		@tabs -= 1
	end

	def outs( string )
		for i in 1..@tabs 
			print "  " if @tabs > 0
		end

		puts string
	end
end

DataDictionary.new( 4, 0 )
