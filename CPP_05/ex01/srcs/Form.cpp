/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:06:24 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 09:51:51 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::~Form(void) {std::cout << RED STRIKETHROUGH << "[Form Default Destructor called]\n" << RESET;}

Form::Form(void) : formName("Default Form"), gradeRequiredToSign(150), gradeRequiredToExecute(150) 
{
	std::cout << GREEN STRIKETHROUGH <<"[Form Default constructor called]\n" <<  RESET;
	this->signedStatus = NOT_SIGNED;
}

Form::Form(const std::string &formName, const int &gradeRequiredToSign, const int &gradeRequiredToExecute) : formName(formName), gradeRequiredToSign(gradeRequiredToSign), gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
		throw Form::gradeTooHighException();
	if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
		throw Form::gradeTooLowException();
	std::cout << GREEN STRIKETHROUGH <<"[Form overloaded constructor called]\n" <<  RESET;
	this->signedStatus = NOT_SIGNED;
}

Form::Form(const Form &existObject) : formName(existObject.formName), gradeRequiredToSign(existObject.gradeRequiredToSign), gradeRequiredToExecute(existObject.gradeRequiredToExecute)
{
	std::cout << YELLOW STRIKETHROUGH << "[Form Copy constructor called]\n" << RESET;
}

Form&	Form::operator=(const Form &existObject)
{
	std::cout << MAGENTA STRIKETHROUGH "[Form Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->signedStatus = existObject.signedStatus;
	return (*this);
}


std::ostream& operator<<(std::ostream &out, const Form &form)
{
    out << "Form Name: " + form.getFormName() + "\n";
	if (form.getSignedStatus() == SIGNED)
    	out << "Signed Status: SIGNED\n";
	if (form.getSignedStatus() == NOT_SIGNED)
    	out << "Signed Status: NOT_SIGNED\n";
    out << "Grade Required To Sign: " << form.getGradeRequiredToSign() << "\n";
    out << "Grade Required To Execute: " << form.getGradeRequiredToExecute() << "\n";
    return (out);
}

const char * Form::gradeTooHighException::what(void) const throw()
{
	const char * exceptionMsg = RED BOLD "Grade is Too High...!!" RESET;
	return (exceptionMsg);
}

const char * Form::gradeTooLowException::what(void) const throw()
{
	const char * exceptionMsg = RED BOLD "Grade is Too Low...!!" RESET;
	return (exceptionMsg);
}



const std::string	&Form::getFormName(void) const {return (this->formName);}
bool				Form::getSignedStatus(void) const {return (this->signedStatus);}
const int			&Form::getGradeRequiredToSign(void) const {return (this->gradeRequiredToSign);}
const int			&Form::getGradeRequiredToExecute(void) const {return (this->gradeRequiredToExecute);}


void		Form::beSigned(const Bureaucrat &bureaucrat)  
{
	if (bureaucrat.getGrade() <= this->gradeRequiredToSign)
		this->signedStatus = SIGNED;
	else
		throw Form::gradeTooLowException();
	
}
