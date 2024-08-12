/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:00:58 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/12 20:06:01 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int main(void)
{
	PhoneBook book;
	int i;
	

	PhoneBook::PrintInstructions();
	while (1)
	{
		book.SetCommand();
		if (book.GetCommand() == "exit")
		{
			std::cout << "exited from exit function" << std::endl;
			exit(0);
		}
		else if (book.GetCommand() == "add")
		{
			if (i >= 8)
				i = 0;
			book.add(i);
				
		}
		else if (book.GetCommand() == "print")
			book.print_data();
		else
		{
			std::cout << RED "Please choose a right command" RESET << std::endl;
			PhoneBook::PrintInstructions();
		}
	}
	return (0);
}