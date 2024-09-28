/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 09:54:11 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() 
{
	//increment testing
    try 
	{
        Bureaucrat increment(2, "John");
        std::cout << increment << std::endl;

        increment.incrementGrade(); 
        std::cout << increment << std::endl;

        increment.incrementGrade();
    }
    catch (std::exception& err)
	{
        std::cerr << RED BOLD "Error: " << err.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << RED BOLD "Error: ANY TYPE" << std::endl;
	}
	
	//decrement testing
    try 
	{
        Bureaucrat decrement(149, "John");
        std::cout << decrement << std::endl;

        decrement.decrementGrade(); 
        std::cout << decrement << std::endl;

        decrement.decrementGrade();
    }
    catch (std::exception& err)
	{
        std::cerr << RED BOLD "Error: " << err.what() << std::endl;
    }
	
	//high grade initializing test
    try 
	{
        Bureaucrat decrement(0, "John");
        std::cout << decrement << std::endl;

        decrement.decrementGrade(); 
        std::cout << decrement << std::endl;

        decrement.decrementGrade();
    }
    catch (std::exception& err)
	{
        std::cerr << RED BOLD "Error: " << err.what() << std::endl;
    }
	
	//low grade initializing test
    try
	{
        Bureaucrat decrement(151, "John");
        std::cout << decrement << std::endl;

        decrement.decrementGrade(); 
        std::cout << decrement << std::endl;

        decrement.decrementGrade();
    }
    catch (std::exception& err)
	{
        std::cerr << RED BOLD "Error: " << err.what() << std::endl;
    }

	try 
	{
		Form formNeedToBeSigned("TAX", 5, 2);
		Bureaucrat canSignForm(150, "president");

		std::cout << formNeedToBeSigned;

		canSignForm.signForm(formNeedToBeSigned);
		std::cout << "\n\n";
		
		std::cout << formNeedToBeSigned;

		std::cout << "\n\n";
		formNeedToBeSigned.beSigned(canSignForm);
		std::cout << formNeedToBeSigned;
	}
	catch(std::exception &err)
	{
		std::cout << RED BOLD "ERROR: " << err.what() << "\n";
	}


    return 0;
}