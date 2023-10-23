#ifndef CONFIG_H_IN
#define CONFIG_H_IN

#ifdef _MSC_VER
#include "config_windows.h"
#else
#include "config_unix.h"
#endif

#endif
