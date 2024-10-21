/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 21:12:43 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::~ClapTrap(void) {std::cout << RED BOLD << "[Destructor called]\n" << RESET;}

ClapTrap::ClapTrap(void)
{
	std::cout << GREEN BOLD <<"[ClapTrap Default constructor called]\n" <<  RESET;
	this->name = "ClapTrap";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << GREEN BOLD <<"[ClapTrap overloaded constructor called]\n" <<  RESET;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &existObject)
{
	std::cout << YELLOW BOLD << "[Copy constructor called]\n" << RESET;
	*this = existObject;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &existObject)
{
	std::cout << MAGENTA BOLD "[Copy assignment operator called]\n" << RESET;
	this->name = existObject.name;
	this->hitPoints = existObject.hitPoints;
	this->energyPoints = existObject.energyPoints;
	this->attackDamage = existObject.attackDamage;
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target << " , causing " << this->attackDamage << " points of damage!\n";
		this->energyPoints--;
	}
	else
		std::cout << this->name << "No Energy to attack!\n";
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->hitPoints)
	{
		this->hitPoints = 0;
    	std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage and now has " << this->hitPoints << " hit points left.\n";
		std::cout << "HE IS DEAD\n";
	}
	else
	{
		this->hitPoints -= amount;
    	std::cout << "ClapTrap " << this->name << " has taken " << amount << " damage and now has " << this->hitPoints << " hit points left.\n";
	}
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->hitPoints += amount;
		this->energyPoints -= 1;
		std::cout << "ClapTrap " << this->name << " repairing " << this->hitPoints <<  " total points of health!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->name << " No Energy to repair!" << std::endl;
}
