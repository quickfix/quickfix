xsltproc -o ../src/C++/FieldNumbers.h FieldNumbers.xsl FIX43.xml 
xsltproc -o ../src/C++/Fields.h Fields.xsl FIX43.xml 
xsltproc -o ../src/C++/Values.h Values.xsl FIX43.xml 
xsltproc -o ../src/C++/fix40/MessageCracker.h MessageCracker.xsl FIX40.xml 
xsltproc -o ../src/C++/fix41/MessageCracker.h MessageCracker.xsl FIX41.xml 
xsltproc -o ../src/C++/fix42/MessageCracker.h MessageCracker.xsl FIX42.xml 
xsltproc -o ../src/C++/fix43/MessageCracker.h MessageCracker.xsl FIX43.xml 
ruby Generator.rb

