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

#include "WrongAnimal.hpp"

WrongAnimal::~WrongAnimal(void) {std::cout << RED BOLD << "[WrongAnimal Destructor called]\n" << RESET;}

WrongAnimal::WrongAnimal(void)
{
	std::cout << GREEN BOLD <<"[WrongAnimal Default constructor called]\n" <<  RESET;
	this->type = BLUE "WrongAnimal" RESET;
}

WrongAnimal::WrongAnimal(const WrongAnimal &existObject)
{
	std::cout << YELLOW BOLD << "[WrongAnimal Copy constructor called]\n" << RESET;
	*this = existObject;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &existObject)
{
	std::cout << MAGENTA BOLD "[WrongAnimal Copy assignment operator called]\n" << RESET;
	this->type = existObject.type;
	return (*this);
}

std::string		WrongAnimal::getType(void) const {return (this->type);}

void			WrongAnimal::makeSound(void) const{std::cout << BLUE "WrongAnimal SOUND...!!\n" RESET;}