/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:22:55 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 20:25:33 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

#include <iostream>

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(const Ice& other) : AMateria(other)
{
}

Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
		AMateria::operator=(other);

	return *this;
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at "
			<< target.getName()
			<< " *"
			<< std::endl;
}
