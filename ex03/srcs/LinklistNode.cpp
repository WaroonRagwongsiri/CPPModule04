/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinklistNode.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:49:01 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/11/25 15:10:00 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/LinklistNode.hpp"

LinklistNode::LinklistNode() : item(NULL), next(NULL)
{
}

LinklistNode::LinklistNode(void* item) : item(item), next(NULL)
{
}

LinklistNode::LinklistNode(const LinklistNode& other)
	: item(other.item), next(NULL)
{
}

LinklistNode& LinklistNode::operator=(const LinklistNode& other)
{
	if (this != &other)
	{
		item = other.item;
		next = NULL;
	}
	return (*this);
}

LinklistNode::~LinklistNode()
{
}

void* LinklistNode::getItem() const
{
	return (item);
}

LinklistNode* LinklistNode::getNext() const
{
	return (next);
}

void LinklistNode::setNext(LinklistNode* next)
{
	this->next = next;
}
