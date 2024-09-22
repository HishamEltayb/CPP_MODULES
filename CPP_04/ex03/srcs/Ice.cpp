/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/17 17:21:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

Ice::~Ice(void)  
{
	std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[Ice Destructor called]\n" << RESET;
}

Ice::Ice(void) : AMateria()
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Ice Default constructor called]\n" <<  RESET;
	this->type = "ice";

}

Ice::Ice(const Ice &existObject) : AMateria()
{
	std::cout << ITALIC LIGHT_BLUE  << "[Ice Copy constructor called]\n" << RESET;
	*this = existObject;
}

Ice& Ice::operator=(const Ice &existObject)
{
	std::cout << ITALIC LIGHT_MAGENTA "[Ice Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->type = existObject.type; // plus
	return (*this);
}

AMateria* Ice::clone() const
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[Ice Clone member function called]\n" <<  RESET;
	AMateria *temp = new Ice(*this);
	return (temp);
}
