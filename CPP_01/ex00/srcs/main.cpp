/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/31 20:14:56 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int main(void)
{
	Zombie *heap;
	
	randomChump("STACK");
	std::cout << WHITE BOLD;
	std::cout << "3. THE FIRST POINT AFTER EXITITNG THE randomChump FUNCTION IS HERE, SO THE DESTRUCTOR HAS BEEN CALLED\n";
	std::cout << RESET;
	
	heap = newZombie("HEAP");
	std::cout << WHITE BOLD;
	std::cout << "5. THIS IS THE FIRST POINT AFTER EXITING THE newZombie FUNCTION, AND THE HEAP ZOMBIE HAS NOT BEEN DESTROYED YET.\n";
	std::cout << RESET;

	delete (heap);
	std::cout << WHITE BOLD;
	std::cout << "6. THE HEAP ALLOCATION WILL BE DESTROYED AT THE END OF MAIN AFTER YOU FREE THE MEMORY.\n";
	std::cout << "7. IF YOU DO NOT FREE THE HEAP, THE ZOMBIE WILL NOT BE DESTROYED. TRY COMMENTING OUT THE DELETE STATEMENT.\n";
	std::cout << RESET;
	return (0);
}