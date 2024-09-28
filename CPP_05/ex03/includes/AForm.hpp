/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:06:32 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 14:53:26 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Colors.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception> 
#include <fstream>
#include <cstdlib>

#define NOT_SIGNED	1
#define SIGNED 		0

class Bureaucrat;

class AForm
{
	private:
		const std::string	formName;
		bool				signedStatus;
		const int			gradeRequiredToSign;//the minimum
		const int			gradeRequiredToExecute;//the minimum
		

		
	public:
		virtual ~AForm(void);
		AForm(void);
		AForm(const std::string &formName, const int &gradeRequiredToSign, const int &gradeRequiredToExecute);
		AForm(const AForm &existObject);
		AForm &operator=(const AForm &existObject);
	
		const std::string	&getFormName(void) const ;
		bool				getSignedStatus(void) const ;
		const int			&getGradeRequiredToSign(void) const ;
		const int			&getGradeRequiredToExecute(void) const ;
		void				beSigned(const Bureaucrat &bureaucrat) ;

		virtual void	execute(Bureaucrat const & executor) const = 0;
	
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
		class FormNotSignedException : public std::exception
		{
			public:
				const char * what()	const throw ();
		};

	
};

std::ostream& operator<<(std::ostream &out, const AForm &Bureaucrat);

#endif