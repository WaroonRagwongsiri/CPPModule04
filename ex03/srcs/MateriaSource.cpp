/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:28:18 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 20:40:46 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"
#include "../includes/AMateria.hpp"

MateriaSource::MateriaSource()
{
	initializeMemory();
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
	initializeMemory();
	copyMemory(other);
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		clearMemory();
		copyMemory(other);
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	clearMemory();
}

void MateriaSource::initializeMemory()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		memory[i] = NULL;
		++i;
	}
}

void MateriaSource::clearMemory()
{
	int	i;

	i = 0;
	while (i < 4)
	{
		delete memory[i];
		memory[i] = NULL;
		++i;
	}
}

void MateriaSource::copyMemory(const MateriaSource& other)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (other.memory[i] != NULL)
			memory[i] = other.memory[i]->clone();
		else
			memory[i] = NULL;
		++i;
	}
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int	i;

	if (materia == NULL)
		return;
	i = 0;
	while (i < 4)
	{
		if (memory[i] == materia)
			return;
		++i;
	}
	i = 0;
	while (i < 4)
	{
		if (memory[i] == NULL)
		{
			memory[i] = materia;
			return;
		}
		++i;
	}
}

AMateria* MateriaSource::createMateria(const std::string& type)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (memory[i] != NULL && memory[i]->getType() == type)
			return memory[i]->clone();
		++i;
	}
	return NULL;
}
