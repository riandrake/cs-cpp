#pragma once

#include <iostream>

namespace Game
{
	void PrintHelloWorld();
	int Add(int A, int B);
}

class IHello
{
public:
	std::string name;

	virtual ~IHello() = default;

	virtual void printName() = 0;
};

class HelloImpl : public IHello
{
public:
	explicit HelloImpl(std::string name)
	{
		this->name = name;
	}

	void printName() final
	{
		std::cout << "my name is " << name << std::endl;
	}
};
