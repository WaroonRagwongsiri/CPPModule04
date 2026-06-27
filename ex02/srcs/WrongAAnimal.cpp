#include "../includes/WrongAAnimal.hpp"

WrongAAnimal::WrongAAnimal() : type("WrongAAnimal")
{
	std::cout << "WrongAAnimal constructed" << std::endl;
}

WrongAAnimal::WrongAAnimal(const std::string& type) : type(type)
{
	std::cout << "WrongAAnimal constructed" << std::endl;
}

WrongAAnimal::WrongAAnimal(const WrongAAnimal& other) : type(other.type)
{
	std::cout << "WrongAAnimal constructed" << std::endl;
}

WrongAAnimal& WrongAAnimal::operator=(const WrongAAnimal& other)
{
	if (this != &other)
		type = other.type;
	return *this;
}

WrongAAnimal::~WrongAAnimal()
{
	std::cout << "WrongAAnimal destroyed" << std::endl;
}

void WrongAAnimal::makeSound() const
{
	std::cout << "WrongAAnimal sound" << std::endl;
}

std::string WrongAAnimal::getType() const
{
	return type;
}
