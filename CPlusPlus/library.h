#pragma once

extern "C"
{
	HELLOWORLD_API void HelloWorld();

	class HELLOWORLD_API MyClass
	{
	public:
		void Echo(const char* Message);
	};
}
