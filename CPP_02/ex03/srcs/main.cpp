/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/11 23:09:05 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void)
{
    Fixed const x1(8); Fixed const y1(8);
    Fixed const x2(5); Fixed const y2(-6);
    Fixed const x3(-3); Fixed const y3(5);
	
    Fixed const xInside(1); Fixed const yInside(4);//inside
    Fixed const xOutside(-1); Fixed const yOutside(-4);//inside
	
    Point  a(x1, y1);
    Point  b(x2, y2);
    Point  c(x3, y3);
	Point  inside(xInside, yInside);
	Point  outside(xOutside, yOutside);

    std::cout << "Point p is " << (bsp(a, b, c, outside) ? "inside" : "outside") << " the triangle" << std::endl;
	
    return 0;
}