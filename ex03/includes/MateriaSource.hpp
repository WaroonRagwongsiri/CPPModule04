/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:28:03 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 20:40:18 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class AMateria;

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	memory[4];

	void initializeMemory();
	void clearMemory();
	void copyMemory(const MateriaSource& other);

public:
	MateriaSource();
	MateriaSource(const MateriaSource& other);
	MateriaSource& operator=(const MateriaSource& other);
	virtual ~MateriaSource();

	virtual void learnMateria(AMateria* materia);
	virtual AMateria* createMateria(const std::string& type);
};

#endif