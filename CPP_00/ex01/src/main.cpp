/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:00:58 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/13 09:12:23 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;
	int i;
	
	PhoneBook::WelcomMessage();
	PhoneBook::PrintInstructions();
	while (1)
	{
		book.SetCommand();
		if (book.GetCommand() == "exit")
			(std::cout << MAGENTA BOLD"SAD TO SEE YOU LEAVE 😢" RESET << std::endl, exit(0));
		else if (book.GetCommand() == "add")
		{
			if (i >= 8)
				i = 0;
			book.add(i);
		}
		else if (book.GetCommand() == "search")
			book.search();
		else
			std::cout << RED BOLD "\nPlease Type One of The Commands ADD, SEARCH or EXIT !!" RESET << std::endl;
		PhoneBook::PrintInstructions();
	}
	return (0);
}