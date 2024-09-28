/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:27:25 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 14:47:50 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::~Intern(void) {std::cout << RED STRIKETHROUGH << "[Intern Default Destructor called]\n" << RESET;}
Intern::Intern(void) {std::cout << GREEN STRIKETHROUGH <<"[Intern Default constructor called]\n" <<  RESET;}
Intern::Intern(const Intern &existObject)
{
	*this = existObject;
	std::cout << YELLOW STRIKETHROUGH << "[Intern Copy constructor called]\n" << RESET;
}

Intern&	Intern::operator=(const Intern &existObject)
{
	(void)existObject;
	std::cout << MAGENTA STRIKETHROUGH "[Intern Copy assignment operator called]\n" << RESET;
	return (*this);
}

AForm*  Intern::RobotomyRequestFormCreate(const std::string& targetName)
{
	return (new RobotomyRequestForm(targetName));
}

AForm*  Intern::ShrubberyCreationFormCreate(const std::string& targetName)
{
	return (new ShrubberyCreationForm(targetName));
}

AForm*  Intern::PresidentialPardonFormCreate(const std::string& targetName)
{
	return (new PresidentialPardonForm(targetName));
}

const char*  Intern::FormDoesntExsitsException::what() const throw()
{
	const char * exceptionMsg = RED BOLD "Form doesnt Exists...!" RESET;
	return (exceptionMsg);
}

AForm*    Intern::makeForm(std::string formName, std::string targetName)
{
	std::string formArray[] = {"robotomy Request", "shrubbery creation", "presidential pardon", formName};
	
	int i = 0;
	while (i < 4 && formArray[i].compare(formName.c_str()) != 0)
		i++;
	switch(i)
	{
		case 0:
			return RobotomyRequestFormCreate(targetName);
		case 1:
			return ShrubberyCreationFormCreate(targetName);
		case 2:
			return PresidentialPardonFormCreate(targetName);
		case 3:
			throw FormDoesntExsitsException();
	}
	std::cout << "Intern creates " << formName << std::endl;
	return (NULL);
}
