/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:38:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/13 09:58:51 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add(int &index)
{
	std::string temp;
	std::cout << BLUE BOLD "\nYOU CHOOSED TO ADD A CONTACT,\nLET US START.....\n" RESET << std::endl;
	std::cout << MAGENTA UNDERLINE "Enter First Name:" RESET << std::endl;
	std::getline(std::cin, temp);
	this->Array[index].SetFirstName(temp);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, exit(0));

	
	std::cout << MAGENTA UNDERLINE "Enter Last Name:" RESET << std::endl;
	std::getline(std::cin, temp);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, exit(0));
	this->Array[index].SetLastName(temp);

	std::cout << MAGENTA UNDERLINE "Enter Nick Name:" RESET << std::endl;
	std::getline(std::cin, temp);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, exit(0));
	this->Array[index].SetNickName(temp);

	std::cout << MAGENTA UNDERLINE "Enter DarkestSecret:" RESET << std::endl;
	std::getline(std::cin, temp);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, exit(0));
	this->Array[index].SetDarkestSecret(temp);
		
	std::cout << MAGENTA UNDERLINE "Enter PhoneNumber:" RESET << std::endl;
	std::getline(std::cin, temp);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, exit(0));
	this->Array[index].SetPhoneNumber(temp);
	if (this->Array[index].GetPhoneNumber() != "")
	{
		std::cout << GREEN UNDERLINE BOLD "Contact Has Been Added Successfully" RESET << std::endl;
		index++;
	}
}

void PhoneBook::search(void)
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
		std::cout << UNDERLINE "The FirstName is	:	" RESET << this->Array[index].GetFirstName() << std::endl;
		std::cout << UNDERLINE "The LastName is		:	" RESET << this->Array[index].GetLastName() << std::endl;
		std::cout << UNDERLINE "The NickName is		:	" RESET << this->Array[index].GetNickName() << std::endl;
		std::cout << UNDERLINE "The DarkestSecret is	:	" RESET << this->Array[index].GetDarkestSecret() << std::endl;
		std::cout << UNDERLINE "The PhoneNumber is	:	" RESET << this->Array[index].GetPhoneNumber() << std::endl;
	}
}

void	PhoneBook::PrintInstructions(void)
{
	std::cout << YELLOW BOLD;
	std::cout << "\n                     PhoneBook\n" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Please Enter one of the following commands:" << std::endl;
	std::cout << "1. ADD (To Add Contact to The PhoneBook)" << std::endl;
	std::cout << "2. SEARCH (To Search Contacts By Index)" << std::endl;
	std::cout << "3. EXIT (To Exit The PhoneBook)" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;	
	std::cout << RESET;
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


void	PhoneBook::WelcomMessage(void)
{
	std::cout << BOLD "This PhoneBook Software Desigend in C++." << std::endl;
	std::cout << BOLD UNDERLINE "How it works:" RESET << std::endl;
	std::cout << "- It can save up to 8 contacts in the memory." << std::endl;
	std::cout << "- To save a contact you need (FirstName, LastName, NickName, DarkestSecret, PhoneNumber)" << std::endl;
	std::cout << "- This Software interacts with the user by accepting 3 commands" << std::endl;
	std::cout << "- The Commands are " UNDERLINE "ADD, SEARCH and EXIT." RESET << std::endl;
	std::cout << MAGENTA BOLD"\nWelcome To The 80s and Their Unbelievable Technology!" RESET << std::endl;
}