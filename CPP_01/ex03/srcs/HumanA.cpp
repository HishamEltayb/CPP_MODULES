/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:11 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/02 10:29:43 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << BLUE + this->name + RESET;
	std::cout << " attacks with their ";
	std::cout << RED + this->weapon.getType() + RESET << std::endl;
}

HumanA::HumanA(std::string name, std::string weapon)
{
	this->name = name ;
	this->weapon.setType(weapon);

	std::cout << CYAN;
	std::cout << "HumanA Constructor Called\n";
	std::cout << RESET;
		
}

HumanA::~HumanA(void)
{
	std::cout << CYAN;
	std::cout << "HumanA Destructor Called\n";
	std::cout << RESET;
}