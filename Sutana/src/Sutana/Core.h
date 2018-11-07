#pragma once

#ifdef ST_PLATFORM_WINDOWS
	#ifdef ST_BUILD_DLL
		#define SUTANA_API __declspec(dllexport)
	#else
		#define SUTANA_API __declspec(dllimport)
	#endif
#else
	#error Sutana only support Windows!
#endif