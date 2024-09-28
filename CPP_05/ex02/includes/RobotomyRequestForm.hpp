/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:39:24 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 16:19:10 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Colors.hpp"
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	private:
    	std::string target;
	public:
		~RobotomyRequestForm(void);
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(const RobotomyRequestForm &existObject);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &existObject);

		void	execute(Bureaucrat const & executor) const;
	
};


#endif