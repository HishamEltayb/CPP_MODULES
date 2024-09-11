/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/11 14:37:32 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//(x << 8) 	=	x * 256 [left shifting]
//(x >> 8)	=	x / 256 [right shifting]

const int Fixed::fractionalBits = 8;

Fixed::~Fixed(void) {}
// {std::cout << RED BOLD << "[Destructor called]\n" << RESET;}

Fixed::Fixed(void)
{
	this->fixedPointNumber = 0;
	// std::cout << GREEN BOLD << "[Default constructor called]\n" <<  RESET;
}

//we want to shift left by 8 to make a space for the point because the int is (0000 0010) ==> (0000 0010 0000 0000) 2 ==> 512
//this is the same of intNumber * pow(2, this->fractionalBits) ==> 2^this->fractionalBits
// this->fixedPointNumber = intNumber * 256;

Fixed::Fixed(const int intNumber)
{
	if (intNumber > 8388607)
	{
		std::cout << RED BOLD << "[The number exceeds the maximum limit; we only have 3 bytes for the int. It will be initialized to 0.]\n";
		this->fixedPointNumber = 0;
	}
	else if (intNumber < -8388608)
	{
		std::cout << RED BOLD << "[The number is smaller than the minimum limit; we only have 3 bytes for the int. It will be initialized to 0.]\n";
		this->fixedPointNumber = 0;
	}
	else
		this->fixedPointNumber = intNumber << this->fractionalBits;
	std::cout << GREEN BOLD << "[Int constructor called]\n" <<  RESET;
}

//we want to shift left by 8 to make a space for the point because the float is fo ex (00000010 . 0001000) ==> (00000010 00001000 . 00000000) 2.8 ==> 520
//and then we round it to the nearest int by the math function roundf
//this is the same of 
// this->fixedPointNumber = roundf(floatNumber * pow(2, this->fractionalBits)) ==> (2^this->fractionalBits)
// this->fixedPointNumber = roundf(floatNumber * 256);
// this->fixedPointNumber = roundf((int)floatNumber << this->fractionalBits);
// and here we put the (int) cast for the float because the bit shifting is just for integers and it will give us a compilation error when we implement it on float number
// this->fixedPointNumber = roundf(floatNumber * 256);

Fixed::Fixed(const float floatNumber)
{
	if (floatNumber > 8388607)
	{
		std::cout << RED BOLD << "[The number exceeds the maximum limit; we only have 3 bytes for the float. It will be initialized to 0.]\n";
		this->fixedPointNumber = 0;
	}
	else if (floatNumber < -8388608)
	{
		std::cout << RED BOLD << "[The number is smaller than the minimum limit; we only have 3 bytes for the float. It will be initialized to 0.]\n";
		this->fixedPointNumber = 0;
	}
	else 
		this->fixedPointNumber = roundf(floatNumber * (1 << this->fractionalBits));
	std::cout << GREEN BOLD << "[Float constructor called]\n" <<  RESET;
}

Fixed::Fixed(const Fixed &existObject)
{
	std::cout << YELLOW BOLD << "[Copy constructor called]\n" << RESET;
	*this = existObject;
}

Fixed& Fixed::operator=(const Fixed &existObject) 
{
	std::cout << MAGENTA BOLD "[Copy assignment operator called]\n" << RESET;
	this->fixedPointNumber = existObject.fixedPointNumber;
    return (*this);
}

int Fixed::getRawBits(void) const 
{
    std::cout << BLUE BOLD << "[getRawBits member function called]\n" << RESET;
    return (this->fixedPointNumber);
}

void Fixed::setRawBits(int const raw) 
{
	std::cout << CYAN BOLD << "[setRawBits member function called]\n" << RESET;
    this->fixedPointNumber = raw;
}

//we want to shift right by 8 to because we already shifted the number by 8 to the left  (0000 0010 0001 0000 . 0000 0000) ==> (0000 0010 . 0001 0000)
// float temp;
// temp = this->fixedPointNumber >> this->fractionalBits;
// temp = this->fixedPointNumber / pow(2, this->fractionalBits) ==> 2^this->fractionalBits
// temp = (this->fixedPointNumber / static_cast<float>(256));
// return (temp);
float Fixed::toFloat(void) const 
{
    return (this->fixedPointNumber / static_cast<float>(1 << this->fractionalBits)); //(static_cast<float>)(1 << this->fractionalBits) == 256
}

//we want to shift right by 8 to because we already shifted the number by 8 to the left  (0000 0010 0001 0000 . 0000 0000) ==> (0000 0010 . 0001 0000)
//this->fixedPointNumber = this->fixedPointNumber >> fractionalBits
//this->fixedPointNumber = this->fixedPointNumber / pow(2, this->fractionalBits) ==> 2^this->fractionalBits
//this->fixedPointNumber = this->fixedPointNumber / 256
// return (this->fixedPointNumber / 256);
int Fixed::toInt(void) const 
{
    return (this->fixedPointNumber >> this->fractionalBits);
}

//					the right hand side    the left hand side
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

/*pre-increment and pre-decrement*/
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

/*post-increment and post-decrement  we use this dummy parameter to distinguish between pre and post*/
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
