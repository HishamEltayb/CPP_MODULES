/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Printing.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 10:21:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/01 16:58:06 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTING_HPP
# define PRINTING_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>

class ImplicitConverter;

class Printint
{
	public:
		~Printint(void);
		Printint(void);
		Printint(const Printint& existObject);
		Printint& operator=(const Printint& existObject);
		
		Printint(ImplicitConverter number);
		operator char();
		operator int();
		operator float();
		operator double();
};

#endif
