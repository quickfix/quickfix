#ifndef UNITTEST_EXECUTE_TEST_H
#define UNITTEST_EXECUTE_TEST_H

#include "TestDetails.h"
#include "MemoryOutStream.h"
#include "AssertException.h"

#ifdef UNITTEST_POSIX
	#include "Posix/SignalTranslator.h"
#endif

namespace UnitTest {

template< typename T >
void ExecuteTest(T& testObject, TestResults& testResults, TestDetails const& details)
{
	try
	{
#ifdef UNITTEST_POSIX
		UNITTEST_THROW_SIGNALS
#endif
		testObject.RunImpl(testResults);
	}
	catch (AssertException const& e)
	{
		testResults.OnTestFailure( TestDetails(details.testName, details.suiteName, e.Filename(), e.LineNumber()), e.what());
	}
	catch (std::exception const& e)
	{
		MemoryOutStream stream;
		stream << "Unhandled exception: " << e.what();
		testResults.OnTestFailure(details, stream.GetText());
	}
	catch (...)
	{
		testResults.OnTestFailure(details, "Unhandled exception: Crash!");
	}
}

}

#endif
