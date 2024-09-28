/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 10:22:37 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 11:16:21 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Colors.hpp"
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
    	std::string target;
	public:
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string &target);
		ShrubberyCreationForm(const ShrubberyCreationForm &existObject);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &existObject);

		void	execute(Bureaucrat const & executor) const;
	
};


#endif