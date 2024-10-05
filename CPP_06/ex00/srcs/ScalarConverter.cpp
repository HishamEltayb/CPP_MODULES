/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 21:12:43 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include "NumberType.hpp"

ScalarConverter ScalarConverter::instance;

ScalarConverter::~ScalarConverter(void){}
ScalarConverter::ScalarConverter(void) {}
ScalarConverter::ScalarConverter(const ScalarConverter& existObject) {(void)existObject;}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& existObject) {(void)existObject;return (*this);}

void	ScalarConverter::printTypeMessage(int type)
{
	std::cout << YELLOW "The Input from type ";
	switch(type)
	{
		case CHAR:
			std::cout << "Char";
			break;
		case INT:
			std::cout << "INT";
			break;
		case FLOAT:
			std::cout << "FLOAT";
			break;
		case DOUBLE:
			std::cout << "DOUBLE";
			break;
		case FLOAT_LITERAL:
			std::cout << "FLOAT_LITERAL";
			break;
		case DOUBLE_LITERAL:
			std::cout << "DOUBLE_LITERAL";
			break;
		case UNDIFINED:
			std::cout << "UNDIFINED";
			throw ScalarConverter::InvalidException();
			break;
		default:
			throw ScalarConverter::InvalidException();
	}
	std::cout << RESET "\n" CYAN "Char: " RESET ;	
}

void	ScalarConverter::printChar(NumberType &valueType)
{

	if (valueType.getNumber() > std::numeric_limits<char>::max() || valueType.getNumber() < std::numeric_limits<char>::min())
		std::cout << "Impossible";
	else
	{
	char numberChar = valueType;
		switch (numberChar)
		{
			case IMPOSSIBLE:
				std::cout << "Impossible";
				break;
			case NOT_DISPLAYABLE:
				std::cout << "Not Displayable";
				break;
			default:
				std::cout << "'" << numberChar << "'";
		}
	}
	std::cout << "\n";	
}

void	ScalarConverter::printInt(NumberType &valueType)
{

	if (valueType.getNumber() > std::numeric_limits<int>::max() || valueType.getNumber() < std::numeric_limits<int>::min())
		std::cout << BLUE "Int: " RESET << "Impossible" << "\n";
	else
	{
			int numberInt = valueType;
		if (valueType.getType() == FLOAT_LITERAL || valueType.getType() == DOUBLE_LITERAL)
			std::cout << BLUE "Int: " RESET << "Impossible" << "\n";
		else
		{
			std::cout << BLUE "Int: " RESET << numberInt << "\n";
		}
	}
}

void	ScalarConverter::printFloat(NumberType &valueType)
{

	// if (valueType.getNumber() > std::numeric_limits<float>::max() || valueType.getNumber() < std::numeric_limits<float>::min())
	// 	std::cout << BLUE "Float: " RESET << "Impossible" << "\n";
	// else
	// {
		if (valueType.getType() == FLOAT_LITERAL)
			std::cout << BLUE "Float: " RESET << valueType.getString() << "\n";
		else if (valueType.getType() == DOUBLE_LITERAL)
			std::cout << BLUE "Float: " RESET << valueType.getString() << "f" << "\n";
		else
		{
			float numberFloat = valueType;
			if (numberFloat)
			int dotPosition = valueType.getDotPosition();
			if (dotPosition > 5)
				dotPosition = 5;
			std::cout << MAGENTA "Float: " RESET << std::fixed << std::setprecision(dotPosition) << numberFloat << "f" << "\n";
		}
	// }
}

void	ScalarConverter::printDouble(NumberType &valueType)
{

	if (valueType.getType() == FLOAT_LITERAL)
	{
		std::string temp = valueType.getString();
		temp.erase(temp.size() - 1);	
		std::cout << BLUE "Double: " RESET << temp << "\n";
	}
	else if (valueType.getType() == DOUBLE_LITERAL)
		std::cout << BLUE "Double: " RESET << valueType.getString() << "\n";
	else
	{
		double numberDouble = valueType;
		int dotPosition = valueType.getDotPosition();
		if (dotPosition > 14)
			dotPosition = 14;
		std::cout << MAGENTA "Double: " RESET << std::fixed <<  std::setprecision(dotPosition) << numberDouble << "\n";
	}
}

void	ScalarConverter::printing(NumberType &valueType)
{
	printTypeMessage(valueType.getType());
	printChar(valueType);
	printInt(valueType);
	printFloat(valueType);
	printDouble(valueType);
}

void ScalarConverter::convert(char *arg)
{
	if (!arg)
		throw ScalarConverter::InvalidException();
	std::string string = arg;
	NumberType valueType(string);
	instance.printing(valueType);
}

const char* ScalarConverter::EmptyException::what() const throw()
{
	const char * exceptionMsg = RED BOLD "ERROR: EMPTY STRING" RESET;
	return (exceptionMsg);
}


const char* ScalarConverter::InvalidException::what() const throw()
{
	const char * exceptionMsg = RED BOLD "ERROR: INVALID VALUE" RESET;
	return (exceptionMsg);
}

const char* ScalarConverter::RangeException::what() const throw()
{
	const char * exceptionMsg = RED BOLD "ERROR: INVALID Range Value" RESET;
	return (exceptionMsg);
}
