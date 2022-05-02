#include "library.h"

#include <iostream>

#if !defined(HelloWorld_EXPORTS)
	static_assert(false);
#endif

void HelloWorld()
{
	std::cout << "Hello, World!" << std::endl;
}

void MyClass::Echo(const char* Message)
{
	std::cout << Message << std::endl;
}
