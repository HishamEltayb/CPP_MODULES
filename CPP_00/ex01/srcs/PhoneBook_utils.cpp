/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_utils.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:38:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/25 15:56:46 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



PhoneBook::PhoneBook(): index(0) {}
PhoneBook::~PhoneBook(){}

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

void	PhoneBook::PrintInstructions(void)
{
	std::cout << YELLOW BOLD;
	std::cout << "\n                     PhoneBook\n" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << "Please Enter one of the following commands:" << std::endl;
	std::cout << "1. ADD (To Add contact to The PhoneBook)" << std::endl;
	std::cout << "2. SEARCH (To Search contacts By Index)" << std::endl;
	std::cout << "3. EXIT (To Exit The PhoneBook)" << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;	
	std::cout << RESET;
}

void	PhoneBook::Reset(void)
{
	contact[this->index].Reset();
}