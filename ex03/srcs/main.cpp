/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 19:41:05 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 20:53:47 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/AMateria.hpp"
#include "../includes/Character.hpp"
#include "../includes/Cure.hpp"
#include "../includes/Ice.hpp"
#include "../includes/ICharacter.hpp"
#include "../includes/IMateriaSource.hpp"
#include "../includes/MateriaSource.hpp"

//int	main()
//{
//	IMateriaSource* src = new MateriaSource();
//	src->learnMateria(new Ice());
//	src->learnMateria(new Cure());
//	ICharacter* me = new Character("me");
//	AMateria* tmp;
//	tmp = src->createMateria("ice");
//	me->equip(tmp);
//	tmp = src->createMateria("cure");
//	me->equip(tmp);
//	ICharacter* bob = new Character("bob");
//	me->use(0, *bob);
//	me->use(1, *bob);
//	delete bob;
//	delete me;
//	delete src;
//	return 0;
//}

int	main()
{
	Character*	character;
	AMateria*	ice;
	AMateria*	cure;

	character = new Character("Cloud");
	ice = new Ice();
	cure = new Cure();

	character->equip(ice);
	character->equip(cure);

	character->unequip(0);
	character->unequip(1);

	delete character;
	return 0;
}
