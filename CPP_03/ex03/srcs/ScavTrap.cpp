/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 17:40:12 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 22:34:06 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::~ScavTrap(void) {std::cout << RED BOLD << "[ScavTrap Destructor called]\n" << RESET;}

ScavTrap::ScavTrap(void) : ClapTrap() 
{
	std::cout << GREEN BOLD <<"[ScavTrap Default constructor called]\n" <<  RESET;
	this->name = "ScavTrap";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap()
{
	std::cout << GREEN BOLD <<"[ScavTrap overloaded constructor called]\n" <<  RESET;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &existObject) : ClapTrap() 
{
	std::cout << YELLOW BOLD << "[ScavTrap Copy constructor called]\n" << RESET;
	*this = existObject;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &existObject)
{
	std::cout << MAGENTA BOLD "[Copy assignment operator called]\n" << RESET;
	this->name = existObject.name;
	this->hitPoints = existObject.hitPoints;
	this->energyPoints = existObject.energyPoints;
	this->attackDamage = existObject.attackDamage;
	return (*this);
}

void 		ScavTrap::guardGate(void)
{
	std::cout << YELLOW << "ScavTrap " << RESET << this->name << " is now in Gate keeper mode." << std::endl;
}

void		ScavTrap::attack(const std::string& target)
{

	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << YELLOW << "ScavTrap " << RESET << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints -= 1;
	}
	else
		std::cout << YELLOW << this->name << RESET << " No Energy to attack!" << std::endl;
}











