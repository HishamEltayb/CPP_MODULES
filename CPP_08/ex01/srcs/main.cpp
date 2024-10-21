/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:45:05 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/18 17:25:19 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() 
{
	std::cout << "\n-----------------------1.Normal cases-----------------------\n";
	std::vector<int> first;
	first.push_back(23);
	first.push_back(15);
	first.push_back(90);
    Span sp1(3);
	sp1.addRange(first.begin(), first.end());
	std::cout << "sp1 = " << sp1;
	std::cout << "1.Shortest Span: " << sp1.shortestSpan() << std::endl; 
	std::cout << "1.longestSpan: " << sp1.longestSpan()<< std::endl; 
	std::cout << "\n-----------------------1.Normal cases-----------------------\n";
	
/******************************************************************************************/	

	
	std::cout << "\n-----------------------2.vector is full-----------------------\n";
	std::vector<int> second;
	second.push_back(23);
	second.push_back(15);
	second.push_back(90);
    Span sp2(4);
	try
	{
		sp2.addNumber(123);
		sp2.addNumber(77);
		sp2.addRange(second.begin(), second.end());
		std::cout << "sp2 = " << sp2;
		std::cout << "2.Shortest Sp2an: " << sp2.shortestSpan() << std::endl; 
		std::cout << "2.longestSp2an: " << sp2.longestSpan()<< std::endl; 
	}
	catch (const std::exception &e) 
	{
        std::cerr << "2.Error: " << e.what();
    }
	std::cout << "\n-----------------------2.vector is full-----------------------\n";

/******************************************************************************************/	

	std::cout << "\n-----------------------3.Normal cases-----------------------\n";
   //try with 10,000 numbers or elements
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    Span sp(10000);
    for (unsigned int i = 0; i < 10000; ++i) {
        sp.addNumber(std::rand() % 10000);
    }
   
    try 
	{
        std::cout << "3.Shortest Span: " << sp.shortestSpan() << std::endl; 
        std::cout << "3.Longest Span: " << sp.longestSpan();   
    }
	catch (const std::exception &e) 
	{
        std::cerr << "3.Error: " << e.what();
    }
	std::cout << "\n-----------------------3.Normal cases-----------------------\n";
	
/******************************************************************************************/	


	std::cout << "\n-----------------------4.Not enough elements-----------------------\n";
   //not enough elements
    Span emptySpan(5);
    Span singleSpan(5);
    singleSpan.addNumber(42);
    try 
	{
        emptySpan.shortestSpan();
        singleSpan.longestSpan();
    }
	catch (const std::exception &e)
	{
        std::cerr << "4.Error: " << e.what() ;
    }
	std::cout << "\n-----------------------4.Not enough elements-----------------------\n";
/******************************************************************************************/	

    return 0;
}

