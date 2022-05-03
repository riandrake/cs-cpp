#include "library.h"

#include <iostream>

namespace Game
{
	void PrintHelloWorld()
	{
		std::cout << "Hello, World!" << std::endl;
	}

	int Add(int A, int B)
	{
		return A + B;
	}
}

extern "C"
{
namespace Interop
{
	HELLOWORLD_API void* newHello(const char* name)
	{
		return new HelloImpl(name);
	}

	HELLOWORLD_API void deleteHello(IHello* ptr)
	{
		delete ptr;
	}

	HELLOWORLD_API void printName(IHello* ptr)
	{
		ptr->printName();
	}

	HELLOWORLD_API void PrintHelloWorld()
	{
		Game::PrintHelloWorld();
	}

	HELLOWORLD_API int Add(int A, int B)
	{
		return Game::Add(A, B);
	}
}
}
