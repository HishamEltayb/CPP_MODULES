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

Bureaucrat::~Bureaucrat(void) {std::cout << RED STRIKETHROUGH << "[Bureaucrat Default Destructor called]\n" << RESET;}

Bureaucrat::Bureaucrat(void): name("Bureaucrat")
{
	std::cout << GREEN STRIKETHROUGH <<"[Bureaucrat Default constructor called]\n" <<  RESET;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw Bureaucrat::gradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::gradeTooLowException();
	std::cout << GREEN STRIKETHROUGH <<"[Bureaucrat overloaded constructor called]\n" <<  RESET;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &existObject)
{
	std::cout << YELLOW STRIKETHROUGH << "[Bureaucrat Copy constructor called]\n" << RESET;
	*this = existObject;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &existObject)
{
	std::cout << MAGENTA STRIKETHROUGH "[Bureaucrat Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->grade = existObject.grade;
	return (*this);
}

const std::string&	Bureaucrat::getName(void) const {return (this->name);}

int					Bureaucrat::getGrade(void) const {return (this->grade);}

void			Bureaucrat::incrementGrade(void)
{
	if ((this->grade - 1) < 1)
		throw Bureaucrat::gradeTooHighException();
	this->grade--;
}

void			Bureaucrat::decrementGrade(void)
{
	if ((this->grade + 1) > 150)
		throw Bureaucrat::gradeTooLowException();
	this->grade++;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
    return (out);
}


const char * Bureaucrat::gradeTooHighException::what(void) const throw()
{
	const char * exceptionMsg = RED BOLD "Grade is Too High...!!" RESET;
	return (exceptionMsg);
}

const char * Bureaucrat::gradeTooLowException::what(void) const throw()
{
	const char * exceptionMsg = RED BOLD "Grade is Too Low...!!" RESET;
	return (exceptionMsg);
}

void	Bureaucrat::signForm(AForm &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << GREEN BOLD << this->name + " signed " + form.getFormName() + "\n" << RESET;
	}
	catch(std::exception& e)
	{
		std::cerr << this->name + " couldn't sign " + form.getFormName() <<  " because ";
		std::cerr << e.what() << '\n';
	}
}

void Bureaucrat::executeForm(const AForm &form) const
{
    try 
	{
        form.execute(*this);
        std::cout << this->getName() << " executed " << form.getFormName() << std::endl;
    }
	catch (std::exception &e) 
	{
        std::cerr << this->getName() << " couldn’t execute " << form.getFormName() << " because " << e.what() << std::endl;
    }
}
