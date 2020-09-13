#ifndef BUILDOPTIONS_H_
#define BUILDOPTIONS_H_

//
//	Platform options
//
// #undef  DAEDALUS_COMPRESSED_ROM_SUPPORT			// Define this to enable support for compressed Roms(zip'ed). If you define this, you will need to add unzip.c and ioapi.c to the project too. (Located at Source/Utility/Zip/)
// #undef  DAEDALUS_ENABLE_DYNAREC					// Define this is dynarec is supported on the platform
// #undef  DAEDALUS_ENABLE_OS_HOOKS				// Define this to enable OS HLE
// #undef  DAEDALUS_BREAKPOINTS_ENABLED			// Define this to enable breakpoint support
// #undef	DAEDALUS_ENDIAN_MODE					// Define this to specify whether the platform is big or little endian

// DAEDALUS_ENDIAN_MODE should be defined as one of:
//
#define DAEDALUS_ENDIAN_LITTLE 1
#define DAEDALUS_ENDIAN_BIG 2

//
//	Set up your preprocessor flags to search Source/SysXYZ/Include first, where XYZ is your target platform
//	If certain options are not defined, defaults are provided below
//
#include "Platform.h"
#ifndef MAKE_UNCACHED_PTR
#define MAKE_UNCACHED_PTR(x)	(x)
#endif


#endif // BUILDOPTIONS_H_
