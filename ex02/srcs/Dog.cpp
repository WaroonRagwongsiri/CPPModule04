/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:25:02 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 19:27:03 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const std::string& type) : AAnimal(type)
{
	std::cout << "Dog constructed" << std::endl;
}

Dog::Dog(const Dog& other) : AAnimal(other)
{
	std::cout << "Dog constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	AAnimal::operator=(other);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
