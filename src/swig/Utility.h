#ifndef SWIG_UTILITY_H
#define SWIG_UTILITY_H

#ifdef _MSC_VER
[[noreturn]] __forceinline void unreachable() { __assume(false); }
#else
[[noreturn]] inline __attribute__((always_inline)) void unreachable() { __builtin_unreachable(); }
#endif

#endif
