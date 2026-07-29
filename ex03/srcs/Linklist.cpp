/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Linklist.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:51:20 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 21:10:22 by waroonwork@      ###   ########.fr       */
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
		append(current->item);
		current = current->next;
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
			append(current->item);
			current = current->next;
		}
	}
	return *this;
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
		while (current->next != NULL)
			current = current->next;
		current->next = newNode;
	}
}

bool Linklist::contains(const void* item) const
{
	LinklistNode*	current;

	current = head;
	while (current != NULL)
	{
		if (current->item == item)
			return true;
		current = current->next;
	}
	return false;
}

bool Linklist::remove(const void* item)
{
	LinklistNode*	current;
	LinklistNode*	previous;

	current = head;
	previous = NULL;
	while (current != NULL)
	{
		if (current->item == item)
		{
			if (previous == NULL)
				head = current->next;
			else
				previous->next = current->next;
			delete current;
			return true;
		}
		previous = current;
		current = current->next;
	}
	return false;
}

void* Linklist::popFront()
{
	LinklistNode*	oldHead;
	void*			item;

	if (head == NULL)
		return NULL;
	oldHead = head;
	item = oldHead->item;
	head = oldHead->next;
	delete oldHead;
	return item;
}

void* Linklist::at(std::size_t index) const
{
	LinklistNode*	current;
	std::size_t		currentIndex;

	current = head;
	currentIndex = 0;
	while (current != NULL)
	{
		if (currentIndex == index)
			return current->item;
		current = current->next;
		++currentIndex;
	}
	return NULL;
}

bool Linklist::empty() const
{
	return head == NULL;
}

void Linklist::clear()
{
	LinklistNode*	current;
	LinklistNode*	next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		delete current;
		current = next;
	}
	head = NULL;
}
