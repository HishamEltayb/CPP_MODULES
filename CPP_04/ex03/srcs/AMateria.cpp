/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/22 13:30:54 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

AMateria::~AMateria(void) {std::cout << ITALIC LIGHT_WHITE STRIKETHROUGH << "[AMateria Destructor called]\n" << RESET;}

AMateria::AMateria(void)
{
	std::cout << ITALIC LIGHT_GREEN STRIKETHROUGH <<"[AMateria Default constructor called]\n" <<  RESET;
	this->type = "AMateria";
}

AMateria::AMateria(const AMateria &existObject)
{
	std::cout << ITALIC LIGHT_BLUE  << "[AMateria Copy constructor called]\n" << RESET;
	*this = existObject;
}

AMateria& AMateria::operator=(const AMateria &existObject)
{
	std::cout << ITALIC LIGHT_MAGENTA "[AMateria Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->type = existObject.type;//plus
	return (*this);
}

AMateria::AMateria(std::string const &type)
{
	std::cout << YELLOW BOLD << "[AMateria Copy type constructor called]\n" << RESET;
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << PINK "[AMatria::use]\n" RESET;
	if (this->type == "cure")
		std::cout << this->type + "--> * heals " << target.getName() << "’s wounds *\n";
	else if (this->type == "ice")
		std::cout << this->type + "--> * shoots an ice bolt at " << target.getName() << " *\n";
}
