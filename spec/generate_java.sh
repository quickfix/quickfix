xsltproc -o ../src/java/src/quickfix/fix40/MessageFactory.java java_MessageFactory.xsl FIX40.xml
xsltproc -o ../src/java/src/quickfix/fix41/MessageFactory.java java_MessageFactory.xsl FIX41.xml
xsltproc -o ../src/java/src/quickfix/fix42/MessageFactory.java java_MessageFactory.xsl FIX42.xml
xsltproc -o ../src/java/src/quickfix/fix43/MessageFactory.java java_MessageFactory.xsl FIX43.xml
xsltproc -o ../src/java/src/quickfix/fix44/MessageFactory.java java_MessageFactory.xsl FIX44.xml
xsltproc -o ../src/java/src/quickfix/fix40/MessageCracker.java java_MessageCracker.xsl FIX40.xml
xsltproc -o ../src/java/src/quickfix/fix41/MessageCracker.java java_MessageCracker.xsl FIX41.xml
xsltproc -o ../src/java/src/quickfix/fix42/MessageCracker.java java_MessageCracker.xsl FIX42.xml
xsltproc -o ../src/java/src/quickfix/fix43/MessageCracker.java java_MessageCracker.xsl FIX43.xml
xsltproc -o ../src/java/src/quickfix/fix44/MessageCracker.java java_MessageCracker.xsl FIX44.xml
xsltproc -o generate_java_fields40.sh generate_java_fields_unix.xsl FIX40.xml
xsltproc -o generate_java_fields41.sh generate_java_fields_unix.xsl FIX41.xml
xsltproc -o generate_java_fields42.sh generate_java_fields_unix.xsl FIX42.xml
xsltproc -o generate_java_fields43.sh generate_java_fields_unix.xsl FIX43.xml
xsltproc -o generate_java_fields44.sh generate_java_fields_unix.xsl FIX44.xml
chmod +x generate_java_fields40.sh
chmod +x generate_java_fields41.sh
chmod +x generate_java_fields42.sh
chmod +x generate_java_fields43.sh
chmod +x generate_java_fields44.sh
./generate_java_fields40.sh
./generate_java_fields41.sh
./generate_java_fields42.sh
./generate_java_fields43.sh
./generate_java_fields44.sh
