#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include "Colors.hpp"

class RPN {
private:
    std::stack<int> numbers;
    
    bool isOperator(const std::string& token);
    bool isNumber(const std::string& token);
    void performOperation(const std::string& op);

public:
    ~RPN();
    RPN();
    RPN(const RPN &other);
    RPN &operator=(const RPN &other);
    
    void calculate(const std::string& expression);
};

#endif
