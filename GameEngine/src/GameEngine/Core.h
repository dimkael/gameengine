#pragma once

#ifdef GE_PLATFORM_WINDOWS
	#ifdef GE_BUILD_DLL
		#define GAMEENGINE_API __declspec(dllexport)
	#else
		#define GAMEENGINE_API __declspec(dllimport)
	#endif // GE_BUILD_DLL
#else
	#error Engine only supports Windows!
#endif // GE_PLATFORM_WINDOWS

#define BIT(x) (1 << x)