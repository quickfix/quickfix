#ifdef _MSC_VER
extern "C"
{
  int getopt( int argc, char * const argv[], const char * optstring );
  extern char *optarg;
  char* __progname;
}
#else
#include <unistd.h>
#endif
