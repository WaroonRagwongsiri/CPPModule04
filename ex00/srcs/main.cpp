/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:27:46 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/11/25 15:10:00 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	i->makeSound();
	j->makeSound();
	delete i;
	delete j;

	WrongCat			wrongCat;
	const WrongAnimal*	wrong = &wrongCat;

	wrong->makeSound();
	wrongCat.makeSound();
	return (0);
}
