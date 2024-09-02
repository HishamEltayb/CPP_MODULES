/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:04:20 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/02 10:28:02 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const	std::string&  Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(void) 
{
	this->type = "";
	std::cout << MAGENTA;
	std::cout << "Weapon Constructor Called\n";
	std::cout << RESET;
}

Weapon::~Weapon(void) 
{
	std::cout << MAGENTA;
	std::cout << "Weapon Destructor Called\n";
	std::cout << RESET;
}
