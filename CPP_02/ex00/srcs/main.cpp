/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/09 15:11:19 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;


	// int tempA;
	// int tempB;
	// int tempC;

	
    // Fixed a;
	// tempA = a.getRawBits();
    // std::cout << "a.floatPointNumber = [" << tempA << "]\n";
    // a.setRawBits(42);

	
    // Fixed b;
    // b = a; 
	// tempA = a.getRawBits();
	// tempB = b.getRawBits();
    // std::cout << "a.floatPointNumber = [" << tempA << "]\n";
    // std::cout << "b.floatPointNumber = [" << tempB << "]\n";


    // Fixed c(a);
	// tempC = c.getRawBits();
    // std::cout << "c.floatPointNumber = [" << tempC << "]\n";


 	// a.setRawBits(84);
	// tempA = a.getRawBits();
	// tempB = b.getRawBits();
	// tempC = c.getRawBits();
    // std::cout << "a.floatPointNumber = [" << tempA << "]\n";
    // std::cout << "b.floatPointNumber = [" << tempB << "]\n";
    // std::cout << "c.floatPointNumber = [" << tempC << "]\n";
	return 0;
}

