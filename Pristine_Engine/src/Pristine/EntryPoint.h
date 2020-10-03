#pragma once

#include "Application.h"

#ifdef PT_PLATFORM_WINDOWS

	extern Pristine::Application* Pristine::CreateApplication();

	int main(int argc, char** argv)
	{
		printf("Pristine Engine initialized!\n");
		auto app = Pristine::CreateApplication();
		app->Run();
		delete app;

		return 0;
	}

#endif