/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:38:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/12 20:17:57 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(int &index)
{
	std::string temp;
	std::cout << "Enter First Name:" << std::endl;
	std::getline(std::cin, temp);
	if (!temp.empty())
	{
		this->Array[index].SetFirstName(temp);
		std::cout << BLUE "First Name Has Been Added Successfully" RESET << std::endl;
		index++;
	}
	else
		std::cout << RED "You Entered Empty Name !!" RESET << std::endl;
		
}

void PhoneBook::print_data(void)
{
	std::string line;
	int index;
	std::cout << CYAN "Please Enter the index you want to print" RESET << std::endl;
	std::getline(std::cin, line);
	index = std::atoi(line.c_str());
	if (index >= 8)
		std::cout << RED "Please Enter the index from[0 - 7]" RESET << std::endl;
	else
	{
		line = this->Array[index].GetFirstName();
		if (line.empty())
			std::cout << RED "this index has nothing to show" RESET << std::endl;
		else
			std::cout << "The FirstName is :" << this->Array[index].GetFirstName() << std::endl;
	}
}

void	PhoneBook::PrintInstructions(void)
{
	std::cout << "\n                     PhoneBook\n" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Please Enter one of the following commands:" << std::endl;
	std::cout << "1. ADD" << std::endl << "2. SEARCH" << std::endl;
	std::cout << "3. EXIT" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;	
}

void	PhoneBook::SetCommand(void)
{
	std::getline(std::cin, this->Command);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, exit(0));
	for (int i = 0; this->Command[i]; i++)
		this->Command[i] = static_cast<char>(std::tolower(this->Command[i]));	
}

std::string	PhoneBook::GetCommand(void)
{
	return (this->Command);
}
