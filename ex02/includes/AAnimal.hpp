/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 15:06:17 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 17:01:19 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include "Brain.hpp"

# include <string>
# include <iostream>
# include <cstddef>
# include <stdexcept>

class AAnimal
{
	private:
		Brain* ideas;
	protected:
		std::string type;
	public:
		AAnimal();
		AAnimal(const std::string& type);
		AAnimal(const AAnimal& other);
		AAnimal& operator=(const AAnimal& other);
		virtual ~AAnimal();
		virtual void makeSound() const = 0;
		std::string getType() const;
		void setIdea(int index, const std::string& idea);
		std::string getIdea(int index) const;
};

#endif
