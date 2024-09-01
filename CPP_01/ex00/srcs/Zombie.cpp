/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:04:20 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/31 18:11:21 by heltayb          ###   ########.fr       */
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

Zombie::~Zombie(void)
{
	std::cout << RED BOLD;
	std::cout << this->name;
	std::cout << " --> [Has Been Destroyed]";
	std::cout << RESET << std::endl;
}
