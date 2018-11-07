#pragma once
#include "Core.h"

namespace Sutana {
	class SUTANA_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();
}
