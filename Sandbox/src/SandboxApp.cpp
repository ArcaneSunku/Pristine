#include <iostream>
#include <Pristine.h>

class Sandbox : public Pristine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};


Pristine::Application* Pristine::CreateApplication()
{
	return new Sandbox();
}