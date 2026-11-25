/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:16:17 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/11/25 15:10:00 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal constructed" << std::endl;
	this->type = "Default Type";
}

AAnimal::AAnimal(const std::string& type)
{
	std::cout << "AAnimal constructed" << std::endl;
	this->type = type;
}

AAnimal::AAnimal(const AAnimal& other)
{
	std::cout << "AAnimal copy constructed" << std::endl;
	this->type = other.type;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
	if (this == &other)
		return (*this);
	this->type = other.type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed" << std::endl;
}

std::string AAnimal::getType() const
{
	return (this->type);
}
