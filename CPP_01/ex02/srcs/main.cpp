/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 13:42:43 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/05 11:59:51 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#define RED "\033[0;31m"
#define WHITE "\033[0;37m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"
#define RESET "\033[0m"


int main(void)
{
	std::string string("HI THIS IS BRAIN");
	std::string *stringPTR = &string;
	std::string &stringREF = string;
	
	
	//the value of string
	std::cout << "string(value)		--> ";
	std::cout << GREEN + string + RESET << std::endl;
	//the value of string
	
	//the value of address of string
	std::cout << BLUE BOLD;
	std::cout << "&";
	std::cout << RESET;
	std::cout << "string(address)	--> ";
	std::cout << GREEN;
	std::cout << &string << std::endl;
	std::cout << RESET;
	//the value of address of string


	std::cout << std::endl;
	std::cout << std::endl;
	
	
	//the value of stringPTR
	std::cout << BLUE BOLD;
	std::cout << "*";
	std::cout << RESET;
	std::cout << "stringPTR(value)	--> ";
	std::cout << GREEN + *stringPTR + RESET << std::endl;
	//the value of stringPTR
	
	//the value of address of stringPTR
	std::cout << "stringPTR(address)	--> ";
	std::cout << GREEN;
	std::cout << stringPTR << std::endl;
	std::cout << RESET;
	//the value of address of stringPTR


	std::cout << std::endl;
	std::cout << std::endl;


	//the value of stringREF
	std::cout << "stringREF(value)	--> ";
	std::cout << GREEN + stringREF + RESET << std::endl;
	//the value of stringREF
	
	//the value of address of stringREF
	std::cout << BLUE BOLD;
	std::cout << "&";
	std::cout << RESET;	
	std::cout << "stringREF(address)	--> ";
	std::cout << GREEN;
	std::cout << &stringREF << std::endl;
	std::cout << RESET;
	//the value of address of stringREF
	return (0);
}