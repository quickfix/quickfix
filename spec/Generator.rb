require 'Processor'
require "GeneratorCPP"
require "GeneratorJava"

#processor = Processor.new("FIX40.xml", "../src/C++", GeneratorCPP.new("4", "0", "../src/C++"))
#processor = Processor.new("FIX41.xml", "../src/C++", GeneratorCPP.new("4", "1", "../src/C++"))
#processor = Processor.new("FIX42.xml", "../src/C++", GeneratorCPP.new("4", "2", "../src/C++"))
#processor = Processor.new("FIX43.xml", "../src/C++", GeneratorCPP.new("4", "3", "../src/C++"))
#processor = Processor.new("FIX44.xml", "../src/C++", GeneratorCPP.new("4", "4", "../src/C++"))
processor = Processor.new("FIX40.xml", "../src/java", 
			  GeneratorJava.new("4", "0", "../src/java"))
processor = Processor.new("FIX41.xml", "../src/java", 
			  GeneratorJava.new("4", "1", "../src/java"))
processor = Processor.new("FIX42.xml", "../src/java", 
			  GeneratorJava.new("4", "2", "../src/java"))
processor = Processor.new("FIX43.xml", "../src/java", 
			  GeneratorJava.new("4", "3", "../src/java"))
processor = Processor.new("FIX44.xml", "../src/java", 
			  GeneratorJava.new("4", "4", "../src/java"))
