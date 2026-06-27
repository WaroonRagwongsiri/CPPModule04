/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/27 16:33:13 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/06/27 16:36:06 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Brain.hpp"

Brain::Brain()
{
}

Brain::Brain(const Brain& other)
{
	for (int i = 0; i < IDEA_LEN; ++i)
		this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
	if (this == &other)
		return (*this);
	for (int i = 0; i < IDEA_LEN; ++i)
		this->ideas[i] = other.ideas[i];
	return (*this);
}

Brain::~Brain()
{
}
