#ifndef _MSC_VER
#include "config.h"
#endif

#include "<CLASS>TestCase.h"

namespace FIX
{
  bool <CLASS>TestCase::test::onSetup( <CLASS>*& pObject ) 
  {
    return true;
  }

  void <CLASS>TestCase::test::onRun( <CLASS>& object )
  {
    assert false;
  }

  // void <CLASS>TestCase::test::onTeardown( <CLASS>* pObject ) {}
}
