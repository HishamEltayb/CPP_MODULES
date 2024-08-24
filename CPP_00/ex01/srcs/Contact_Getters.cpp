/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Getters.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:17:02 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/24 17:04:35 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"



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
