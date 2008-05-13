require "rexml/document"

class DataDictionary
	def initialize( major, minor )
		@major = major
		@minor = minor
		@tabs = 0

		directory = "FIX.#{major}.#{minor}"
		@fieldsDoc = REXML::Document.new( File.new( "#{directory}/Fields.xml" ) )
		@enumsDoc = REXML::Document.new( File.new( "#{directory}/Enums.xml" ) )

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

		@enumsDoc.elements["dataroot"].elements.each("Enums") { |enumsElement|
			tag = fieldElement.elements["Tag"].text.to_i
			next if tagShouldBeSkipped( tag )

			enum = fieldsElement.elements["Enum"]
			description = fieldElement.elements["Description"]

			enumHash = Hash.new
			enumHash[ "enum" ] = enum
			enumHash[ "description" ] = description
			enumHash[ tag ] = enumHash
		}
	end

	def parseDictionary
		parseFields
	end

	def printVersion
		outs( '<fix major="4" minor="0">' )
	end

	def printFields
		tabUp
		outs( '<fields>' )

		tabUp
		@tagToField.sort.each { |tag, fieldHash|
			type = fieldHash[ "type" ]
			fieldName = fieldHash[ "fieldName" ]
			outs( "<field number='#{tag}' name='#{fieldName}' type='#{type}'>" )
		}
	end

	def printEnums( tag )
		tabUp
			enumHash = @tagToEnum[ tag ]
			@tagToEnum.sort.each { |tag, enumHash|
				enum = enumHash[ "enum" ]
				description = descriptionHash[ "description" ]
				outs( "<value enum='#{enum}' description='#{description}'/>" )
			}
		tabDown
	end

	def printDictionary
		printVersion
		printFields
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