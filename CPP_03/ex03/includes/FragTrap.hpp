/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:10:58 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 22:32:05 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		unsigned int attackDamage;
		unsigned int hitPoints;
	public:
		FragTrap(std::string name);
		FragTrap(void);
		~FragTrap(void);
		FragTrap(const FragTrap& fragtrap);

		FragTrap&	operator=(const FragTrap& existObject);
		void 		highFivesGuys();
};

#endif