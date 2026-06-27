/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:16:17 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 17:01:54 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <stdexcept>

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
	*(this->ideas) = *(other.ideas);
}

Animal& Animal::operator=(const Animal& other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	*(this->ideas) = *(other.ideas);
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

void Animal::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < IDEA_LEN)
		this->ideas->ideas[index] = idea;
}

std::string Animal::getIdea(int index) const
{
	if (index >= 0 && index < IDEA_LEN)
		return (this->ideas->ideas[index]);
	throw std::invalid_argument("Index must be inbound");
}
