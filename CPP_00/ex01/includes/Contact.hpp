/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:15:50 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/13 09:31:04 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"

#define RESET "\033[0m"


 
class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	DarkestSecret;
		std::string	PhoneNumber;
	public:
		Contact(void);
		~Contact(void);
		void		SetFirstName(std::string);
		void		SetLastName(std::string);
		void		SetNickName(std::string);
		void		SetDarkestSecret(std::string);
		void		SetPhoneNumber(std::string);
		std::string GetFirstName(void);
		std::string GetLastName(void);
		std::string GetNickName(void);
		std::string GetDarkestSecret(void);
		std::string	GetPhoneNumber(void);
};

#endif