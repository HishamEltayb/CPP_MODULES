/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:12:48 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 14:46:34 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>

class AForm;

class Intern
{
    private:
        AForm*  RobotomyRequestFormCreate(const std::string& targetName);
        AForm*  ShrubberyCreationFormCreate(const std::string& targetName);
        AForm*  PresidentialPardonFormCreate(const std::string& targetName);

    public:
        Intern();
        ~Intern();
        Intern(const Intern&  other);
        Intern& operator=(Intern const & rhs);

        AForm*    makeForm(std::string formName, std::string targetName);
		
		class FormDoesntExsitsException : public std::exception 
		{
			public:
				const char* what() const throw();
		};
};

#endif




