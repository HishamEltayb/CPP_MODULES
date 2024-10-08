/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:42:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/25 15:55:19 by heltayb          ###   ########.fr       */
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
		bool		status;
		std::string	Command;
		Contact 	contact[8];

		//member functions		
		void		add();
		void		search();
		void		Reset(void);
		void		SetCommand(void);
		void		ProcessCommand(void);
		void		GetTable(void);
		std::string	GetCommand(void);

		//setters
		bool		SetNickName(void);
		bool		SetLastName(void);
		bool		SetFirstName(void);
		bool		SetPhoneNumber(void);
		bool		SetDarkestSecret(void);
		//getters
		void		GetLastName(int);
		void		GetNickName(int);
		void		GetFirstName(int);
		void		GetPhoneNumber(int);
		void		GetDarkestSecret(int);
		
		//static functions
		static void	WelcomMessage(void);
		static void	PrintInstructions(void);
	
	public:
		//constructor and destructor
		PhoneBook();
		~PhoneBook();
		void		StartPhonebook();


	
};

#endif