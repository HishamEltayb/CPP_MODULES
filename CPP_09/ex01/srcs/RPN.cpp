#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}

RPN::RPN(const RPN &other) 
{
    *this = other;
}

RPN &RPN::operator=(const RPN &other) 
{
    if (this != &other) 
        this->numbers = other.numbers;
    return (*this);
}


bool RPN::isOperator(const std::string& token) 
{
    return (token == "+" || token == "-" || token == "*" || token == "/");
}

bool RPN::isNumber(const std::string& token) 
{
    if (token.empty() || (token.length() > 1 && token[0] == '0')) return (false);
    
    for (std::string::const_iterator it = token.begin(); it != token.end(); ++it) 
        if (!isdigit(*it)) return (false);
    
    int num = std::atoi(token.c_str());
    return (num >= 0 && num < 10);
}

void RPN::performOperation(const std::string& op) 
{
    if (this->numbers.size() < 2) 
        throw std::runtime_error("Error: insufficient operands");
    
    int b = this->numbers.top();
    this->numbers.pop();
    int a = this->numbers.top();
    this->numbers.pop();
    
    if (op == "+") 
        this->numbers.push(a + b);
    else if (op == "-") 
        this->numbers.push(a - b);
    else if (op == "*") 
        this->numbers.push(a * b);
    else if (op == "/") 
    {
        if (b == 0) 
            throw std::runtime_error("Error: division by zero");
        this->numbers.push(a / b);
    }
}

void RPN::calculate(const std::string& expression) 
{
    std::istringstream iss(expression);
    std::string token;
    while (iss >> token) 
    {
        if (isNumber(token)) 
            this->numbers.push(std::atoi(token.c_str()));
        else if (isOperator(token)) 
            performOperation(token);
        else 
            throw std::runtime_error("Error: invalid token");
    }
    if (this->numbers.size() != 1) 
        throw std::runtime_error("Error: invalid expression");
    
    std::cout << "Result: " << this->numbers.top() << std::endl;
}

