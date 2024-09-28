/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 11:37:46 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/27 11:42:56 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Colors.hpp"
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private:
    	std::string target;
	public:
		~PresidentialPardonForm(void);
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(const PresidentialPardonForm &existObject);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &existObject);

		void	execute(Bureaucrat const & executor) const;
};

#endif