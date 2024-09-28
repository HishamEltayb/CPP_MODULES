/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 16:27:52 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main() 
{
    try 
	{
        Bureaucrat highRank("Alice", 1);
        Intern intern;

        AForm* form1 = intern.makeForm("shrubbery creation", "Garden");
        AForm* form2 = intern.makeForm("robotomy Request", "Bender");
        AForm* form3 = intern.makeForm("presidential pardon", "Arthur");

        highRank.signForm(*form1);
        highRank.executeForm(*form1);

        highRank.signForm(*form2);
        highRank.executeForm(*form2);

        highRank.signForm(*form3);
        highRank.executeForm(*form3);

        delete form1;
        delete form2;
        delete form3;

    }
	catch (const std::exception &e) 
	{
        std::cerr << "Caught an exception: " << e.what() << std::endl;
    }

    return 0;
}