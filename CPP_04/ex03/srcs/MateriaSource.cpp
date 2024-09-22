/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/17 17:21:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

MateriaSource::~MateriaSource(void)
{
	std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[MateriaSource Destructor called]\n" << RESET;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

MateriaSource::MateriaSource(void)
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[MateriaSource Default constructor called]\n" <<  RESET;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &existObject)
{
	std::cout << ITALIC LIGHT_BLUE  << "[MateriaSource Copy constructor called]\n" << RESET;
	*this = existObject;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &existObject)
{
	if (this != &existObject)
	{
		std::cout << ITALIC LIGHT_MAGENTA "[MateriaSource Copy assignment operator called]\n" << RESET;
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i] == NULL)
		{
			this->inventory[i] = m;
			break ;
		}
		if (i == 3)
		{
			delete m;
			std::cout << "The inventory is full and the AMateria has been deleted\n";
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
		{
			if (this->inventory[i]->getType() == type)
				return (this->inventory[i]->clone());
		}
	}	
	std::cout << RED STRIKETHROUGH "There is no any materia with this type\n" RESET ;
	return (NULL);
}


