/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/05 11:38:03 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av)
{
    std::string		inputFileName;
    std::string		outputFileName;
    std::string		searchString;
    std::string		replacementString;
    std::ofstream	outputFile;
    std::ifstream	inputFile;
    std::string		temp;
	bool			readStatus;
    
    if (ac == 4)
    {
        inputFileName = av[1];
        searchString = av[2];
        replacementString = av[3];
		if (searchString.empty())
		{
            std::cout << RED << "the search string is empty !!! \n" << RESET;
            return 1;
		}

        inputFile.open(inputFileName.c_str());
        if (!inputFile.is_open())
        {
            std::cout << "The input file could not be opened\n";
            return 1;
        }

        outputFileName = inputFileName + ".replace";
        outputFile.open(outputFileName.c_str(), std::ios::trunc);
        if (!outputFile.is_open())
        {
            std::cout << "The output file could not be opened\n";
            inputFile.close();
            return 1;
        }


		readStatus = getline(inputFile, temp);
        while (readStatus)
        {

            std::size_t stringOccurrenceIndex = temp.find(searchString);
            std::size_t searchStringLength = searchString.length();

            while (stringOccurrenceIndex != std::string::npos)
            {
                temp.erase(stringOccurrenceIndex, searchStringLength);
                temp.insert(stringOccurrenceIndex, replacementString);
                stringOccurrenceIndex = temp.find(searchString, stringOccurrenceIndex + replacementString.length());
            }
            outputFile << temp;
			readStatus = getline(inputFile, temp);
            if (!readStatus)
                break;
			else
            	outputFile << std::endl;
        }

        outputFile.close();
        inputFile.close();
    }
    else
    {
        std::cout << "ERROR: The number of arguments is incorrect\n";
        std::cout << "Example: (./replace inputFileName \"inputString\" \"replacementString\")\n";
    }
    return 0;
}
