/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:25:02 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 15:33:31 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

Dog::Dog() : Animal("Dog")
{
}

Dog::Dog(const std::string& type) : Animal(type)
{
}

Dog::Dog(const Dog& other) : Animal(other)
{
}

Dog& Dog::operator=(const Dog& other)
{
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
}

Dog::~Dog()
{
}

void Dog::makeSound() const
{
	std::cout << "Bark" << std::endl;
}
