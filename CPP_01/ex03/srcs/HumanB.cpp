/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:11 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/02 17:29:55 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(void)
{
	if (this->weapon == NULL || this->weapon->getType().empty())
		std::cout << RED << "HumanB does not have a weapon\n" << RESET;
	else
	{
		std::cout << BLUE + this->name + RESET;
		std::cout << " attacks with their ";
		std::cout << RED + this->weapon->getType() + RESET << std::endl;
	}
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
	this->name = name ;
	this->weapon = NULL;
	std::cout << GREEN << "HumanB Constructor Called\n" << RESET;
}

HumanB::~HumanB(void)
{
	std::cout << GREEN << "HumanB Destructor Called\n" << RESET;
}