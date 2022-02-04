#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "TestHelper.h"

namespace FIX
{
  short TestSettings::port = 0;
  FIX::SessionSettings TestSettings::sessionSettings;
}
