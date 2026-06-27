/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:19:48 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 15:33:20 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : Animal("Cat")
{
}

Cat::Cat(const std::string& type) : Animal(type)
{
}

Cat::Cat(const Cat& other) : Animal(other)
{
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	Animal::operator=(other);
	return (*this);
}

Cat::~Cat()
{
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}