/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Linklist.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:51:20 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/11/25 15:10:00 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Linklist.hpp"
#include "../includes/LinklistNode.hpp"

Linklist::Linklist() : head(NULL)
{
}

Linklist::Linklist(const Linklist& other) : head(NULL)
{
	LinklistNode*	current;

	current = other.head;
	while (current != NULL)
	{
		append(current->getItem());
		current = current->getNext();
	}
}

Linklist& Linklist::operator=(const Linklist& other)
{
	LinklistNode*	current;

	if (this != &other)
	{
		clear();
		current = other.head;
		while (current != NULL)
		{
			append(current->getItem());
			current = current->getNext();
		}
	}
	return (*this);
}

Linklist::~Linklist()
{
	clear();
}

void Linklist::append(void* item)
{
	LinklistNode*	newNode;
	LinklistNode*	current;

	newNode = new LinklistNode(item);
	if (head == NULL)
		head = newNode;
	else
	{
		current = head;
		while (current->getNext() != NULL)
			current = current->getNext();
		current->setNext(newNode);
	}
}

bool Linklist::contains(const void* item) const
{
	LinklistNode*	current;

	current = head;
	while (current != NULL)
	{
		if (current->getItem() == item)
			return (true);
		current = current->getNext();
	}
	return (false);
}

bool Linklist::remove(const void* item)
{
	LinklistNode*	current;
	LinklistNode*	previous;

	current = head;
	previous = NULL;
	while (current != NULL)
	{
		if (current->getItem() == item)
		{
			if (previous == NULL)
				head = current->getNext();
			else
				previous->setNext(current->getNext());
			delete current;
			return (true);
		}
		previous = current;
		current = current->getNext();
	}
	return (false);
}

void* Linklist::popFront()
{
	LinklistNode*	oldHead;
	void*			item;

	if (head == NULL)
		return (NULL);
	oldHead = head;
	item = oldHead->getItem();
	head = oldHead->getNext();
	delete oldHead;
	return (item);
}

bool Linklist::empty() const
{
	return (head == NULL);
}

void Linklist::clear()
{
	LinklistNode*	current;
	LinklistNode*	next;

	current = head;
	while (current != NULL)
	{
		next = current->getNext();
		delete current;
		current = next;
	}
	head = NULL;
}
