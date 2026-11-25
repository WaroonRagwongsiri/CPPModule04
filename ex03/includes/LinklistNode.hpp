/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinklistNode.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:48:03 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/11/25 15:10:00 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKLISTNODE_HPP
# define LINKLISTNODE_HPP

# include <cstddef>

class LinklistNode
{
private:
	void*			item;
	LinklistNode*	next;

public:
	LinklistNode();
	LinklistNode(void* item);
	LinklistNode(const LinklistNode& other);
	LinklistNode& operator=(const LinklistNode& other);
	~LinklistNode();

	void*			getItem() const;
	LinklistNode*	getNext() const;
	void			setNext(LinklistNode* next);
};

#endif
