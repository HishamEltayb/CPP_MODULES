/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:11 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/02 17:30:40 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(void)
{
	std::cout << BLUE + this->name + RESET << " attacks with their ";
	std::cout << RED + this->weapon.getType() + RESET << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon), name(name)
{
	std::cout << CYAN << "HumanA Constructor Called\n" << RESET;
}

HumanA::~HumanA(void)
{
	std::cout << CYAN << "HumanA Destructor Called\n" << RESET;
}