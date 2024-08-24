/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 11:00:58 by heltayb           #+#    #+#             */
/*   Updated: 2024/08/24 15:38:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook book;

	PhoneBook::WelcomMessage();
	while (1)
	{
		PhoneBook::PrintInstructions();
		book.SetCommand();
		book.ProcessCommand();
	}
	return (0);
}
