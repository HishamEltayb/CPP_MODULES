/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/02 09:40:57 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv)
{
	try 
	{
		std::string msg = RED BOLD "Wrong Number of Parameters\n" RESET;
		msg += RED BOLD "Usage: ./ScalarConverter <argument>\n" RESET;
		if (argc != 2)
			throw msg;
    	ScalarConverter::convert(argv[1]);
	}
	catch (std::exception &error)
	{
		std::cout << error.what() << "\n";
	}
	catch (std::string &error)
	{
		std::cout << error;
	}
	catch (...)
	{
		std::cout << RED "ERROR: EXCEPTION HAS BEEN DETECTED" RESET << "\n";
	}
    return (0);
}
