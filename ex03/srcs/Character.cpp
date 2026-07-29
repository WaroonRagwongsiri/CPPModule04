/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:26:30 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 21:08:04 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"
#include "../includes/AMateria.hpp"

Character::Character() : name("Unnamed")
{
	initializeInventory();
}

Character::Character(const std::string& name) : name(name)
{
	initializeInventory();
}

Character::Character(const Character& other) : name(other.name)
{
	initializeInventory();
	copyInventory(other);
}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		clearInventory();
		clearFloor();
		name = other.name;
		copyInventory(other);
	}
	return *this;
}

Character::~Character()
{
	clearInventory();
	clearFloor();
}

void Character::initializeInventory()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		inventory[i] = NULL;
		++i;
	}
}

void Character::clearInventory()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		delete inventory[i];
		inventory[i] = NULL;
		++i;
	}
}

void Character::clearFloor()
{
	AMateria*	materia;

	while (!floor.empty())
	{
		materia = static_cast<AMateria*>(floor.popFront());
		delete materia;
	}
}

void Character::copyInventory(const Character& other)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (other.inventory[i] != NULL)
			inventory[i] = other.inventory[i]->clone();
		else
			inventory[i] = NULL;
		++i;
	}
}

const std::string& Character::getName() const
{
	return name;
}

void Character::equip(AMateria* materia)
{
	int	i;

	if (materia == NULL)
		return;
	i = 0;
	while (i < 4)
	{
		if (inventory[i] == materia)
			return;
		++i;
	}
	i = 0;
	while (i < 4)
	{
		if (inventory[i] == NULL)
		{
			floor.remove(materia);
			inventory[i] = materia;
			return;
		}
		++i;
	}
}

void Character::unequip(int index)
{
	AMateria*	materia;

	if (index < 0 || index >= 4)
		return;
	if (inventory[index] == NULL)
		return;
	materia = inventory[index];
	floor.append(materia);
	inventory[index] = NULL;
}

void Character::use(int index, ICharacter& target)
{
	if (index < 0 || index >= 4)
		return;
	if (inventory[index] != NULL)
		inventory[index]->use(target);
}
