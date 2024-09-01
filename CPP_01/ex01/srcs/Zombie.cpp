/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:04:20 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/01 14:16:11 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void )
{
	std::cout << YELLOW BOLD ;
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	std::cout << RESET;
}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << GREEN BOLD;
	std::cout << this->name;
	std::cout << " --> [Has Been Created]";
	std::cout << RESET << std::endl;
}

Zombie::Zombie(void)
{
	std::cout << GREEN BOLD;
	std::cout << "[A Zombie has been created without a name being initialized]";
	std::cout << RESET << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << RED BOLD;
	std::cout << this->name;
	std::cout << " --> [Has Been Destroyed]";
	std::cout << RESET << std::endl;
}

void Zombie::setName(std::string name)
{
	if (!name.empty())
		this->name = name;
	else
	{
		std::cout << RED BOLD << "There is NO name to set it will be set to the default";
		std::cout << RESET << std::endl;
		this->name = "Default Name";
	}
}