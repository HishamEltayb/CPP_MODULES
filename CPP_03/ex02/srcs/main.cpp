/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 22:25:12 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap a("hello");
	ScavTrap b("world");

	a.attack("human");
	a.takeDamage(10);
	a.beRepaired(10);
	a.highFivesGuys();
	
	b.attack("human");
	b.takeDamage(10);
	b.beRepaired(10);
	b.guardGate();
	return (0);
}