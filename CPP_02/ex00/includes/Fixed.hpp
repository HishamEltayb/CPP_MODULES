/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/11 22:52:55 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

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
		int					floatPointNumber;
		static const int	fractionalBits;
		
	public:
		~Fixed(void);
		Fixed(void);
		Fixed(const Fixed &existObject);
		Fixed &operator=(const Fixed &existObject);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
