#ifndef FIX_COMMON_FIELDS_H
#define FIX_COMMON_FIELDS_H

#include "Field.h"

#undef Yield

namespace FIX
{
  DEFINE_STRING(BeginString);
  DEFINE_STRING(SenderCompID);
  DEFINE_STRING(TargetCompID);
}

#ifdef ReplaceText
#pragma pop("ReplaceText")
#endif

#endif //FIX_FIELDS_H
