msxsl FIX40.xml java_MessageFactory.xsl -o ..\src\java\src\org\quickfix\fix40\MessageFactory.java
msxsl FIX41.xml java_MessageFactory.xsl -o ..\src\java\src\org\quickfix\fix41\MessageFactory.java
msxsl FIX42.xml java_MessageFactory.xsl -o ..\src\java\src\org\quickfix\fix42\MessageFactory.java
msxsl FIX43.xml java_MessageFactory.xsl -o ..\src\java\src\org\quickfix\fix43\MessageFactory.java
msxsl FIX40.xml java_Message.xsl -o ..\src\java\src\org\quickfix\fix40\Message.java
msxsl FIX41.xml java_Message.xsl -o ..\src\java\src\org\quickfix\fix41\Message.java
msxsl FIX42.xml java_Message.xsl -o ..\src\java\src\org\quickfix\fix42\Message.java
msxsl FIX43.xml java_Message.xsl -o ..\src\java\src\org\quickfix\fix43\Message.java
msxsl FIX40.xml java_MessageCracker.xsl -o ..\src\java\src\org\quickfix\fix40\MessageCracker.java
msxsl FIX41.xml java_MessageCracker.xsl -o ..\src\java\src\org\quickfix\fix41\MessageCracker.java
msxsl FIX42.xml java_MessageCracker.xsl -o ..\src\java\src\org\quickfix\fix42\MessageCracker.java
msxsl FIX43.xml java_MessageCracker.xsl -o ..\src\java\src\org\quickfix\fix43\MessageCracker.java
msxsl FIX43.xml generate_java_fields.xsl -o generate_java_fields.bat
call generate_java_fields.bat
msxsl FIX40.xml generate_java_messages.xsl -o generate_java_messages40.bat
msxsl FIX41.xml generate_java_messages.xsl -o generate_java_messages41.bat
msxsl FIX42.xml generate_java_messages.xsl -o generate_java_messages42.bat
msxsl FIX43.xml generate_java_messages.xsl -o generate_java_messages43.bat
call generate_java_messages40.bat
call generate_java_messages41.bat
call generate_java_messages42.bat
call generate_java_messages43.bat