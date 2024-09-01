/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/31 19:59:07 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *new_zombie;

	new_zombie = new Zombie(name);
	std::cout << WHITE BOLD;
	std::cout << "4. THE HEAP ZOMBIE HAS BEEN ALLOCATED ON THE HEAP TO BE ACCESSIBLE BEYOND THIS FUNCTION'S SCOPE.\n";
	std::cout << RESET;

	new_zombie->announce();
	return (new_zombie);
}