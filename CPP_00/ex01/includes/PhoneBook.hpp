/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:42:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/12 20:11:17 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <cctype>
#include <string>
#include <cstdlib>
#include "Contact.hpp"


class PhoneBook: public Contact
{
	private:
		Contact Array[8];
		std::string	Command;
	public:
		void		add(int&);
		void		print_data(void);
		void		SetCommand(void);
		std::string	GetCommand(void);
		
		static void	PrintInstructions(void);
};

#endif