#include <VEngine.h>

class VSandbox : public VEngine::Application
{
public:
	VSandbox()
	{
	}

	~VSandbox()
	{
	}
};

VEngine::Application* VEngine::CreateApplication()
{
	return new VSandbox();
}
