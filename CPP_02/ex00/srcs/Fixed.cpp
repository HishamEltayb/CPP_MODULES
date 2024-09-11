/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/09 15:11:08 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed(void)
{
	this->floatPointNumber = 0;
	std::cout << GREEN BOLD <<"[Default constructor called]\n" <<  RESET;
}

Fixed::Fixed(const Fixed &existObject)
{
	std::cout << YELLOW BOLD << "[Copy constructor called]\n" << RESET;
	*this = existObject;
}

Fixed& Fixed::operator=(const Fixed &existObject)
{
	std::cout << MAGENTA BOLD "[Copy assignment operator called]\n" << RESET;
	this->floatPointNumber = existObject.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << RED BOLD << "[Destructor called]\n" << RESET;
}

int		Fixed::getRawBits(void) const
{
	std::cout << BLUE BOLD << "[getRawBits member function called]\n" << RESET;
	return (this->floatPointNumber);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << CYAN BOLD << "[setRawBits member function called]\n" << RESET;
	this->floatPointNumber = raw;	
}
