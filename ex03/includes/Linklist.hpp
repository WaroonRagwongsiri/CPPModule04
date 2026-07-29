/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Linklist.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:50:35 by waroonwork@       #+#    #+#             */
/*   Updated: 2026/07/29 21:15:49 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKLIST_HPP
# define LINKLIST_HPP

class LinklistNode;

class Linklist
{
private:
	LinklistNode*	head;

public:
	Linklist();
	Linklist(const Linklist& other);
	Linklist& operator=(const Linklist& other);
	~Linklist();

	void append(void* item);
	bool contains(const void* item) const;
	bool remove(const void* item);
	void* popFront();
	bool empty() const;
	void clear();
};

#endif
