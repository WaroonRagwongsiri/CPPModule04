/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:16:17 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 16:38:19 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <cstddef>

Animal::Animal()
{
	std::cout << "Animal constructed" << std::endl;
	this->type = "Default Type";
	this->ideas = new Brain();
}

Animal::Animal(const std::string& type)
{
	std::cout << "Animal constructed" << std::endl;
	this->type = type;
	this->ideas = new Brain();
}

Animal::Animal(const Animal& other)
{
	std::cout << "Animal constructed" << std::endl;
	this->type = other.type;
	this->ideas = new Brain();
	this->ideas = other.ideas;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

Animal::~Animal()
{
	delete this->ideas;
	this->ideas = NULL;
	std::cout << "Animal destroyed" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "Default Sound" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
