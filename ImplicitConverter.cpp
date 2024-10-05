/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ImplicitConverter.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:33:32 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/01 16:53:34 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ImplicitConverter.hpp"

ImplicitConverter::~ImplicitConverter(void){}
ImplicitConverter::ImplicitConverter(void) {}
ImplicitConverter::ImplicitConverter(const ImplicitConverter& existObject) {(void)existObject;}
ImplicitConverter& ImplicitConverter::operator=(const ImplicitConverter& existObject) {(void)existObject;return (*this);}

ImplicitConverter::ImplicitConverter(long double number)
{
	this->number = number;
}

ImplicitConverter::operator char()
{
	if (this->number < 1 || this->number > 127)
		return 0;
	else if (std::isprint(static_cast<int>(this->number)) == 0)
		return 1;
	return (static_cast<char>(this->number));
}

ImplicitConverter::operator int()
{
	return (static_cast<int>(this->number));
}

ImplicitConverter::operator float()
{
	return (static_cast<float>(this->number));
}

ImplicitConverter::operator double()
{
	return (static_cast<double>(this->number));
}
