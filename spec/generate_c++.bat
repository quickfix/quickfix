msxsl FIX44.xml FieldNumbers.xsl -o ..\src\C++\FieldNumbers.h
msxsl FIX44.xml Fields.xsl -o ..\src\C++\Fields.h
msxsl FIX44.xml Values.xsl -o ..\src\C++\Values.h
msxsl FIX40.xml MessageCracker.xsl -o ..\src\C++\FIX40_MessageCracker.h
msxsl FIX41.xml MessageCracker.xsl -o ..\src\C++\FIX41_MessageCracker.h
msxsl FIX42.xml MessageCracker.xsl -o ..\src\C++\FIX42_MessageCracker.h
msxsl FIX43.xml MessageCracker.xsl -o ..\src\C++\FIX43_MessageCracker.h
msxsl FIX44.xml MessageCracker.xsl -o ..\src\C++\FIX43_MessageCracker.h
ruby Generator.rb