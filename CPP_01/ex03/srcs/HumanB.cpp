/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:11 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/02 10:58:24 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (this->weapon.getType().empty())
	{
		std::cout << RED;
		std::cout << "HumanB does not have a weapon\n";
		std::cout << RESET;
	}
	else
	{
		std::cout << BLUE + this->name + RESET;
		std::cout << " attacks with their ";
		std::cout << RED + this->weapon.getType() + RESET << std::endl;
	}
}

void	HumanB::setWeapon(std::string weapon)
{
	this->weapon.setType(weapon);
}

HumanB::HumanB(std::string name)
{
	this->name = name ;

	std::cout << GREEN;
	std::cout << "HumanB Constructor Called\n";
	std::cout << RESET;	
}

HumanB::~HumanB(void)
{
	std::cout << GREEN;
	std::cout << "HumanB Destructor Called\n";
	std::cout << RESET;	
}