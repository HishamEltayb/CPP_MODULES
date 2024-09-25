/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/25 14:05:15 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main() {
    try {
        Bureaucrat b(2, "John");
        std::cout << b << std::endl;

        b.incrementGrade(); 
        std::cout << b << std::endl;

        b.incrementGrade();
    }
    catch (const std::string e) {
        std::cerr << "Error: " << e << std::endl;
    }

    try {
        Bureaucrat b(151, "Mike");
    }
    catch (const std::string e) {
        std::cerr << "Error: " << e << std::endl;
    }

    return 0;
}