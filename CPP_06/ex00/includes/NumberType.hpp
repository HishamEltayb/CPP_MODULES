/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NumberType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:21:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/03 10:01:46 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NUMBERTYPE_HPP
# define NUMBERTYPE_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <climits>

#define CHAR 			1
#define INT 			2
#define FLOAT 			3
#define DOUBLE 			4
#define FLOAT_LITERAL 	5
#define DOUBLE_LITERAL 	6
#define UNDIFINED 		7
#define IMPOSSIBLE 		8
#define NOT_DISPLAYABLE	9

class NumberType
{
	private:
		int				type;
		std::string		string;
		size_t			dotPosition;
		long double		numberLongDouble;
		
	public:
		~NumberType(void);
		NumberType(void);
		NumberType(const NumberType& existObject);
		NumberType& operator=(const NumberType& existObject);
		NumberType(std::string &string);
		
		int						getType(void);
		int						getDotPosition(void);
		long double				getNumber(void);
		std::string&			getString(void);

		operator char();
		operator int();
		operator float();
		operator double();
};

	std::ostream& operator<<(std::ostream& out, const NumberType& NumberType);

#endif
