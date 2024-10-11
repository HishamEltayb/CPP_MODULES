/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/10 19:10:41 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	std::string name = "Hisham";
	std::string nickName = "heltayb";
	
	Data data(name, nickName, 29, false);
	std::cout << data;
	std::cout << "\n\n";
	uintptr_t ptr = Serializer::serialize(&data);
	Data *check = reinterpret_cast<Data *>(ptr);
	
	std::cout << CYAN BOLD << ptr << "\n";
	std::cout << CYAN BOLD << reinterpret_cast<uintptr_t>(check) << "\n";
	std::cout << "\n\n";
	
	std::cout << MAGENTA BOLD "0x" << std::hex << ptr << "\n" << RESET;
	std::cout << MAGENTA BOLD << check << "\n" << RESET;
	std::cout << "\n\n";

	std::cout << *check;
	std::cout << "\n\n";
	
	Data copy(*Serializer::deserialize(ptr));
	std::cout << copy;
	std::cout << "\n\n";

	
}