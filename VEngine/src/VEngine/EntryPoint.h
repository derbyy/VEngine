#pragma once

#ifdef VE_PLATFORM_WINDOWS

extern VEngine::Application* VEngine::CreateApplication();

int main(int argc, char** argv)
{
	std::cout << "VEngine !!!" << std::endl;
	auto app = VEngine::CreateApplication();
	app->Run();
	delete app;
}

#endif
