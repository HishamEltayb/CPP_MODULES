  /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/04 11:10:42 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << MAGENTA << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n" << RESET;
}

void	Harl::info(void)
{
	std::cout << BLUE << "[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n" << RESET;
}

void	Harl::warning(void)
{
	std::cout << YELLOW << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n\n" << RESET;
}

void	Harl::error(void)
{
	std::cout << RED << "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n\n" << RESET;
}

void	Harl::finish(void)
{
	std::cout << WHITE BOLD << "[ Probably complaining about insignificant problems ]\n" << RESET;
}


void	Harl::complain(std::string level)
{	
	int i = 0;
	for (;!level.empty() && i < 5 && level != levels[i]; i++);
	
	switch(i)
	{
		case 1:
			(this->*comments[1])();
		// fall-through
		case 2:
			(this->*comments[2])();
		// intentional fall-through
		case 3:
			(this->*comments[3])();
		// intentional fall-through
		case 4:
			(this->*comments[4])();
			break;
		default:
			(this->*comments[0])();
	}
}

Harl::Harl(void)
{
	this->comments[0] = &Harl::finish;
	this->comments[1] = &Harl::debug;
	this->comments[2] = &Harl::info;
	this->comments[3] = &Harl::warning;
	this->comments[4] = &Harl::error;
	this->comments[5] = &Harl::finish;

	this->levels[0] = "FINISH";
	this->levels[1] = "DEBUG";
	this->levels[2] = "INFO";
	this->levels[3] = "WARNING";
	this->levels[4] = "ERROR";
	this->levels[5] = "FINISH";

}

Harl::~Harl(void){}
