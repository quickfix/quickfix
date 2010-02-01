require 'Processor'
require "GeneratorCPP"
require "GeneratorJava"
require "GeneratorNET"
require "GeneratorPython"
require "GeneratorRuby"

def generateVersion( type, major, minor )
  dir = "../src"
  xml = "#{type}#{major}#{minor}.xml"
  #Processor.new(xml, "#{dir}/C++", GeneratorCPP.new(type, major.to_s, minor.to_s, "#{dir}/C++"))
  Processor.new(xml, "#{dir}/java", GeneratorJava.new(type, major.to_s, minor.to_s, "#{dir}/java"))
  #Processor.new(xml, "#{dir}/.NET", GeneratorNET.new(type, major.to_s, minor.to_s, "#{dir}/.NET"))
  #Processor.new(xml, "#{dir}/python", GeneratorPython.new(type, major.to_s, minor.to_s, "#{dir}/python"))
  #Processor.new(xml, "#{dir}/ruby", GeneratorRuby.new(type, major.to_s, minor.to_s, "#{dir}/ruby"))
end

(0..4).each { |i| generateVersion( "FIX", 4, i ) }
generateVersion( "FIX", 5, 0 )
generateVersion( "FIXT", 1, 1 )