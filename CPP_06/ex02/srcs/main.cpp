/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 16:58:23 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/10 18:45:22 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HelperFunctions.hpp"


int main()
{
	Base *ptr = NULL;
	Base *ptr2 = NULL;
    try 
	{
    	ptr = HelperFunctions::generate();
    } 
	catch (const std::exception &e) 
	{
        std::cout << "Caught exception: " << e.what() << std::endl;
		return (1);
    }
    try 
	{
    	ptr2 = HelperFunctions::generate();
    } 
	catch (const std::exception &e) 
	{
        std::cout << "Caught exception: " << e.what() << std::endl;
		delete ptr;
		return (1);
    }
	if (ptr2)
	{
		Base &ref = *ptr2;
		HelperFunctions::identify(ptr);
		HelperFunctions::identify(ref);
	}

	delete ptr;
	delete ptr2;
    return (0);
}
