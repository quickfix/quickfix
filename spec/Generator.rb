require 'Processor'
require "GeneratorCPP"
require "GeneratorJava"
require "GeneratorNET"
require "GeneratorPython"
require "GeneratorRuby"

def generateVersion( v )
  dir = "../src"
  Processor.new("FIX4#{v}.xml", "#{dir}/C++", GeneratorCPP.new("4", v.to_s, "#{dir}/C++"))
  Processor.new("FIX4#{v}.xml", "#{dir}/java", GeneratorJava.new("4", v.to_s, "#{dir}/java"))
  Processor.new("FIX4#{v}.xml", "#{dir}/.NET", GeneratorNET.new("4", v.to_s, "#{dir}/.NET"))
  Processor.new("FIX4#{v}.xml", "#{dir}/python", GeneratorPython.new("4", v.to_s, "#{dir}/python"))
  Processor.new("FIX4#{v}.xml", "#{dir}/ruby", GeneratorRuby.new("4", v.to_s, "#{dir}/ruby"))
end

(0..4).each { |i| generateVersion( i ) }