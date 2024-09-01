/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:11 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/01 13:35:20 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *newZombie = NULL;

	if (N <= 0 || name.empty())
		return (NULL);
	newZombie = new Zombie[N];
	if (!newZombie)
		return (NULL);
	for (int i = 0; i < N; i++)
		newZombie[i].setName(name);
	return (newZombie);
}
