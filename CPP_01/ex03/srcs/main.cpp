/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/05 12:29:23 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}


	
	// Weapon weapon("AKM");
	// std::cout << weapon.getType() << std::endl;
	// std::cout << "\n\n\n";

	// HumanA human_A("HUMAN A", weapon);
	// human_A.attack();
	// std::cout << "\n\n\n";
	
	// HumanB human_B("HUMAN B");
	// human_B.attack();
	// std::cout << "\n\n\n";
	
	// human_B.setWeapon(weapon);
	// human_B.attack();
	// std::cout << "\n\n\n";
	// weapon.setType("NOT AKM");
	// human_B.attack();
	// human_A.attack();
	// std::cout << "\n\n\n";
	
	return (0);
}