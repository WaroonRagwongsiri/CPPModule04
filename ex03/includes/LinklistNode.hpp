/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinklistNode.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:48:03 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 21:05:33 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKLISTNODE_HPP
# define LINKLISTNODE_HPP

# include <stdlib.h>

class Linklist;

class LinklistNode
{
private:
	void*			item;
	LinklistNode*	next;

public:
	LinklistNode(void* item);
	LinklistNode(const LinklistNode& other);
	LinklistNode& operator=(const LinklistNode& other);
	~LinklistNode();

	friend class Linklist;
};

#endif
