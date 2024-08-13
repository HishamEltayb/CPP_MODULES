/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:17:02 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/13 09:57:03 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::SetFirstName(std::string FirstName)
{
	this->FirstName = FirstName;
}

void	Contact::SetLastName(std::string LastName)
{
	this->LastName = LastName;
}

void	Contact::SetNickName(std::string NickName)
{
	this->NickName = NickName;
}

void	Contact::SetDarkestSecret(std::string DarkestSecret)
{
	this->DarkestSecret = DarkestSecret;
}

void	Contact::SetPhoneNumber(std::string PhoneNumber)
{
	if (PhoneNumber.length() == 10 && (std::all_of(PhoneNumber.begin(), PhoneNumber.end(), ::isdigit)))
	{
		this->PhoneNumber = PhoneNumber;
	}
	else
	{
		std::cout << RED BOLD "The PhoneNumber should be 10 digits\n" RESET;
		std::cout << RED BOLD "This Contact Has Not Been Saved\n" RESET;
		Contact::~Contact();
		return ;
	}
	
}

std::string Contact::GetFirstName(void)
{
	return (this->FirstName);
}

std::string Contact::GetLastName(void)
{
	return (this->LastName);
}

std::string Contact::GetNickName(void)
{
	return (this->NickName);
}

std::string Contact::GetDarkestSecret(void)
{
	return (this->DarkestSecret);
}

std::string Contact::GetPhoneNumber(void)
{
	return (this->PhoneNumber);
}

Contact::Contact(void)
{
	FirstName = "";
	LastName = "";
	NickName = "";
	DarkestSecret = "";
	PhoneNumber = "";
}
Contact::~Contact(void)
{
	FirstName = "";
	LastName = "";
	NickName = "";
	DarkestSecret = "";
	PhoneNumber = "";
}