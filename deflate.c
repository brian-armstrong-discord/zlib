#ifdef HAVE_SSE42
#include "deflate_x86.c"
#else
#include "deflate_port.c"
#endif
