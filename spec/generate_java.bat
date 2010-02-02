xsltproc -o ..\src\java\src\quickfix\fix40\MessageFactory.java java_MessageFactory.xsl FIX40.xml
xsltproc -o ..\src\java\src\quickfix\fix41\MessageFactory.java java_MessageFactory.xsl FIX41.xml
xsltproc -o ..\src\java\src\quickfix\fix42\MessageFactory.java java_MessageFactory.xsl FIX42.xml
xsltproc -o ..\src\java\src\quickfix\fix43\MessageFactory.java java_MessageFactory.xsl FIX43.xml
xsltproc -o ..\src\java\src\quickfix\fix44\MessageFactory.java java_MessageFactory.xsl FIX44.xml
xsltproc -o ..\src\java\src\quickfix\fix50\MessageFactory.java java_MessageFactory.xsl FIX50.xml
xsltproc -o ..\src\java\src\quickfix\fixt11\MessageFactory.java java_MessageFactory.xsl FIXT11.xml
xsltproc -o ..\src\java\src\quickfix\fix40\MessageCracker.java java_MessageCracker.xsl FIX40.xml
xsltproc -o ..\src\java\src\quickfix\fix41\MessageCracker.java java_MessageCracker.xsl FIX41.xml
xsltproc -o ..\src\java\src\quickfix\fix42\MessageCracker.java java_MessageCracker.xsl FIX42.xml
xsltproc -o ..\src\java\src\quickfix\fix43\MessageCracker.java java_MessageCracker.xsl FIX43.xml
xsltproc -o ..\src\java\src\quickfix\fix44\MessageCracker.java java_MessageCracker.xsl FIX44.xml
xsltproc -o ..\src\java\src\quickfix\fix50\MessageCracker.java java_MessageCracker.xsl FIX50.xml
xsltproc -o ..\src\java\src\quickfix\fixt11\MessageCracker.java java_MessageCracker.xsl FIXT11.xml
xsltproc -o generate_java_fields40.bat generate_java_fields.xsl FIX40.xml
xsltproc -o generate_java_fields41.bat generate_java_fields.xsl FIX41.xml
xsltproc -o generate_java_fields42.bat generate_java_fields.xsl FIX42.xml
xsltproc -o generate_java_fields43.bat generate_java_fields.xsl FIX43.xml
xsltproc -o generate_java_fields44.bat generate_java_fields.xsl FIX44.xml
xsltproc -o generate_java_fields50.bat generate_java_fields.xsl FIX50.xml
xsltproc -o generate_java_fieldst11.bat generate_java_fields.xsl FIXT11.xml
call generate_java_fields40.bat
call generate_java_fields41.bat
call generate_java_fields42.bat
call generate_java_fields43.bat
call generate_java_fields44.bat
call generate_java_fields50.bat
call generate_java_fieldst11.bat