/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 11:23:27 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/22 12:59:56 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKEDLIST_HPP
# define LINKEDLIST_HPP

#include "main.hpp"

class LinkedList
{
	private:

	public:
		Node* head;
		~LinkedList();
		LinkedList();

		void listAddBack(void* newData);
};


#endif
