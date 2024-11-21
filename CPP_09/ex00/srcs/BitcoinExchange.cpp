#include "BitcoinExchange.hpp"

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange() 
{
    loadDatabase("/others/data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}
BitcoinExchange::BitcoinExchange(const std::string& database_file) 
{
    try
    {
        loadDatabase(database_file);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
        this->database = other.database;
    return (*this);
}

void BitcoinExchange::loadDatabase(const std::string& filename) 
{
    std::ifstream file(filename.c_str());
    if (!file.is_open()) 
        throw errorOpeningFile();
    
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line)) 
    {
        std::stringstream ss(line);
        std::string date;
        std::string value_str;
        
        if (std::getline(ss, date, ',') && std::getline(ss, value_str)) 
        {
            float value = std::atof(value_str.c_str());
            this->database[date] = value;
        }
    }
}

int BitcoinExchange::isValidDate(const std::string& date) 
{
    if (date.length() != 10) return (NOTVALIDDATE);
    if (date[4] != '-' || date[7] != '-') return (NOTVALIDDATE);
    
    for (size_t i = 0; i < date.length(); i++) 
    {
        if (i != 4 && i != 7 && !isdigit(date[i]))
            return (NOTVALIDDATE);
    }
    int year = std::atoi(date.substr(0, 4).c_str());
    int month = std::atoi(date.substr(5, 2).c_str());
    int day = std::atoi(date.substr(8, 2).c_str());
    
    if (year < 2009 || year > 2024 || month < 1 || month > 12 || day < 1 || day > 31)
        return (NOTVALIDDATE);
    
    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30) return (NOTVALIDDATE);
    }
    else if (month == 2) 
    {
        bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
        if ((isLeap && day > 29) || (!isLeap && day > 28)) return (NOTVALIDDATE);
    }
    return (SUCCESS);
}

float BitcoinExchange::findClosestValue(const std::string& date)
{
    std::map<std::string, float>::iterator it = this->database.upper_bound(date);
    if (it != this->database.begin()) 
    {
        --it;
        return (it->second);
    }
    if (it == this->database.begin())
        return (this->database.begin()->second);
    
    return (NOTFOUND);
}

int BitcoinExchange::parseInput(const std::string& line, std::string& date, float& value) 
{
    std::stringstream ss(line);
    std::string date_str, value_str;
    
    if (std::getline(ss, date_str, '|') && std::getline(ss, value_str)) 
    {
        date = date_str.substr(0, date_str.find_last_not_of(" \t") + 1);
        value_str = value_str.substr(value_str.find_first_not_of(" \t"));
        size_t i = 0;
        if (value_str.empty() || (value_str[0] != '-' && !isdigit(value_str[0]))) 
        {
            return (BADINPUT);
        }
        if (value_str[0] == '-') 
            i++;
        while (i < value_str.length() && value_str[i] == '0') i++;
        int j = 0;
        for (; i < value_str.length(); i++) 
        {
            if (!isdigit(value_str[i])) return (BADINPUT);
            j++;
            if (j > 10) return (TOOLARGE);
        }
        value = std::atof(value_str.c_str());
        if (value < 0) return (NEGATIVE);
        if (value > 1000) return (TOOLARGE);
        return (SUCCESS);
    }
    return (BADINPUT);
}

void BitcoinExchange::processInputFile(const std::string& input_file) 
{
    std::ifstream file(input_file.c_str());
    if (!file.is_open()) 
        throw errorOpeningFile();

    std::string line;
    std::getline(file, line);
    if (line.empty() || line != "date | value")
        throw badHeader();
    while (std::getline(file, line)) 
    {
        std::string date;
        float value;
        int status = parseInput(line, date, value);
        
        if (status == BADINPUT) 
        {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        if (status == TOOLARGE)
        {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }
        if (status == NEGATIVE)
        {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }
        status = isValidDate(date);

        if (status == NOTVALIDDATE) 
        {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }
        float exchange_rate = findClosestValue(date);
        float result = value * exchange_rate;
        std::cout << date << " => " << value << " = " << result << std::endl;
    }
}

const char *BitcoinExchange::errorOpeningFile::what() const throw()
{
    return ("Error: could not open file.");
}

const char *BitcoinExchange::badHeader::what() const throw()
{
    return ("Error: bad header.");
}