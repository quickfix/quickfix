astyle -s2Km0bPoO src\*.h
astyle -s2Km0bPoO src\*.cpp
dos2unix src/*.h
dos2unix src/*.cpp

astyle -s2Km0bPoO src\C++\*.h
astyle -s2Km0bPoO src\C++\*.cpp
dos2unix src/C++/*.h
dos2unix src/C++/*.cpp

astyle -s2Km0bPoO src\C++\test\*.h
astyle -s2Km0bPoO src\C++\test\*.cpp
dos2unix src/C++/test/*.h
dos2unix src/C++/test/*.cpp

astyle -s2Km0bPoO src\java\*.h
astyle -s2Km0bPoO src\java\*.cpp
dos2unix src/java/*.h
dos2unix src/java/*.cpp

astyle -s2Km0bPoO src\.NET\*.h
astyle -s2Km0bPoO src\.NET\*.cpp
unix2dos src/.NET/*.h
unix2dos src/.NET/*.cpp

astyle --style=java src\java\src\org\quickfix\*.java
dos2unix src/java/src/org/quickfix/*.java
astyle --style=java src\java\src\org\quickfix\field\*.java
dos2unix src/java/src/org/quickfix/field/*.java
astyle --style=java src\java\src\org\quickfix\fix40\*.java
dos2unix src/java/src/org/quickfix/fix40/*.java
astyle --style=java src\java\src\org\quickfix\fix41\*.java
dos2unix src/java/src/org/quickfix/fix41/*.java
astyle --style=java src\java\src\org\quickfix\fix42\*.java
dos2unix src/java/src/org/quickfix/fix42/*.java

astyle -s2Km0bPoO examples\ordermatch\*.h
astyle -s2Km0bPoO examples\ordermatch\*.cpp
dos2unix examples/ordermatch/*.h
dos2unix examples/ordermatch/*.cpp

astyle -s2Km0bPoO examples\tradeclient\*.h
astyle -s2Km0bPoO examples\tradeclient\*.cpp
dos2unix examples/tradeclient/*.h
dos2unix examples/tradeclient/*.cpp

astyle --style=java examples\tradeclientgui\banzai\src\*.java
dos2unix examples/tradeclientgui/banzai/src/*.java
astyle --style=java examples\tradeclientgui\banzai\src\org\quickfix\banzai\*.java
dos2unix examples/tradeclientgui/banzai/src/org/quickfix/banzai/*.java
astyle --style=java examples\tradeclientgui\banzai\src\org\quickfix\banzai\ui\*.java
dos2unix examples/tradeclientgui/banzai/src/org/quickfix/banzai/ui/*.java

astyle -s2Km0bPoO examples\executor\C++\*.cpp
dos2unix examples/executor/C++/*.cpp
astyle -s2Km0bPoO examples\executor\csharp\*.cs
unix2dos examples\executor\csharp\*.cs
astyle --style=java examples\executor\java\src\*.java
dos2unix examples/executor/java/src/*.java

del /s/q *.orig



