/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/02 11:15:06 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
	Weapon weapon;

	weapon.setType("AKM");
	std::cout << weapon.getType() << std::endl;
	HumanA human_A("HUMAN A", "GUN");
	HumanB human_B("HUMAN B");
	human_B.attack();
	human_B.setWeapon("Knife");
	human_B.attack();
	human_A.attack();
	return (0);
}