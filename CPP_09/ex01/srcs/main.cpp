#include "RPN.hpp"

int main(int argc, char **argv) 
{
    if (argc != 2) 
    {
        std::cerr << "Error" << std::endl;
        return (1);
    }
    
    RPN calculator;
    try 
    {
        calculator.calculate(argv[1]);
    }
    catch (const std::exception& e) 
    {
        std::cerr << e.what() << std::endl;
        return (1);
    }
    
    return (0);
}