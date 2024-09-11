/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:52:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/11 22:26:01 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

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

class Point
{
	private:
		Fixed const x;
		Fixed const y;
		Point& operator=(Point const &point);
		
	public:
		~Point(void);
		Point(void);
		Point(Point const &point);

		
		Point(Fixed const &x, Fixed const &y);
		Point(const float floatingPointNumber1, const float floatingPointNumber2);
		
		
		Fixed getX(void) const;
		Fixed getY(void) const;

};


// Fixed area(Point a, Point b, Point c);
bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
