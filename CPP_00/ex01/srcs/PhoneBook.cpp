/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:38:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/27 11:08:11 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::StartPhonebook(void)
{
	this->status = 1;
	PhoneBook::WelcomMessage();
	while (this->status)
	{
		PhoneBook::PrintInstructions();
		SetCommand();
		ProcessCommand();
	}	
}

void PhoneBook::add(void)
{
	std::string temp;
	std::cout << BLUE BOLD "\nYOU CHOOSE TO ADD A CONTACT,\nLET US START.....\n" RESET << std::endl;
	if (!SetFirstName())
		return ;
	if (!SetLastName())
		return ;
	if (!SetNickName())
		return ;
	if (!SetDarkestSecret())
		return ;
	if (!SetPhoneNumber())
		return ;
}

void PhoneBook::search(void)
{
	std::string line;
	std::string temp;
	int index;
	
	GetTable();
	std::cout << CYAN "Please Enter the index of The Contact you want to Search" RESET << std::endl;
	std::getline(std::cin, line);
	std::istringstream(line) >> index;
	index--;
	if (index >= 8 || index < 0 || line.length() > 2)
		std::cout << RED BOLD "Please Enter the index from[1 - 8]" RESET << std::endl;
	else
	{
		temp = this->Contact[index].GetFirstName();
		if (temp.empty())
		{
			std::cout << RED BOLD<< "There is no Contact to SHOW\n" << RESET;
			return ;
		}
		GetFirstName(index);
		GetLastName(index);
		GetNickName(index);
		GetDarkestSecret(index);
		GetPhoneNumber(index);
	}
}
