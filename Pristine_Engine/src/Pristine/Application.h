#pragma once

#include "Core.h"

namespace Pristine {
	class PRISTINE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// Defined in Client
	Application* CreateApplication();
}
