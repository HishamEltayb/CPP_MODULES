/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:01:13 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/04 16:02:06 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


int main(void)
{
	Harl	harl;
	
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("asd");
	harl.complain("");
	
	return (0);
}