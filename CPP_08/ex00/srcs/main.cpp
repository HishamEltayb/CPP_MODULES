/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:03:50 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/18 11:33:04 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int main()
{
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
	
	std::cout << "\n-----------------------1.Normal case-----------------------\n";
    try 
	{
        int found = easyfind(vec, 3);
        std::cout << BLUE BOLD "1.Found: " << found  << RESET;
    }
    catch (const std::exception& e) 
	{
        std::cerr << YELLOW BOLD "1. NOT IN THE VECTOR " RESET << e.what();
    }
	std::cout << "\n-----------------------1.Normal case-----------------------\n";

/******************************************************************************************/	
	std::cout << "\n-----------------------2.Not Found case-----------------------\n";
    try 
	{
        int found = easyfind(vec, 6); 
        std::cout << BLUE BOLD "2.Found: " << found  << RESET;
    }
    catch (const std::exception& e) 
	{
        std::cerr << YELLOW BOLD "2.NOT IN THE VECTOR " RESET << e.what();
    }
	std::cout << "\n-----------------------2.Not Found case-----------------------\n";

/******************************************************************************************/	
	
	std::cout << "\n-----------------------3.EMPTY VECTOR-----------------------\n";
    std::vector<int> emptyVec;
    try 
	{
        int found = easyfind(emptyVec, 1); 
        std::cout << BLUE BOLD "3.Found: " << found  << RESET;
    }
    catch (const std::exception& e) 
	{
        std::cerr << YELLOW BOLD "3.EMPTY VECTOR " RESET << e.what();
    }
	std::cout << "\n-----------------------3.EMPTY VECTOR-----------------------\n";

/******************************************************************************************/	
	

	std::cout << "\n-----------------------4.DUPLICATES-----------------------\n";

    std::vector<int> 	vecWithDuplicates;
	vecWithDuplicates.push_back(1);
    vecWithDuplicates.push_back(2);
    vecWithDuplicates.push_back(3);
    vecWithDuplicates.push_back(2);
    vecWithDuplicates.push_back(5);
    try 
	{
        int found = easyfind(vecWithDuplicates, 2); 
        std::cout << BLUE BOLD "4. First Found: " << found  << RESET;
    }
    catch (const std::exception& e) 
	{
        std::cerr << YELLOW BOLD "4.NOT IN THE VECTOR " RESET << e.what();
    }
	std::cout << "\n-----------------------4.DUPLICATES-----------------------\n";

/******************************************************************************************/	



    return (0);
}
