/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:19:48 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/11/25 15:10:00 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
	std::cout << "Cat constructed" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat& other) : AAnimal(other)
{
	std::cout << "Cat copy constructed" << std::endl;
	this->brain = new Brain(*other.brain);
}

Cat& Cat::operator=(const Cat& other)
{
	if (this == &other)
		return (*this);
	AAnimal::operator=(other);
	*(this->brain) = *(other.brain);
	return (*this);
}

Cat::~Cat()
{
	delete this->brain;
	this->brain = NULL;
	std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}
