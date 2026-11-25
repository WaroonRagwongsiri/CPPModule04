/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:57:00 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/11/25 15:10:00 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

# include <string>
# include <iostream>

class WrongAAnimal
{
	protected:
		std::string type;
	public:
		WrongAAnimal();
		WrongAAnimal(const std::string& type);
		WrongAAnimal(const WrongAAnimal& other);
		WrongAAnimal& operator=(const WrongAAnimal& other);
		~WrongAAnimal();
		void makeSound() const;
		std::string getType() const;
};

#endif
