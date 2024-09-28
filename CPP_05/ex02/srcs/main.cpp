/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 16:12:41 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() 
{
    Bureaucrat bureaucrat("John", 10);

    ShrubberyCreationForm shrubberyForm("Home");
    RobotomyRequestForm robotomyForm("Bender");
    PresidentialPardonForm pardonForm("Zaphod");

    try 
	{
        bureaucrat.signForm(shrubberyForm);
		bureaucrat.executeForm(shrubberyForm);
    } catch (std::exception& e)
	{
        std::cout << e.what() << std::endl;
    }

    try 
	{
        bureaucrat.signForm(robotomyForm);
		bureaucrat.executeForm(robotomyForm);
    } catch (std::exception& e)
	{
        std::cout << e.what() << std::endl;
    }

    try 
	{
        bureaucrat.signForm(pardonForm);
		bureaucrat.executeForm(pardonForm);
    } catch (std::exception& e)
	{
        std::cout << e.what() << std::endl;
    }


    Bureaucrat lowGradeBureaucrat("Jane", 150);
	ShrubberyCreationForm A("asd");
    try 
	{
        lowGradeBureaucrat.signForm(shrubberyForm);
        lowGradeBureaucrat.executeForm(A);

    }
	catch (std::exception& e)
	{
        std::cout << e.what() << std::endl;
    }

    return 0;
}
