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

int	main(void)
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	i->makeSound();
	j->makeSound();
	delete i;
	delete j;

	Dog	basic;
	{
		Dog	tmp = basic;
	}

	Animal*	animals[10];
	for (int k = 0; k < 10; ++k)
	{
		if (k < 5)
			animals[k] = new Dog();
		else
			animals[k] = new Cat();
	}
	for (int k = 0; k < 10; ++k)
		delete animals[k];
	return (0);
}
