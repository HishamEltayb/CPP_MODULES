/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HelperFunctions.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:54:46 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/10 18:49:51 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HELPERFUNCTIONS_HPP
# define HELPERFUNCTIONS_HPP

#include "Colors.hpp"
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <unistd.h>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <exception>
#include <cstdlib>
#include <sstream>
#include <ctime>

enum ObjectType
{
	AClass,
	BClass,
	CClass
};

class Base;

class HelperFunctions
{
	public:
        static Base*	generate(void);
        static void		identify(Base* p);
        static void		identify(Base& p);


	class GenerationFailed : public std::exception 
	{
		public:
			const char* what() const throw();
	};
	class EmptyObject : public std::exception 
	{
		public:
			const char* what() const throw();
	};

};

#endif
