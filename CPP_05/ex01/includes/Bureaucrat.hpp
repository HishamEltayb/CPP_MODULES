/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 09:52:01 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Colors.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>
#include <exception> 

class Form;

class Bureaucrat
{
	private:
		const std::string			name;
		int							grade;
		
	public:
		~Bureaucrat(void);
		Bureaucrat(void);
		Bureaucrat(int grade, std::string name);
		Bureaucrat(const Bureaucrat &existObject);
		Bureaucrat &operator=(const Bureaucrat &existObject);

		const std::string& 		getName(void) const;
		int						getGrade(void) const;
		void					incrementGrade(void);
		void					decrementGrade(void);
		void					signForm( Form &form) const;
	
	class gradeTooHighException : public std::exception
	{
		public:
			const char * what()	const throw ();
	};
	class gradeTooLowException : public std::exception
	{
		public:
			const char * what()	const throw ();
	};
		
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);

#endif
