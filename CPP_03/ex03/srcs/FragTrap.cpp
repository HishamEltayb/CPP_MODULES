/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:10:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 19:15:39 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::~FragTrap(void) {std::cout << RED BOLD << "[FragTrap Destructor called]\n" << RESET;}

FragTrap::FragTrap(void) : ClapTrap()
{
	this->name = "FragTrap";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << GREEN BOLD <<"[FragTrap Default constructor called]\n" <<  RESET;

}
FragTrap::FragTrap(const FragTrap& fragtrap) : ClapTrap() 
{
	std::cout << YELLOW BOLD << "[FragTrap Copy constructor called]\n" << RESET;
	*this = fragtrap;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << GREEN BOLD <<"[FragTrap overloaded constructor called]\n" <<  RESET;
}

FragTrap&	FragTrap::operator=(const FragTrap& existObject)
{
	this->name = existObject.name;
	this->hitPoints = existObject.hitPoints;
	this->energyPoints = existObject.energyPoints;
	this->attackDamage = existObject.attackDamage;
	return (*this);
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << BLUE << "FragTrap " << RESET << this->name << " high fives guys!" << std::endl;
}
