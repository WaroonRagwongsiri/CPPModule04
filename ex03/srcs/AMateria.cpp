/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 19:55:59 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 20:40:55 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/ICharacter.hpp"

AMateria::AMateria() : type("")
{
}

AMateria::AMateria(const std::string& type)
	: type(type)
{
}

AMateria::AMateria(const AMateria& other)
	: type(other.type)
{
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		type = other.type;
	return *this;
}

AMateria::~AMateria()
{
}

const std::string& AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
