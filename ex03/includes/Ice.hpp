/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:22:20 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 20:24:23 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	virtual ~Ice();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif