/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:07:34 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 16:26:24 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm(void) {std::cout << RED STRIKETHROUGH << "[ShrubberyCreationForm Default Destructor called]\n" << RESET;}

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137) , target("default target")
{std::cout << GREEN STRIKETHROUGH <<"[ShrubberyCreationForm Default constructor called]\n" <<  RESET;}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137) , target(target)
{std::cout << GREEN STRIKETHROUGH <<"[ShrubberyCreationForm overloaded constructor called]\n" <<  RESET;}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &existObject) : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << YELLOW STRIKETHROUGH << "[ShrubberyCreationForm Copy constructor called]\n" << RESET;
	this->target = existObject.target;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &existObject)
{
	std::cout << MAGENTA STRIKETHROUGH "[ShrubberyCreationForm Copy assignment operator called]\n" << RESET;
	if (this != &existObject)
		this->target = existObject.target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const 
{
    if (this->getSignedStatus() == NOT_SIGNED)
	{
        throw AForm::FormNotSignedException();
	}
    if (executor.getGrade() > this->getGradeRequiredToExecute())
	{
        throw AForm::gradeTooLowException();
	}
	std::string temp = this->target + "_shrubbery";
    std::ofstream treeFile(temp.c_str());
    if (!treeFile.is_open())
	{
        throw std::runtime_error("Could not open treeFile");
	}

        treeFile << "         *\n"
             << "        ***\n"
             << "       *****\n"
             << "      *******\n"
             << "     *********\n"
             << "    ***********\n"
             << "   *************\n"
             << "  ***************\n"
             << " *****************\n"
             << "*******************\n";

        treeFile << "        |\n"
             << "        |\n"
             << "        |\n";


    std::cout << "Shrubbery created at " << target + "_shrubbery" << std::endl;
    treeFile.close();
}
