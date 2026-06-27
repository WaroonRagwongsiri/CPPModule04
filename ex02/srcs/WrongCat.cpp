#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAAnimal("WrongCat")
{
	std::cout << "WrongCat constructed" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAAnimal(other)
{
	std::cout << "WrongCat constructed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		WrongAAnimal::operator=(other);
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destroyed" << std::endl;
}

void WrongCat::makeSound() const
{
	std::cout << "Meow (but in a WrongAAnimal way)" << std::endl;
}
