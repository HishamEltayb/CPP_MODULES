/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/04 19:16:46 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
	
	std::string 	inputFileName;
	std::string 	outputFileName;
	std::string 	searchString;
	std::string 	replacementString;
	std::ofstream	outputFile;
	std::ifstream	inputFile;
	std::string 	temp;
	
	if (ac == 4)
	{
		inputFileName = av[1];
		searchString = av[2];
		replacementString = av[3];
		inputFile.open(inputFileName.c_str());
		if (!inputFile.is_open())
		{std::cout << "The inputFile file could not opened\n"; return(1);}
		outputFileName= inputFileName + ".replace";
		outputFile.open(outputFileName.c_str(), std::ios::trunc);
		if (!outputFile.is_open())
			{std::cout << "The outputFile file could not opened\n"; inputFile.close(); return(1);}
		while (!inputFile.eof())
		{
			inputFile >> temp;
			if (temp == searchString)
				outputFile << replacementString + " ";
			else
				outputFile << temp + " ";
		}
		outputFile.close();
		inputFile.close();
	}
	else
	{
		std::cout << RED << "ERROR: The number of arguments is incorrect\n" << BLUE;
		std::cout << "Example: (./replace inputFileName \"inputFileName\" \"hisham\")\n" << RESET;
	}
	return (0);
}