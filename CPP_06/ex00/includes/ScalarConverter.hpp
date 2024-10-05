/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/03 10:10:49 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

#define CHAR 			1
#define INT 			2
#define FLOAT 			3
#define DOUBLE 			4
#define FLOAT_LITERAL 	5
#define DOUBLE_LITERAL 	6
#define UNDIFINED 		7
#define IMPOSSIBLE 		8
#define NOT_DISPLAYABLE	9

class NumberType;

class ScalarConverter 
{
	private:
		static ScalarConverter instance;
		
		~ScalarConverter(void);
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		
		void	printing(NumberType &valueType);
		void	printTypeMessage(int type);
		void	printChar(NumberType &valueType);
		void	printInt(NumberType &valueType);
		void	printFloat(NumberType &valueType);
		void	printDouble(NumberType &valueType);

	public:
		static void convert(char *arg);

		
		class EmptyException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class InvalidException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		
		class RangeException : public std::exception
		{
			public:
				const char* what() const throw();
		};


};

#endif
