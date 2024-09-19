/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/17 17:21:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog(void)  {std::cout << RED BOLD << "[Dog Destructor called]\n" << RESET;}

Dog::Dog(void) : Animal()
{
	std::cout << GREEN BOLD <<"[Dog Default constructor called]\n" <<  RESET;
	this->type = MAGENTA "Dog" RESET;
}

Dog::Dog(const Dog &existObject) : Animal()
{
	std::cout << YELLOW BOLD << "[Dog Copy constructor called]\n" << RESET;
	*this = existObject;
}

Dog& Dog::operator=(const Dog &existObject)
{
	std::cout << MAGENTA BOLD "[Dog Copy assignment operator called]\n" << RESET;
	this->type = existObject.type;
	return (*this);
}

void	Dog::makeSound(void) const {std::cout << MAGENTA "WOOF WOOF ...!!\n" RESET;}