/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/17 17:21:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Cure::~Cure(void)  
{
	std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[Cure Destructor called]\n" << RESET;
}

Cure::Cure(void) : AMateria()
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Cure Default constructor called]\n" <<  RESET;
	this->type = "cure";

}

Cure::Cure(const Cure &existObject) : AMateria()
{
	std::cout << ITALIC LIGHT_BLUE  << "[Cure Copy constructor called]\n" << RESET;
	*this = existObject;
}

Cure& Cure::operator=(const Cure &existObject)
{
	std::cout << ITALIC LIGHT_MAGENTA "[Cure Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->type = existObject.type;//plus
	// AMateria::operator=(existObject);//plus
	return (*this);
}

AMateria* Cure::clone() const
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Cure Clone member function called]\n" <<  RESET;
	AMateria *temp = new Cure(*this);
	return (temp);
}
