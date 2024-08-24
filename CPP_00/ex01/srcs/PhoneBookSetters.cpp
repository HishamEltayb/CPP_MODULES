/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookSetters.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:38:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/24 17:04:43 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



bool	PhoneBook::SetFirstName(void)
{
	std::string temp;

	std::cout << MAGENTA UNDERLINE "Enter First Name:" RESET << std::endl;
	std::getline(std::cin, temp);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, this->~PhoneBook(), exit(0));
	if (temp.empty())
	{
		std::cout << RED BOLD "The FirstName should not be empty\n" RESET;
		std::cout << RED BOLD "This Contact Has Not Been Saved\n" RESET;
		Reset();
		return (false);
	}
	this->Contact[this->index].SetFirstName(temp);
	return (true);
}

bool	PhoneBook::SetLastName(void)
{
	std::string temp;

	std::cout << MAGENTA UNDERLINE "Enter Last Name:" RESET << std::endl;
	std::getline(std::cin, temp);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, this->~PhoneBook(), exit(0));
	if (temp.empty())
	{
		std::cout << RED BOLD "The LastName should not be empty\n" RESET;
		std::cout << RED BOLD "This Contact Has Not Been Saved\n" RESET;
		Reset();
		return (false);
	}
	this->Contact[this->index].SetLastName(temp);
	return (true);
}

bool	PhoneBook::SetNickName(void)
{
	std::string temp;

	std::cout << MAGENTA UNDERLINE "Enter Nick Name:" RESET << std::endl;
	std::getline(std::cin, temp);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, this->~PhoneBook(), exit(0));
	if (temp.empty())
	{
		std::cout << RED BOLD "The NickName should not be empty\n" RESET;
		std::cout << RED BOLD "This Contact Has Not Been Saved\n" RESET;
		Reset();
		return (false);
	}
	this->Contact[this->index].SetNickName(temp);
	return (true);
}

bool	PhoneBook::SetDarkestSecret(void)
{
	std::string temp;

	std::cout << MAGENTA UNDERLINE "Enter DarkestSecret:" RESET << std::endl;
	std::getline(std::cin, temp);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, this->~PhoneBook(), exit(0));
	if (temp.empty())
	{
		std::cout << RED BOLD "The DarkestSecret should not be empty\n" RESET;
		std::cout << RED BOLD "This Contact Has Not Been Saved\n" RESET;
		Reset();
		return (false);
	}
	this->Contact[this->index].SetDarkestSecret(temp);
	return (true);
}

bool	PhoneBook::SetPhoneNumber(void)
{
	std::string temp;

	std::cout << MAGENTA UNDERLINE "Enter PhoneNumber:" RESET << std::endl;
	std::getline(std::cin, temp);
	if (std::cin.eof())
		(std::cout << GREEN "SAYONARA!!" RESET << std::endl, this->~PhoneBook(), exit(0));
	if (temp.empty())
	{
		std::cout << RED BOLD "The PhoneNumber should not be empty\n" RESET;
		std::cout << RED BOLD "This Contact Has Not Been Saved\n" RESET;
		Reset();
		return (false);
	}
	if (temp.length() == 10)
	{
		for (int i = 0; temp[i]; i++)
		{
			if (!std::isdigit(temp[i]))
			{
				std::cout << RED BOLD "The PhoneNumber should contain only digits\n" RESET;
				std::cout << RED BOLD "This Contact Has Not Been Saved\n" RESET;
				Reset();
				return (false);

			}
		}
		this->Contact[this->index].SetPhoneNumber(temp);
	}
	else
	{
		std::cout << RED BOLD "The PhoneNumber should be 10 digits\n" RESET;
		std::cout << RED BOLD "This Contact Has Not Been Saved\n" RESET;
		Reset();
		return (false);
	}
	std::cout << GREEN UNDERLINE BOLD "Contact Has Been Added Successfully" RESET << std::endl;
	index++;
	return (true);
}
