require 'Processor'
require "GeneratorCPP"
require "GeneratorNET"
require "GeneratorPython"
require "GeneratorRuby"

def generateVersion( type, major, minor, sp )
  dir = "../src"
  xml = "#{type}#{major}#{minor}.xml"
  if( sp != 0 )
    xml = "#{type}#{major}#{minor}_SP#{sp}.xml"
  end

  Processor.new(xml, "#{dir}/C++", GeneratorCPP.new(type, major.to_s, minor.to_s, sp.to_s, "#{dir}/C++"))
  Processor.new(xml, "#{dir}/.NET", GeneratorNET.new(type, major.to_s, minor.to_s, sp.to_s, "#{dir}/.NET"))
  Processor.new(xml, "#{dir}/python", GeneratorPython.new(type, major.to_s, minor.to_s, sp.to_s, "#{dir}/python"))
  Processor.new(xml, "#{dir}/ruby", GeneratorRuby.new(type, major.to_s, minor.to_s, sp.to_s, "#{dir}/ruby"))
end

generateVersion( "FIXT", 1, 1, 0 )
(0..4).each { |i| generateVersion( "FIX", 4, i, 0 ) }
generateVersion( "FIX", 5, 0, 0 )
generateVersion( "FIX", 5, 0, 1 )
generateVersion( "FIX", 5, 0, 2 )