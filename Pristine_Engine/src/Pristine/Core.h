#pragma once

#include <stdio.h>

#ifdef PT_PLATFORM_WINDOWS
	#ifdef PT_BUILD_DLL
		#define PRISTINE_API __declspec(dllexport)
	#else
		#define PRISTINE_API __declspec(dllimport)
	#endif
#else
	#error Pristine Engine currently only supports Windows!
#endif