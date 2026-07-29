/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:24:58 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 20:25:22 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& other) : AMateria(other)
{
}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		AMateria::operator=(other);

	return *this;
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "
			<< target.getName()
			<< "'s wounds *"
			<< std::endl;
}
