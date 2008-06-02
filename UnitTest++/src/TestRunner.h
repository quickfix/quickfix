#ifndef UNITTEST_TESTRUNNER_H
#define UNITTEST_TESTRUNNER_H

#include "Test.h"
#include "TestList.h"

namespace UnitTest {

class TestReporter;
class TestResults;
class Timer;

int RunAllTests();
int RunAllTests(TestReporter& reporter);
int RunAllTests(TestReporter& reporter, TestList const& list, char const* suiteName, int maxTestTimeInMs = 0);

class TestRunner
{
public:
	
	template <class Predicate>
	int RunAllTestsIf(const Predicate& predicate) const
	{
		TestContext context;
		return RunAllTestsIf(context, Test::GetTestList(), 0, predicate);	
	}
	
	template <class Predicate>
	int RunAllTestsIf(TestReporter& reporter, const Predicate& predicate) const
	{
		TestContext context(&reporter);
		return RunAllTestsIf(context, Test::GetTestList(), 0, predicate);	
	}
		
	template <class Predicate>
	int RunAllTestsIf(TestReporter& reporter, TestList const& list, char const* suiteName, const Predicate& predicate, int maxTestTimeInMs = 0) const
	{
		TestContext context(&reporter);
		return RunAllTestsIf(context, list, suiteName, predicate, maxTestTimeInMs);	
	}
	
private:
	
	// To remove dependencies on TestReporter, TestResults and Timer
	class TestContext
	{
	public:
		TestContext();
		TestContext(TestReporter* reporter_);
		~TestContext();
		
		TestReporter* GetReporter() const;
		TestResults* GetResult() const;
		Timer* GetTimer() const;	
		
	private:
		TestReporter* reporter;
		TestResults* result;
		Timer*       timer;
		
		bool ownReporter;
	};
		
	template <class Predicate>
	int RunAllTestsIf(TestContext& context, TestList const& list, char const* suiteName, const Predicate& predicate, int maxTestTimeInMs = 0) const
	{
		TestResults* result = context.GetResult();
	
	    Test* curTest = list.GetHead();
	    while (curTest != 0)
	    {
		    if ( IsTestInSuite(curTest,suiteName) && predicate(curTest) )
		    {		
	        	    RunTest(result, curTest, maxTestTimeInMs);
			 }
	
	     	 curTest = curTest->next;
	    }

	    return Finish(context);		
	}	

	// To remove dependencies	
	int  Finish(TestContext& context) const;
	bool IsTestInSuite(Test* const curTest, char const* suiteName) const;
	void RunTest(TestResults* const result, Test* const curTest, int const maxTestTimeInMs) const;
};

// Predicate version of RunAllTests(TestReporter& reporter, TestList const& list, char const* suiteName, int maxTestTimeInMs = 0)
template <class Predicate>
int RunAllTestsIf(TestReporter& reporter, TestList const& list, char const* suiteName, const Predicate& predicate, int maxTestTimeInMs = 0)
{
	TestRunner runner;
	return runner.RunAllTestsIf(reporter, list, suiteName, predicate, maxTestTimeInMs);
}

// Predicate version of RunAllTests(TestReporter& reporter)
template <class Predicate>
int RunAllTestsIf(TestReporter& reporter, const Predicate& predicate)
{
	TestRunner runner;
	return runner.RunAllTestsIf(reporter, predicate);
}

// Predicate version of RunAllTests()
template <class Predicate>
int RunAllTestsIf(const Predicate& predicate)
{
	TestRunner runner;
	return runner.RunAllTestsIf(predicate);
}

}

#endif
