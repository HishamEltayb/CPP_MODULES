/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:06:24 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 10:18:48 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm(void) {std::cout << RED STRIKETHROUGH << "[AForm Default Destructor called]\n" << RESET;}

AForm::AForm(void) : formName("Default AForm"), gradeRequiredToSign(150), gradeRequiredToExecute(150) 
{
	std::cout << GREEN STRIKETHROUGH <<"[AForm Default constructor called]\n" <<  RESET;
	this->signedStatus = NOT_SIGNED;
}

AForm::AForm(const std::string &formName, const int &gradeRequiredToSign, const int &gradeRequiredToExecute) : formName(formName), gradeRequiredToSign(gradeRequiredToSign), gradeRequiredToExecute(gradeRequiredToExecute)
{
	if (gradeRequiredToSign < 1 || gradeRequiredToExecute < 1)
		throw AForm::gradeTooHighException();
	if (gradeRequiredToSign > 150 || gradeRequiredToExecute > 150)
		throw AForm::gradeTooLowException();
	std::cout << GREEN STRIKETHROUGH <<"[AForm overloaded constructor called]\n" <<  RESET;
	this->signedStatus = NOT_SIGNED;
}

AForm::AForm(const AForm &existObject) : formName(existObject.formName), gradeRequiredToSign(existObject.gradeRequiredToSign), gradeRequiredToExecute(existObject.gradeRequiredToExecute)
{
	std::cout << YELLOW STRIKETHROUGH << "[AForm Copy constructor called]\n" << RESET;
}

AForm&	AForm::operator=(const AForm &existObject)
{
	std::cout << MAGENTA STRIKETHROUGH "[AForm Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->signedStatus = existObject.signedStatus;
	return (*this);
}

std::ostream& operator<<(std::ostream &out, const AForm &Aform)
{
    out << "AForm Name: " + Aform.getFormName() + "\n";
	if (Aform.getSignedStatus() == SIGNED)
    	out << "Signed Status: SIGNED\n";
	if (Aform.getSignedStatus() == NOT_SIGNED)
    	out << "Signed Status: NOT_SIGNED\n";
    out << "Grade Required To Sign: " << Aform.getGradeRequiredToSign() << "\n";
    out << "Grade Required To Execute: " << Aform.getGradeRequiredToExecute() << "\n";
    return (out);
}


const char* AForm::FormNotSignedException::what() const throw() 
{
	const char * exceptionMsg = RED BOLD "Form not signed...!!" RESET;
	return (exceptionMsg);
}

const char * AForm::gradeTooHighException::what(void) const throw()
{
	const char * exceptionMsg = RED BOLD "Grade is Too High...!!" RESET;
	return (exceptionMsg);
}

const char * AForm::gradeTooLowException::what(void) const throw()
{
	const char * exceptionMsg = RED BOLD "Grade is Too Low...!!" RESET;
	return (exceptionMsg);
}

const std::string	&AForm::getFormName(void) const {return (this->formName);}
bool				AForm::getSignedStatus(void) const {return (this->signedStatus);}
const int			&AForm::getGradeRequiredToSign(void) const {return (this->gradeRequiredToSign);}
const int			&AForm::getGradeRequiredToExecute(void) const {return (this->gradeRequiredToExecute);}

void		AForm::beSigned(const Bureaucrat &bureaucrat)  
{
	if (bureaucrat.getGrade() <= this->gradeRequiredToSign)
		this->signedStatus = SIGNED;
	else
		throw AForm::gradeTooLowException();
}
