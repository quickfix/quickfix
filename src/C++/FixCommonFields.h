#ifndef FIX_COMMON_FIELDS_H
#define FIX_COMMON_FIELDS_H

#include "Field.h"

#undef Yield

namespace FIX {
DEFINE_STRING(BeginString);
DEFINE_STRING(SenderCompID);
DEFINE_STRING(TargetCompID);
} // namespace FIX
#endif // FIX_COMMON_FIELDS_H
