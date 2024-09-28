/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:06:32 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 09:51:49 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Colors.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <string>
#include <exception> 

#define NOT_SIGNED	1
#define SIGNED 		0
class Bureaucrat;

class Form
{
	private:
		const std::string	formName;
		bool				signedStatus;
		const int			gradeRequiredToSign;
		const int			gradeRequiredToExecute;
		
	public:
		~Form(void);
		Form(void);
		Form(const std::string &formName, const int &gradeRequiredToSign, const int &gradeRequiredToExecute);
		Form(const Form &existObject);
		Form &operator=(const Form &existObject);
	

		const std::string	&getFormName(void) const ;
		bool				getSignedStatus(void) const ;
		const int			&getGradeRequiredToSign(void) const ;
		const int			&getGradeRequiredToExecute(void) const ;
		void				beSigned(const Bureaucrat &bureaucrat) ;
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

std::ostream& operator<<(std::ostream &out, const Form &Bureaucrat);

#endif