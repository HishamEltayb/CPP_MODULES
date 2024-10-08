/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBookGetters.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:38:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/25 15:56:46 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"



void	PhoneBook::GetFirstName(int index)
{
	std::cout << UNDERLINE "The FirstName is	:	" RESET;
	std::cout << this->contact[index].GetFirstName() << std::endl;
}

void	PhoneBook::GetLastName(int index)
{
	std::cout << UNDERLINE "The LastName is		:	" RESET;
	std::cout << this->contact[index].GetLastName() << std::endl;
}

void	PhoneBook::GetNickName(int index)
{
	std::cout << UNDERLINE "The NickName is		:	" RESET;
	std::cout << this->contact[index].GetNickName() << std::endl;
}


void	PhoneBook::GetDarkestSecret(int index)
{
	std::cout << UNDERLINE "The DarkestSecret is	:	" RESET;
	std::cout << this->contact[index].GetDarkestSecret() << std::endl;
}

void	PhoneBook::GetPhoneNumber(int index)
{
	std::cout << UNDERLINE "The PhoneNumber is	:	" RESET;
	std::cout << this->contact[index].GetPhoneNumber() << std::endl;
}

std::string	PhoneBook::GetCommand(void)
{
	return (this->Command);
}
