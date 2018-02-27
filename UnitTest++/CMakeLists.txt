set ( UnitTest++_SOURCES
src/AssertException.cpp
src/Checks.cpp
src/CurrentTest.cpp
src/DeferredTestReporter.cpp
src/DeferredTestResult.cpp
src/MemoryOutStream.cpp
src/ReportAssert.cpp
src/Test.cpp
src/TestDetails.cpp
src/TestList.cpp
src/TestReporter.cpp
src/TestReporterStdout.cpp
src/TestResults.cpp
src/TestRunner.cpp
src/TimeConstraint.cpp
src/XmlTestReporter.cpp
)

if (WIN32)
set (UnitTest++_SOURCES ${UnitTest++_SOURCES}
src/Win32/TimeHelpers.cpp)
else()
set (UnitTest++_SOURCES ${UnitTest++_SOURCES}
src/Posix/SignalTranslator.cpp
src/Posix/TimeHelpers.cpp)
endif()

add_library(UnitTest++ STATIC  ${UnitTest++_SOURCES})

set (TestUnitTest++_SOURCES
src/tests/Main.cpp
src/tests/TestAssertHandler.cpp
src/tests/TestCheckMacros.cpp
src/tests/TestChecks.cpp
src/tests/TestCurrentTest.cpp
src/tests/TestDeferredTestReporter.cpp
src/tests/TestMemoryOutStream.cpp
src/tests/TestTest.cpp
src/tests/TestTestList.cpp
src/tests/TestTestMacros.cpp
src/tests/TestTestResults.cpp
src/tests/TestTestRunner.cpp
src/tests/TestTestSuite.cpp
src/tests/TestTimeConstraint.cpp
src/tests/TestTimeConstraintMacro.cpp
src/tests/TestUnitTest++.cpp
src/tests/TestXmlTestReporter.cpp)

add_executable(TestUnitTest++ ${TestUnitTest++_SOURCES})

target_link_libraries(TestUnitTest++ UnitTest++)

