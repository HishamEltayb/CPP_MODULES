/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contant.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:15:50 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/12 19:02:18 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define CYAN "\033[0;36m"
#define RESET "\033[0m"


 
class Contact
{
	private:
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	DarkestSecret;
		int			PhoneNumber;
	public:
		void		SetFirstName(std::string);
		void		SetLastName(std::string);
		void		SetNickName(std::string);
		void		SetDarkestSecret(std::string);
		void		SetPhoneNumber(int);
		std::string GetFirstName(void);
		std::string GetLastName(void);
		std::string GetNickName(void);
		std::string GetDarkestSecret(void);
		int			GetPhoneNumber(void);
};

#endif