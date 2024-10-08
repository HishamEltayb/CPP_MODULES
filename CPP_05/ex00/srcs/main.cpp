/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/26 10:08:51 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() 
{
	std::cout << YELLOW BOLD "\nIncrement test\n" RESET;

	//increment testing
    try 
	{
        Bureaucrat increment(2, "John");
		
		//overloaded insertion test
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
	
	std::cout << YELLOW BOLD "\nDecrement test\n" RESET;
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
	
	std::cout << YELLOW BOLD "\nHigh grade initializing test\n" RESET;
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
	
	std::cout << YELLOW BOLD "\nLow grade initializing test\n" RESET;
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


    return 0;
}