require 'Processor'
require "GeneratorCPP"
require "GeneratorNET"
require "GeneratorPython"
require "GeneratorRuby"

def generateVersion( type, major, minor, sp )
  dir = "../src"
  xml = "#{type}#{major}#{minor}.xml"
  if( sp != "" )
    xml = "#{type}#{major}#{minor}_#{sp}.xml"
  end

  Processor.new(xml, "#{dir}/C++", GeneratorCPP.new(type, major.to_s, minor.to_s, sp, "#{dir}/C++"))
  Processor.new(xml, "#{dir}/.NET", GeneratorNET.new(type, major.to_s, minor.to_s, sp, "#{dir}/.NET"))
  Processor.new(xml, "#{dir}/python", GeneratorPython.new(type, major.to_s, minor.to_s, sp, "#{dir}/python"))
  Processor.new(xml, "#{dir}/ruby", GeneratorRuby.new(type, major.to_s, minor.to_s, sp, "#{dir}/ruby"))
end

#generateVersion( "FIXT", 1, 1, "" )
#(0..4).each { |i| generateVersion( "FIX", 4, i, "" ) }
#generateVersion( "FIX", 5, 0, "" )
#generateVersion( "FIX", 5, 0, "SP1" )
generateVersion( "FIX", 5, 0, "SP2" )