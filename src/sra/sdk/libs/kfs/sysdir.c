/* $Id: sysdir.c 14717 2013-03-08 15:25:05Z ucko $ */

#ifdef _WIN32
#  include "win/sysdir.c"
#else
#  include "unix/sysdir.c"
#endif
