#pragma once

#ifdef VE_PLATFORM_WINDOWS
	#ifdef VE_BUILD_DLL
		#define VENGINE_API				__declspec(dllexport)
	#else
		#define VENGINE_API				__declspec(dllimport)
	#endif
#else
	#error "VEngine supports only Windows !!!"
#endif
