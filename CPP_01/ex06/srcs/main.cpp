/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:01:13 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/04 17:55:17 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(int ac, char **av)
{
	Harl		harl;
	std::string	arg;
	
	if (ac == 2)
	{
		arg = av[1];
		harl.complain(arg);
	}
	else
	{
		std::cout << RED <<  "Wrong Number of arguments\n" << RESET;
	}
	return (0);
}