/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:27:46 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 17:04:58 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongCat.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	// Wrong Animal Test
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();
	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound();
	wrongMeta->makeSound();
	delete wrongMeta;
	delete wrongI;

	WrongCat wrongCat;
	wrongCat.makeSound();

	// Copy Ideas Test
	Dog original;
	original.setIdea(0, "original idea");

	Dog copy(original);
	std::cout << "original idea[0]: " << original.getIdea(0) << std::endl;
	std::cout << "copy idea[0]: " << copy.getIdea(0) << std::endl;

	copy.setIdea(0, "copy idea");
	std::cout << "original idea[0]: " << original.getIdea(0) << std::endl;
	std::cout << "copy idea[0]: " << copy.getIdea(0) << std::endl;
	return (0);
}
