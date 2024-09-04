/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:04:20 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/02 17:28:53 by heltayb          ###   ########.fr       */
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

Weapon::~Weapon(void) 
{
	std::cout << MAGENTA << "Weapon Destructor Called\n" << RESET;
}

Weapon::Weapon(std::string type) 
{
	this->type = type;
	std::cout << MAGENTA << "Weapon Constructor Called\n" << RESET;
}

Weapon::Weapon(void) {} 