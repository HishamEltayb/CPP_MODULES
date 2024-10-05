/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NumberType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:33:32 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/04 19:25:31 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NumberType.hpp"
#include "ScalarConverter.hpp"

NumberType::~NumberType(void){}
NumberType::NumberType(void) {}
NumberType::NumberType(const NumberType& existObject) {(void)existObject;}
NumberType& NumberType::operator=(const NumberType& existObject) {(void)existObject;return (*this);}

NumberType::NumberType(std::string &string)
{
	this->string = string;
	this->dotPosition = 1;
	this->type = UNDIFINED;
	this->numberLongDouble = 0;
	char *end = NULL;
	char *str = NULL;
	str = const_cast<char *>(string.c_str());
	if (string.empty() || str == NULL)
		throw ScalarConverter::EmptyException();
	
	this->numberLongDouble = std::strtold(str, &end);

	
	if (string == "-inff" || string == "+inff" || string == "inff" || string == "nanf")
		this->type = FLOAT_LITERAL;
	else if (string == "-inf" || string == "+inf" || string == "inf" || string == "nan")
		this->type = DOUBLE_LITERAL;
	else if (string.length() == 1 && std::isprint(string[0]))
	{
		if (std::isdigit(string[0]))
			this->type = INT;
		else
		{
			this->numberLongDouble = static_cast<int>(string[0]);
			if (this->numberLongDouble > std::numeric_limits<char>::max() || this->numberLongDouble < std::numeric_limits<char>::min())
				throw ScalarConverter::RangeException();
			this->type = CHAR;
		}
	}
	else if (end && static_cast<std::string>(end).size() == 1 && *end == 'f' && static_cast<std::string>(str).find('.') != std::string::npos)
	{
		if (this->numberLongDouble > std::numeric_limits<float>::max() || this->numberLongDouble < std::numeric_limits<float>::min())
			throw ScalarConverter::RangeException();
		size_t temp = static_cast<std::string>(str).find('.');
		size_t temp1 = static_cast<std::string>(str).length();
		size_t temp2 = static_cast<std::string>(end).length();
		this->dotPosition = temp1 - temp - temp2 - 1;
		this->type = FLOAT;
	}
	else if (end && !*end && static_cast<std::string>(str).find('.') != std::string::npos)
	{
		if (this->numberLongDouble > std::numeric_limits<double>::max() || this->numberLongDouble < std::numeric_limits<double>::min())
			throw ScalarConverter::RangeException();
		size_t temp = static_cast<std::string>(str).find('.');
		size_t temp1 = static_cast<std::string>(str).length();
		size_t temp2 = static_cast<std::string>(end).length();
		this->dotPosition = temp1 - temp - temp2 - 1;
		this->type = DOUBLE;
	}
	else if (end && !*end)
	{
		if (this->numberLongDouble > std::numeric_limits<int>::max() || this->numberLongDouble < std::numeric_limits<int>::min())
			throw ScalarConverter::RangeException();
		this->type = INT;
	}
	else
		throw ScalarConverter::InvalidException();
}

int NumberType::getType(void)
{
	return (this->type);
}
int NumberType::getDotPosition(void)
{
	if (this->dotPosition != std::string::npos)
		return (static_cast<int>(this->dotPosition));
	return (1);
}

long double NumberType::getNumber(void)
{
	return (this->numberLongDouble);
}
std::string&			NumberType::getString(void)
{
	return (this->string);
}


NumberType::operator char()
{
	if (this->type == FLOAT_LITERAL || this->type == DOUBLE_LITERAL)
		return IMPOSSIBLE;
	if (this->numberLongDouble < 1 || this->numberLongDouble > 127)
		return IMPOSSIBLE;
	else if (std::isprint(static_cast<int>(this->numberLongDouble)) == 0)
		return NOT_DISPLAYABLE;
	return (static_cast<char>(this->numberLongDouble));
}

NumberType::operator int()
{
	return (static_cast<int>(this->numberLongDouble));
}

NumberType::operator float()
{
	return (static_cast<float>(this->numberLongDouble));
}

NumberType::operator double()
{
	return (static_cast<double>(this->numberLongDouble));
}

std::ostream& operator<<(std::ostream& out, NumberType& NumberType)
{
    out << NumberType.getNumber();
    return (out);
}

