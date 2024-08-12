/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:17:02 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/12 19:53:01 by heltayb          ###   ########.fr       */
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

void	Contact::SetPhoneNumber(int PhoneNumber)
{
	this->PhoneNumber = PhoneNumber;
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

int Contact::GetPhoneNumber(void)
{
	return (this->PhoneNumber);
}

