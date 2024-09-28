/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 12:00:07 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Colors.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>
#include <exception> 


class AForm;

class Bureaucrat
{
	private:
		const std::string			name;
		int							grade;
		
	public:
		~Bureaucrat(void);
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &existObject);
		Bureaucrat &operator=(const Bureaucrat &existObject);

		const std::string& 		getName(void) const;
		int						getGrade(void) const;
		void					incrementGrade(void);
		void					decrementGrade(void);
		void					signForm(AForm &form) const;
	
		void executeForm(const AForm &form) const;
		
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
