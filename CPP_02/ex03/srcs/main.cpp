/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/11 22:26:22 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


int main(void)
{


	// Point k;
    Fixed const x1(8); Fixed const y1(8);
    Fixed const x2(5); Fixed const y2(-6);
    Fixed const x3(-3); Fixed const y3(5);
	
    Fixed const xpi(1); Fixed const ypi(4);//inside
    Fixed const xpo(-1); Fixed const ypo(-4);//inside
 
	// std::cout << "x1 = " << x1 << " | y1 = " << y1 << "\n";
	// std::cout << "x2 = " << x2 << " | y2 = " << y2 << "\n";
	// std::cout << "x3 = " << x3 << " | y3 = " << y3 << "\n";
	// std::cout << "xpi = " << xpi << " | ypi = " << ypi << "\n";
	// std::cout << "xpo = " << xpo << " | ypo = " << ypo << "\n";

	std::cout << "\n\n\n\n";
	// k.x = x1;
	// k.y = y1;
	// std::cout << "\n\n\n" << k.x << "   " << k.y << "  \n\n\n\n";
    Point  a(x1, y1);
    Point  b(x2, y2);
    Point  c(x3, y3);
	Point  d(xpi, ypi);
	Point  e(xpo, ypo);
	// std::cout << "1.a " << &a << "\n";
	
	std::cout << "xxxxx1 = " << a.getX() << " | xxxxy1 = " << a.getY() << "\n";
	// a = d;
	std::cout << "ddddx1 = " << a.getX() << " | ddddy1 = " << a.getY() << "\n";
	std::cout << "xpi = " << d.getX() << " | ypi = " << d.getY() << "\n";

	// std::cout << "x2 = " << b.getX() << " | y2 = " << b.getY() << "\n";
	// std::cout << "x3 = " << c.getX() << " | y3 = " << c.getY() << "\n";
	// std::cout << "xpo = " << e.getX() << " | xpo = " << e.getY() << "\n";


    // Fixed px(100.0f), py(100.0f);

    // Point p(px, py);

    // std::cout << "Point p is " << (bsp(a, b, c, d) ? "inside" : "outside") << " the triangle" << std::endl;
	
	// std::cout << "x1 = " << a.getX() << " | y1 = " << a.getY() << "\n";
	// std::cout << "x2 = " << b.getX() << " | y2 = " << b.getY() << "\n";
	// std::cout << "x3 = " << c.getX() << " | y3 = " << c.getY() << "\n";
	// std::cout << "xpi = " << d.getX() << " | ypi = " << d.getY() << "\n";
	// std::cout << "xpo = " << e.getX() << " | xpo = " << e.getY() << "\n";

	// std::cout << "\n\n\n\n";
	// aken_test(a.getX());
	// std::cout << "\n\n\n\n";
	// std::cout << "3.a " << &a << "\n";
    return 0;
}