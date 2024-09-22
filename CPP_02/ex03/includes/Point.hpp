/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 14:52:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/19 14:31:21 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string>
#include <cmath>
#include "Fixed.hpp"

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

	Fixed area(Point a, Point b, Point c);
	bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
