#ifdef _MSC_VER
#include "stdafx.h"
#else
#include "config.h"
#endif

#include "TestHelper.h"

namespace FIX
{
  const uint16_t TestSettings::port = 54321;
  FIX::SessionSettings TestSettings::sessionSettings;
  std::string TestSettings::postgreSQLUser = "";
}
