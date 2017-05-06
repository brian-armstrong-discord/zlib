#ifdef HAVE_SSE42
#include "trees_x86.c"
#else
#include "trees_port.c"
#endif
