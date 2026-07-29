/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:26:03 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 21:07:47 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "Linklist.hpp"

# include <string>

class AMateria;

class Character : public ICharacter
{
private:
	std::string	name;
	AMateria*	inventory[4];
	Linklist	floor;

	void	initializeInventory();
	void	clearInventory();
	void	copyInventory(const Character& other);
	void	clearFloor();

public:
	Character();
	Character(const std::string& name);
	Character(const Character& other);
	Character& operator=(const Character& other);
	virtual ~Character();

	virtual const std::string& getName() const;
	virtual void equip(AMateria* materia);
	virtual void unequip(int index);
	virtual void use(int index, ICharacter& target);
};

#endif