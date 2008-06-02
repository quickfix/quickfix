#include "TestRunner.h"
#include "TestResults.h"
#include "TestReporter.h"
#include "TestReporterStdout.h"
#include "TimeHelpers.h"
#include "MemoryOutStream.h"
#include <cstring>


namespace UnitTest {

struct True
{
	bool operator()(const Test* const /*test*/) const
	{
		return true;	
	}
};

int RunAllTests()
{
    TestReporterStdout reporter;
    return RunAllTests(reporter);
}

int RunAllTests(TestReporter& reporter)
{
	return RunAllTests(reporter, Test::GetTestList(), 0);
}

int RunAllTests(TestReporter& reporter, TestList const& list, char const* suiteName, int const maxTestTimeInMs )
{
    return RunAllTestsIf(reporter, list, suiteName, True(), maxTestTimeInMs);
}

TestRunner::TestContext::TestContext()
: reporter(new TestReporterStdout())
, result(new TestResults(reporter))
, timer(new Timer())
, ownReporter(true)
{
	timer->Start();
}

TestRunner::TestContext::TestContext(TestReporter* reporter_)
: reporter(reporter_)
, result(new TestResults(reporter_))
, timer(new Timer())
, ownReporter(false)
{
	timer->Start();
}
	
TestRunner::TestContext::~TestContext()
{
	delete result;
	result = 0;
	
	delete timer;
	timer = 0;
	
	if (ownReporter)
	{
		delete reporter;
		reporter = 0;	
	}
}

TestReporter* TestRunner::TestContext::GetReporter() const
{
	return reporter;
}

TestResults* TestRunner::TestContext::GetResult() const
{
	return result;
}
	
Timer* TestRunner::TestContext::GetTimer() const
{
	return timer;
}	

int TestRunner::Finish(TestContext& context) const
{
    TestResults* result = context.GetResult();

    float const secondsElapsed = context.GetTimer()->GetTimeInMs() / 1000.0f;
    context.GetReporter()->ReportSummary(result->GetTotalTestCount(), result->GetFailedTestCount(), result->GetFailureCount(), secondsElapsed);
    
	 return result->GetFailureCount();
}

bool TestRunner::IsTestInSuite(Test* const curTest, char const* suiteName) const
{
	return (suiteName == 0) || !std::strcmp(curTest->m_details.suiteName, suiteName);
}

void TestRunner::RunTest(TestResults* const result, Test* const curTest, int const maxTestTimeInMs) const
{
	Timer testTimer;
	testTimer.Start();
	result->OnTestStart(curTest->m_details);
	
	curTest->Run(*result);
 
	int const testTimeInMs = testTimer.GetTimeInMs();
	if (maxTestTimeInMs > 0 && testTimeInMs > maxTestTimeInMs && !curTest->m_timeConstraintExempt)
	{
	    MemoryOutStream stream;
	    stream << "Global time constraint failed. Expected under " << maxTestTimeInMs <<
	            "ms but took " << testTimeInMs << "ms.";
	    result->OnTestFailure(curTest->m_details, stream.GetText());
	}
	result->OnTestFinish(curTest->m_details, testTimeInMs/1000.0f);
}

}
