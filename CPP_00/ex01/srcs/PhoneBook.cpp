/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:38:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/24 16:04:49 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add()
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

void PhoneBook::search()
{
	std::string line;
	int index;
	
	std::cout << CYAN "Please Enter the index of The Contact you want to Search" RESET << std::endl;
	std::getline(std::cin, line);
	std::istringstream(line) >> index;
	index--;
	if (index >= 8 || index < 0 || line.length() > 2)
		std::cout << RED BOLD "Please Enter the index from[1 - 8]" RESET << std::endl;
	else
	{
		GetFirstName(index);
		GetLastName(index);
		GetNickName(index);
		GetDarkestSecret(index);
		GetPhoneNumber(index);
	}
}