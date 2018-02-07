include (CheckIncludeFiles)
include(CheckFunctionExists)
include(CheckPrototypeDefinition)
include(CheckIncludeFileCXX)
include(CheckCXXSourceCompiles)

if(NOT WIN32)

CHECK_INCLUDE_FILES(dlfcn.h HAVE_DLFCN_H)
CHECK_INCLUDE_FILES(inttypes.h HAVE_INTTYPES_H)
CHECK_INCLUDE_FILES(stdint.h HAVE_STDINT_H)
CHECK_INCLUDE_FILES(stdio.h HAVE_STDIO_H)
CHECK_INCLUDE_FILES(stdlib.h HAVE_STDLIB_H)
CHECK_INCLUDE_FILES(strings.h HAVE_STRINGS_H)
CHECK_INCLUDE_FILES(string.h HAVE_STRING_H)
CHECK_INCLUDE_FILES(sys/stat.h HAVE_SYS_STAT_H)
CHECK_INCLUDE_FILES(sys/types.h HAVE_SYS_TYPES_H)
CHECK_INCLUDE_FILES(unistd.h HAVE_UNISTD_H)

#https://github.com/transmission/libevent/blob/master/CMakeLists.txt
CHECK_FUNCTION_EXISTS(gethostbyname_r HAVE_GETHOSTBYNAME_R)
if (HAVE_GETHOSTBYNAME_R)
    CHECK_PROTOTYPE_DEFINITION(gethostbyname_r
        "int gethostbyname_r(const char *name, struct hostent *hp, struct hostent_data *hdata)"
        "0"
        "netdb.h"
        HAVE_GETHOSTBYNAME_R_3_ARG)

    CHECK_PROTOTYPE_DEFINITION(gethostbyname_r
        "struct hostent *gethostbyname_r(const char *name, struct hostent *hp, char *buf, size_t buflen, int *herr)"
        "NULL"
        "netdb.h"
        HAVE_GETHOSTBYNAME_R_5_ARG)

    CHECK_PROTOTYPE_DEFINITION(gethostbyname_r
        "int gethostbyname_r(const char *name, struct hostent *hp, char *buf, size_t buflen, struct hostent **result, int *herr)"
        "0"
        "netdb.h"
        HAVE_GETHOSTBYNAME_R_6_ARG)

    if (HAVE_GETHOSTBYNAME_R_5_ARG)
      add_definitions("-DGETHOSTBYNAME_R_RETURNS_RESULT=1")
    endif()

    if (HAVE_GETHOSTBYNAME_R_6_ARG)
      add_definitions("-DGETHOSTBYNAME_R_INPUTS_RESULT=1")
    endif()
endif()

endif()
