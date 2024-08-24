/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:42:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/24 15:38:12 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"


class PhoneBook
{
	private:
		int			index;
		std::string	Command;
		Contact 	Contact[8];

	public:
		//constructor and destructor
		PhoneBook();
		~PhoneBook();
		
		//member functions		
		void		add();
		void		search();
		
		void		Reset(void);
		void		SetCommand(void);
		void		ProcessCommand(void);

		std::string	GetCommand(void);
		//setters
		bool	SetNickName(void);
		bool	SetLastName(void);
		bool	SetFirstName(void);
		bool	SetPhoneNumber(void);
		bool	SetDarkestSecret(void);
		//getters
		void	GetTable(void);
		void	GetLastName(int);
		void	GetNickName(int);
		void	GetFirstName(int);
		void	GetPhoneNumber(int);
		void	GetDarkestSecret(int);
		//static functions
		static void	WelcomMessage(void);
		static void	PrintInstructions(void);
};

#endif