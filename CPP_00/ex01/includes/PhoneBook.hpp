/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:42:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/13 09:43:26 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
#include <sstream>
#include "Contact.hpp"


class PhoneBook: public Contact
{
	private:
		Contact Array[8];
		std::string	Command;
	public:
		void		add(int&);
		void		search(void);
		void		SetCommand(void);
		std::string	GetCommand(void);
		
		static void	PrintInstructions(void);
		static void	WelcomMessage(void);
};

#endif