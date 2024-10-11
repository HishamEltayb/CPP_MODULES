/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HelperFunctions.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:56:08 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/10 19:13:14 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HelperFunctions.hpp"

Base	*HelperFunctions::generate(void)
{
	static int counter;
	int i = 0;
	if (!counter)
	{
		std::srand(std::time(NULL));
		i = rand() % 3;
		counter++;
	}
	usleep(200);
	if (counter)
	{
		i = rand() % 3;
		counter++;
	}
	switch (i)
	{
		case AClass:
			std::cout << YELLOW BOLD "Generate A" "\n" RESET;
			return (new A());
		case BClass:
			std::cout << BLUE BOLD "Generate B" "\n" RESET;
			return (new B());
		case CClass:
			std::cout << MAGENTA BOLD "Generate C" "\n" RESET;
			return (new C());
		default:
			throw GenerationFailed();
	}
}

void HelperFunctions::identify(Base* p)
{
	if (!p)
		throw (EmptyObject());
    A *a = dynamic_cast<A *>(p);
    B *b = dynamic_cast<B *>(p);
    C *c = dynamic_cast<C *>(p);

    if (a)
        std::cout << YELLOW BOLD "A Class was Created" "\n" RESET;
    if (b)
        std::cout << BLUE BOLD "B Class was Created" "\n" RESET;
    if (c)
        std::cout << MAGENTA BOLD "C Class was Created" "\n" RESET;
}


void HelperFunctions::identify(Base& p)
{
	A *a = dynamic_cast<A *>(&p);
    B *b = dynamic_cast<B *>(&p);
    C *c = dynamic_cast<C *>(&p);
	
    if (a)
        std::cout << YELLOW BOLD "A Class was Created" "\n" RESET;
    if (b)
        std::cout << BLUE BOLD "B Class was Created" "\n" RESET;
    if (c)
        std::cout << MAGENTA BOLD "C Class was Created" "\n" RESET;
}

const char * HelperFunctions::GenerationFailed::what(void) const throw()
{
	const char * exceptionMsg = RED BOLD "Failed to generate object...!!" RESET;
	return (exceptionMsg);
}

const char * HelperFunctions::EmptyObject::what(void) const throw()
{
	const char * exceptionMsg = RED BOLD "Object is NULL...!!" RESET;
	return (exceptionMsg);
}

