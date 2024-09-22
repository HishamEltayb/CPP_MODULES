/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   LinkedList.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/22 12:58:56 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

LinkedList::LinkedList() {this->head = NULL;}

LinkedList::~LinkedList(){}

void LinkedList::listAddBack(void *newData)
{
    Node* newNode = new Node(newData);

    if (!this->head)
        this->head = newNode;
    else
    {
        Node *temp = this->head;
	    while (this->head->next)
			this->head = this->head->next;
        this->head->next = newNode;
		this->head = temp;
    }
}
