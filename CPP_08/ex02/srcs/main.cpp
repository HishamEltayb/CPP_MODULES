/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:28:37 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/21 08:44:04 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

#include <iostream>
#include <list>

int main() 
{
    MutantStack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.push(40);

    std::cout << "Stack size before pop: " << stack.size() << std::endl;

    stack.pop();

    std::cout << "Stack size after pop: " << stack.size() << std::endl;

    std::cout << "Elements in MutantStack: ";
    for (MutantStack<int>::iterator it = stack.begin(); it != stack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Elements using const_iterator: ";
    for (MutantStack<int>::const_iterator it = stack.cbegin(); it != stack.cend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return (0);
}
