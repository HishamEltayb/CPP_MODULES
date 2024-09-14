/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 22:34:15 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap a("Dimond");
		
	//ClapTrap class
	a.attack("asd");

	//DiamondTrap class
	a.whoAmI();

	//FragTrap class
	a.guardGate();
	
	//ScavTrap class
	a.highFivesGuys();

	return (0);	
}