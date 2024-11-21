#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <stdexcept>
#include "Colors.hpp"

#define SUCCESS 0
#define TOOLARGE 1
#define BADINPUT 2
#define NEGATIVE 3
#define NOTVALIDDATE 4
#define NOTFOUND -1

class BitcoinExchange 
{
    private:
        std::map<std::string, float> database;
        
        int         isValidDate(const std::string& date);
        float       findClosestValue(const std::string& date);
        int         parseInput(const std::string& line, std::string& date, float& value);
        void        loadDatabase(const std::string& filename);

    public:
        ~BitcoinExchange();
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange(const std::string& database_file);
        BitcoinExchange &operator=(const BitcoinExchange &other);
        void processInputFile(const std::string& input_file);

        class errorOpeningFile : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class badHeader : public std::exception
        {
            public:
                const char *what() const throw();
        };
        
};

#endif