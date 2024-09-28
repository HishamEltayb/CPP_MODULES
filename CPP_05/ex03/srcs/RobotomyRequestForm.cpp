/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:39:42 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 16:18:22 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm(void) {std::cout << RED STRIKETHROUGH << "[RobotomyRequestForm Default Destructor called]\n" << RESET;}

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45) , target("default target")
{std::cout << GREEN STRIKETHROUGH <<"[RobotomyRequestForm Default constructor called]\n" <<  RESET;}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45) , target(target)
{std::cout << GREEN STRIKETHROUGH <<"[RobotomyRequestForm overloaded constructor called]\n" <<  RESET;}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &existObject) : AForm("RobotomyRequestForm", 72, 45)
{
	std::cout << YELLOW STRIKETHROUGH << "[RobotomyRequestForm Copy constructor called]\n" << RESET;
	this->target = existObject.target;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm &existObject)
{
	std::cout << MAGENTA STRIKETHROUGH "[RobotomyRequestForm Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->target = existObject.target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
    if (this->getSignedStatus() == NOT_SIGNED)
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeRequiredToExecute())
        throw AForm::gradeTooLowException();

    std::cout << "* Drilling noises *" << std::endl;
    srand(time(NULL));
    if (rand() % 2)
        std::cout << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomy failed on " << target << std::endl;
}