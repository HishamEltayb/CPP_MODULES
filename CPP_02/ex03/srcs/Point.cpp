/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/11 22:26:10 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::~Point(void) {}

Point::Point(void) : x(0), y(0) {}

Point::Point(Fixed const &xNew, Fixed const &yNew) : x(xNew), y(yNew){}

Point::Point(Point const &existObject) : x(existObject.x), y(existObject.y){}

//the attributes of this class is const therefor we put this operator as private which does nothing
Point&		Point::operator=(Point const &point) {(void)point;return (*this);}

Fixed	Point::getX(void) const {return this->x.toFloat();}
Fixed	Point::getY(void) const {return this->y.toFloat();}

Point::Point(float const floatingPointNumber1, float const  floatingPointNumber2)
	:x(Fixed(floatingPointNumber1)), y(Fixed(floatingPointNumber2)) {}

