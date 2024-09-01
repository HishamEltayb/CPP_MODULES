/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:11 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/31 19:58:17 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump( std::string name )
{
	Zombie new_zombie(name);
	std::cout << WHITE BOLD;
	std::cout << "1. THE STACK ZOMBIE HAS BEEN ALLOCATED LOCALLY ON THE STACK\n";
	std::cout << RESET;
	new_zombie.announce();
	std::cout << WHITE BOLD;
	std::cout << "2. THE STACK ZOMBIE WILL BE DESTROYED AS SOON AS THE FUNCTION SCOPE ENDS\n";
	std::cout << RESET;
}
