/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/19 09:06:01 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::~WrongCat(void)  {std::cout << RED BOLD << "[WrongCat Destructor called]\n" << RESET;}

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << GREEN BOLD <<"[WrongCat Default constructor called]\n" <<  RESET;
	this->type = YELLOW "WrongCat" RESET;
}

WrongCat::WrongCat(const WrongCat &existObject) : WrongAnimal()
{
	std::cout << YELLOW BOLD << "[WrongCat Copy constructor called]\n" << RESET;
	*this = existObject;
}

WrongCat& WrongCat::operator=(const WrongCat &existObject)
{
	std::cout << MAGENTA BOLD "[WrongCat Copy assignment operator called]\n" << RESET;
	this->type = existObject.type;
	return (*this);
}

void	WrongCat::makeSound(void) const {std::cout << YELLOW "MEOW ...!!\n" RESET;}
