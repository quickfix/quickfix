require 'Processor'
require "GeneratorCPP"
require "GeneratorJava"
require "GeneratorNET"
require "GeneratorPython"
require "GeneratorRuby"

def generateVersion( major, minor )
  dir = "../src"
  xml = "FIX#{major}#{minor}.xml"
  Processor.new(xml, "#{dir}/C++", GeneratorCPP.new(major.to_s, minor.to_s, "#{dir}/C++"))
  Processor.new(xml, "#{dir}/java", GeneratorJava.new(major.to_s, minor.to_s, "#{dir}/java"))
  Processor.new(xml, "#{dir}/.NET", GeneratorNET.new(major.to_s, minor.to_s, "#{dir}/.NET"))
  Processor.new(xml, "#{dir}/python", GeneratorPython.new(major.to_s, minor.to_s, "#{dir}/python"))
  Processor.new(xml, "#{dir}/ruby", GeneratorRuby.new(major.to_s, minor.to_s, "#{dir}/ruby"))
end

(0..4).each { |i| generateVersion( 4, i ) }
generateVersion( 5, 0 )