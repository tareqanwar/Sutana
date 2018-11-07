#pragma once

#ifdef ST_PLATFORM_WINDOWS

extern Sutana::Application* Sutana::CreateApplication();

int main(int argc, char** argv)
{
	auto app = Sutana::CreateApplication();
	app->Run();
	delete app;
}

#endif