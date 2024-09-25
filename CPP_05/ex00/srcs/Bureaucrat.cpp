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

#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(void) {std::cout << RED BOLD << "[Bureaucrat Default Destructor called]\n" << RESET;}

Bureaucrat::Bureaucrat(void): name("Bureaucrat")
{
	std::cout << GREEN BOLD <<"[Bureaucrat Default constructor called]\n" <<  RESET;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(int grade, std::string name) : name(name)
{
	std::cout << GREEN BOLD <<"[Bureaucrat overloaded constructor called]\n" <<  RESET;
	if (grade < 1)
		throw gradeTooHighException();
	if (grade > 150)
		throw gradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &existObject)
{
	std::cout << YELLOW BOLD << "[Copy constructor called]\n" << RESET;
	*this = existObject;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &existObject)
{
	std::cout << MAGENTA BOLD "[Copy assignment operator called]\n" << RESET;
	this->grade = existObject.grade;
	return (*this);
}

const std::string&	Bureaucrat::getName(void) const {return (this->name);}

int					Bureaucrat::getGrade(void) const {return (this->grade);}

std::string	Bureaucrat::gradeTooHighException(void)
{
	std::string exceptionMsg = RED BOLD "Grade is Too High...!!" RESET;
	return (exceptionMsg);
}

std::string	Bureaucrat::gradeTooLowException(void)
{
	std::string exceptionMsg = RED BOLD "Grade is Too Low...!!" RESET;
	return (exceptionMsg);
}

void			Bureaucrat::incrementGrade(void)
{
	if ((this->grade - 1) < 1)
		throw gradeTooHighException();
	this->grade--;
}

void			Bureaucrat::decrementGrade(void)
{
	if ((this->grade + 1) > 150)
		throw gradeTooLowException();
	this->grade++;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
    return (out);
}
