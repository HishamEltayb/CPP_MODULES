/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/11 23:06:33 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::~Fixed(void) {}

Fixed::Fixed(void) {this->fixedPointNumber = 0;}

Fixed::Fixed(const Fixed &existObject) {this->fixedPointNumber = existObject.fixedPointNumber;}

Fixed::Fixed(const int intNumber)
{
	if (intNumber > 8388607)
		this->fixedPointNumber = 0;
	else if (intNumber < -8388608)
		this->fixedPointNumber = 0;
	else
		this->fixedPointNumber = intNumber << this->fractionalBits;
}

Fixed::Fixed(const float floatNumber)
{
	if (floatNumber > 8388607)
		this->fixedPointNumber = 0;
	else if (floatNumber < -8388608)
		this->fixedPointNumber = 0;
	else 
		this->fixedPointNumber = roundf(floatNumber * (1 << this->fractionalBits));
}


Fixed &Fixed::operator=(const Fixed &existObject) 
{
	this->fixedPointNumber = existObject.fixedPointNumber;
    return (*this);
}

int Fixed::getRawBits(void) const {return (this->fixedPointNumber);}
 
void Fixed::setRawBits(int const raw) {this->fixedPointNumber = raw;}

float Fixed::toFloat(void) const {return (this->fixedPointNumber / static_cast<float>(1 << this->fractionalBits));}

int Fixed::toInt(void) const {return (this->fixedPointNumber >> this->fractionalBits);}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return (out);
}

bool Fixed::operator>(const Fixed &existObject) const
{
	if (this->fixedPointNumber > existObject.fixedPointNumber)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &existObject) const
{
	if (this->fixedPointNumber < existObject.fixedPointNumber)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &existObject) const
{
	if (this->fixedPointNumber >= existObject.fixedPointNumber)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &existObject) const
{
	if (this->fixedPointNumber <= existObject.fixedPointNumber)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &existObject) const
{
	if (this->fixedPointNumber == existObject.fixedPointNumber)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &existObject) const
{
	if (this->fixedPointNumber != existObject.fixedPointNumber)
		return (true);
	return (false);
}

Fixed	Fixed::operator+(const Fixed &existObject) const
{
	Fixed sum;
	
	sum.fixedPointNumber = this->fixedPointNumber + existObject.fixedPointNumber;
	return (sum);
}

Fixed	Fixed::operator-(const Fixed &existObject) const
{
	Fixed sub;

	sub.fixedPointNumber = this->fixedPointNumber - existObject.fixedPointNumber;
	return (sub);
}

Fixed	Fixed::operator*(const Fixed &existObject) const
{
	Fixed mult;
	float floatNumber;

	floatNumber = (this->toFloat() * existObject.toFloat());
	mult.fixedPointNumber = roundf(floatNumber * (1 << this->fractionalBits));
	return (mult);
}

Fixed	Fixed::operator/(const Fixed &existObject) const
{
	Fixed div;
	float floatNumber;

	floatNumber = (this->toFloat() / existObject.toFloat());
	div.fixedPointNumber = roundf(floatNumber * (1 << this->fractionalBits));
	return (div);
}

Fixed& 			Fixed::operator++(void)
{
	this->fixedPointNumber = this->fixedPointNumber + 1;
	return (*this);
}

Fixed& 			Fixed::operator--(void)
{
	this->fixedPointNumber = this->fixedPointNumber - 1;
	return (*this);
}

Fixed 			Fixed::operator++(int)
{
	Fixed prevValue;

	prevValue.fixedPointNumber = this->fixedPointNumber;
	this->fixedPointNumber = this->fixedPointNumber + 1;
	return (prevValue);
}

Fixed 			Fixed::operator--(int)
{
	Fixed prevValue;

	prevValue.fixedPointNumber = this->fixedPointNumber;
	this->fixedPointNumber = this->fixedPointNumber - 1;
	return (prevValue);

}

Fixed& Fixed::min(Fixed &object1, Fixed &object2)
{
	if (object1 < object2)
		return (object1);
	return (object2);
}

const Fixed& Fixed::min(const Fixed &object1, const Fixed &object2)
{
	if (object1 < object2)
		return (object1);
	return (object2);
}

Fixed& Fixed::max(Fixed &object1, Fixed &object2)
{
	if (object1 > object2)
		return (object1);
	return (object2);
}

const Fixed& Fixed::max(const Fixed &object1, const Fixed &object2)
{
	if (object1 > object2)
		return (object1);
	return (object2);
}
