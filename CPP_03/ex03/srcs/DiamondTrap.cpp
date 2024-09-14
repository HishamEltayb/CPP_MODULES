/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:10:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 19:15:39 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::~DiamondTrap(void) {std::cout << RED BOLD << "[DiamondTrap Destructor called]\n" << RESET;}

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
	this->name = "DiamondTrap";
	this->ClapTrap::name = "ClapTrap_clap_name";
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << GREEN BOLD <<"[DiamondTrap Default constructor called]\n" <<  RESET;

}
DiamondTrap::DiamondTrap(const DiamondTrap& DiamondTrap) : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << YELLOW BOLD << "[DiamondTrap Copy constructor called]\n" << RESET;
	*this = DiamondTrap;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(), FragTrap(), ScavTrap()
{
	this->name = name;
	this->ClapTrap::name = name + "_clap_name";
	this->hitPoints = FragTrap::hitPoints;//100
	this->energyPoints = ScavTrap::energyPoints;//50
	this->attackDamage = FragTrap::attackDamage;//30
	std::cout << GREEN BOLD <<"[DiamondTrap overloaded constructor called]\n" <<  RESET;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& existObject)
{
	this->name = existObject.name;
	this->ClapTrap::name = existObject.ClapTrap::name;
	this->hitPoints = existObject.hitPoints;
	this->energyPoints = existObject.energyPoints;
	this->attackDamage = existObject.attackDamage;
	return (*this);
}

void		DiamondTrap::whoAmI(void)
{
	std::cout << RED << "DiamondTrap name: " << name << RESET << GREEN << " ClapTrap name: " << this->ClapTrap::name << RESET << std::endl;
}

