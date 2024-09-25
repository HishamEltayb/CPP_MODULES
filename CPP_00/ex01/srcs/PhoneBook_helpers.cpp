/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_helpers.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:38:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/25 15:56:46 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



void	PhoneBook::SetCommand(void)
{
	std::getline(std::cin, this->Command);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, this->~PhoneBook(), exit(0));
	for (int i = 0; this->Command[i]; i++)
		this->Command[i] = static_cast<char>(std::tolower(this->Command[i]));	
}

void	PhoneBook::ProcessCommand(void)
{
	if (GetCommand() == "exit")
	{
		std::cout << MAGENTA BOLD"SAD TO SEE YOU LEAVE 😢" RESET << std::endl;
		this->status = 0;
		return ;
	}
	else if (GetCommand() == "add")
	{
		if (this->index == 8)
			this->index = 0;           
		add();
	}
	else if (GetCommand() == "search")
		search();
	else
		std::cout << RED BOLD "\nPlease Type One of The Commands ADD, SEARCH or EXIT !!" RESET << std::endl;
}

void	PhoneBook::GetTable(void)
{
	std::string temp;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "FirstName" << "|";
	std::cout << std::setw(10) << "LastName" << "|";
	std::cout << std::setw(10) << "NickName" << "|" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		temp = this->contact[i].GetFirstName();
		if (temp.length() > 10)
			temp.resize(9), temp += ".";
		else
			temp.resize(10, ' ');
		std::cout << std::setw(10) << temp << "|";
		temp = this->contact[i].GetLastName();
		if (temp.length() > 10)
			temp.resize(9), temp += ".";
		else
			temp.resize(10, ' ');
		std::cout << std::setw(10) << temp << "|";
		temp = this->contact[i].GetNickName();
		if (temp.length() > 10)
			temp.resize(9), temp += ".";
		else
			temp.resize(10, ' ');
		std::cout << std::setw(10) << temp << "|" << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
}
