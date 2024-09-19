/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/17 17:21:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::~Animal(void) {std::cout << RED BOLD << "[Animal Destructor called]\n" << RESET;}

Animal::Animal(void)
{
	std::cout << GREEN BOLD <<"[Animal Default constructor called]\n" <<  RESET;
	this->type = BLUE "Animal" RESET;
}

Animal::Animal(const Animal &existObject)
{
	std::cout << YELLOW BOLD << "[Animal Copy constructor called]\n" << RESET;
	*this = existObject;
}

Animal& Animal::operator=(const Animal &existObject)
{
	std::cout << MAGENTA BOLD "[Animal Copy assignment operator called]\n" << RESET;
	this->type = existObject.type;
	return (*this);
}

std::string		Animal::getType(void) const {return (this->type);}

void			Animal::makeSound(void) const{std::cout << BLUE "ANIMAL SOUND...!!\n" RESET;}


