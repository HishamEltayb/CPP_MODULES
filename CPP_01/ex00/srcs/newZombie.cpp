/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/01 13:49:58 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	Zombie *new_zombie = NULL;

	new_zombie = new (std::nothrow) Zombie(name);
	if (!new_zombie)
		return (NULL);
	std::cout << WHITE BOLD;
	std::cout << "4. THE HEAP ZOMBIE HAS BEEN ALLOCATED ON THE HEAP TO BE ACCESSIBLE BEYOND THIS FUNCTION'S SCOPE.\n";
	std::cout << RESET;
	new_zombie->announce();
	return (new_zombie);
}