#include <Sutana.h>

class Sandbox : public Sutana::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Sutana::Application* Sutana::CreateApplication()
{
	return new Sandbox();
}