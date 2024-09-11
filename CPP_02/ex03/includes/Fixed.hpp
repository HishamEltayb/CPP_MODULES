/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/11 23:03:32 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

#define RED 		"\033[0;31m"
#define WHITE 		"\033[0;37m"
#define GREEN 		"\033[0;32m"
#define BLUE 		"\033[0;34m"
#define CYAN 		"\033[0;36m"
#define YELLOW 		"\033[0;33m"
#define MAGENTA 	"\033[0;35m"
#define BOLD 		"\033[1m"
#define UNDERLINE 	"\033[4m"
#define RESET 		"\033[0m"

class Fixed
{
	private:
		int					fixedPointNumber;
		static const int	fractionalBits;
		
	public:
		~Fixed(void);
		Fixed(void);
		Fixed(const Fixed &existObject);
		Fixed& operator=(Fixed const &existObject); 

		Fixed(const int intNumber); 
		Fixed(const float floatNumber); 
		
		bool					operator>(const Fixed &existObject) const;
		bool					operator<(const Fixed &existObject) const;
		bool					operator>=(const Fixed &existObject) const;
		bool					operator<=(const Fixed &existObject) const;
		bool					operator==(const Fixed &existObject) const;
		bool					operator!=(const Fixed &existObject) const;
		Fixed					operator+(const Fixed &existObject) const;
		Fixed					operator-(const Fixed &existObject) const;
		Fixed					operator*(const Fixed &existObject) const;
		Fixed					operator/(const Fixed &existObject) const;

		/*pre-increment and pre-decrement*/
		Fixed& 					operator++(void);
		Fixed& 					operator--(void);
		/*post-increment and post-decrement  we use this dummy parameter to distinguish between pre and post*/
		Fixed 					operator++(int);
		Fixed 					operator--(int);

		float					toFloat(void) const;
		int						toInt(void) const;
		int						getRawBits(void) const;
		void					setRawBits(int const raw);
		static Fixed& 			min(Fixed &object1, Fixed &object2) ;
		static const Fixed& 	min(const Fixed &object1, const Fixed &object2);
		static Fixed& 			max(Fixed &object1, Fixed &object2) ;
		static const Fixed& 	max(const Fixed &object1, const Fixed &object2);

};

	std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
