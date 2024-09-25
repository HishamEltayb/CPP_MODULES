/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/25 14:06:26 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include "Colors.hpp"
#include <iostream>
#include <string>
#include <exception> 

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
		static std::string		gradeTooHighException(void);
		static std::string		gradeTooLowException(void);
};
std::string gradeTooHighException(void) : public excep
std::ostream& operator<<(std::ostream &out, const Bureaucrat &Bureaucrat);

#endif
