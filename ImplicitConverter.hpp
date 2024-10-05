/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImplicitConverter.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:21:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/01 16:53:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMPLICITCONVERTER_HPP
# define IMPLICITCONVERTER_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class ImplicitConverter
{
	private:
		long double number;
		
	public:
		~ImplicitConverter(void);
		ImplicitConverter(void);
		ImplicitConverter(const ImplicitConverter& existObject);
		ImplicitConverter& operator=(const ImplicitConverter& existObject);
		
		ImplicitConverter(long double number);
		operator char();
		operator int();
		operator float();
		operator double();
};

#endif
