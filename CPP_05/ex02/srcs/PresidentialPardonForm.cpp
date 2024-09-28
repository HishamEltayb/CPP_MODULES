/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:07:34 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 16:18:12 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm(void) {std::cout << RED STRIKETHROUGH << "[PresidentialPardonForm Default Destructor called]\n" << RESET;}

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5) , target("default target")
{std::cout << GREEN STRIKETHROUGH <<"[PresidentialPardonForm Default constructor called]\n" <<  RESET;}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) :AForm("PresidentialPardonForm", 25, 5) , target(target)
{std::cout << GREEN STRIKETHROUGH <<"[PresidentialPardonForm overloaded constructor called]\n" <<  RESET;}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &existObject) : AForm("PresidentialPardonForm", 25, 5)
{
	std::cout << YELLOW STRIKETHROUGH << "[PresidentialPardonForm Copy constructor called]\n" << RESET;
	this->target = existObject.target;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &existObject)
{
	std::cout << MAGENTA STRIKETHROUGH "[PresidentialPardonForm Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->target = existObject.target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const 
{
    if (this->getSignedStatus() == NOT_SIGNED)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeRequiredToExecute())
        throw AForm::gradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
