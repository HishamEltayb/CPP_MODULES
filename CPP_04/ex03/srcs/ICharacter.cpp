/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/17 17:21:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

ICharacter::~ICharacter(void)  
{
	std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[ICharacter Destructor called]\n" << RESET;
}

ICharacter::ICharacter(void)  
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH << "[ICharacter default Constructor called]\n" << RESET;
}
