/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/17 17:21:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Character::~Character(void)
{
	std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[Character Destructor called]\n" << RESET;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
	Node* current = unequipedMateria.head;
	Node* nextNode = NULL;
	while (current)
	{
		AMateria	*data = static_cast<AMateria *>(current->data);
		delete data;
		nextNode = current->next;
		delete current;
		current = nextNode;
	}
}

Character::Character(void)
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Character Default constructor called]\n" <<  RESET;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name = "default Character";
}

Character::Character(const Character &existObject)
{
	std::cout << ITALIC LIGHT_BLUE  << "[Character Copy constructor called]\n" << RESET;
	*this = existObject;
}

Character& Character::operator=(const Character &existObject)
{
	if (this != &existObject)
	{
		std::cout << ITALIC LIGHT_MAGENTA "[Character Copy assignment operator called]\n" << RESET;
		for (int i = 0; i < 4; i++)
		{
			if (this->inventory[i])
			{
				delete this->inventory[i];
				this->inventory[i] = NULL;
				if (existObject.inventory[i])
					this->inventory[i] = existObject.inventory[i]->clone();
			}
		}
		this->name = existObject.name;
	}
	return (*this);
}

void		Character::equip(AMateria* m)
{
	if (m == NULL)
	{
		std::cout << RED "The AMateria you want to equip is NULL\n" RESET;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			std::cout << inventory[i]->getType() + ITALIC LIGHT_GREEN  " has been " DOUBLE_UNDERLINE "EQUIPED" RESET ITALIC LIGHT_GREEN  " to the index "  << i << RESET "\n";
			return ;
		}
	}
	std::cout << RED << "There is no empty slots in the inventry \n" << RESET << "\n";
}

void		Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		std::cout << RED << "This index is out of range of the inventry \n" << RESET << "\n";
	else
	{
		if (this->inventory[idx] == NULL)
			std::cout << RED STRIKETHROUGH << "there is no inventory to unequipe \n" << RESET;
		else
		{
			std::cout << inventory[idx]->getType();
			std::cout << ITALIC LIGHT_GREEN " in the index " << idx << " has been " DOUBLE_UNDERLINE "UNEQUIPED\n" RESET;
			unequipedMateria.listAddBack(this->inventory[idx]);
			this->inventory[idx] = NULL;
		}
	}
}


void		Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		std::cout << RED << "This index is out of range of the inventry \n" << RESET << "\n";
	else
	{
		if (this->inventory[idx] == NULL)
			std::cout << RED << "This index is out of range of the inventry \n" << RESET << "\n";
		else
			this->inventory[idx]->use(target);
	}
}


Character::Character(std::string name)
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Character name constructor called]\n" <<  RESET;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	this->name = name ;
}

std::string const &	Character::getName() const {return (this->name);}
