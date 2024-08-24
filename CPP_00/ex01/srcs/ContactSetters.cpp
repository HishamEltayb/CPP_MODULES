/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactSetters.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:17:02 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/24 17:04:33 by heltayb          ###   ########.fr       */
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
	this->PhoneNumber = PhoneNumber;
}
