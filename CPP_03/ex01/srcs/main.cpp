/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 21:23:50 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap a("hello");
	
	a.attack("human");
	a.takeDamage(100);
	a.beRepaired(10);


	
	ScavTrap b("world");
	b.attack("enemy");
	b.takeDamage(100);
	b.beRepaired(10);
	b.guardGate();

	return (0);
}