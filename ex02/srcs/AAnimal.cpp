/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:16:17 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 17:01:54 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"
#include <stdexcept>

AAnimal::AAnimal()
{
	std::cout << "AAnimal constructed" << std::endl;
	this->type = "Default Type";
	this->ideas = new Brain();
}

AAnimal::AAnimal(const std::string& type)
{
	std::cout << "AAnimal constructed" << std::endl;
	this->type = type;
	this->ideas = new Brain();
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "AAnimal constructed" << std::endl;
	this->type = other.type;
	this->ideas = new Brain();
	*(this->ideas) = *(other.ideas);
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	*(this->ideas) = *(other.ideas);
	return (*this);
}

AAnimal::~AAnimal()
{
	delete this->ideas;
	this->ideas = NULL;
	std::cout << "AAnimal destroyed" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}

void AAnimal::setIdea(int index, const std::string& idea)
{
	if (index >= 0 && index < IDEA_LEN)
		this->ideas->ideas[index] = idea;
}

std::string AAnimal::getIdea(int index) const
{
	if (index >= 0 && index < IDEA_LEN)
		return (this->ideas->ideas[index]);
	throw std::invalid_argument("Index must be inbound");
}
