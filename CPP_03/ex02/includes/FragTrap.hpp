/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:10:58 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 21:24:42 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(void);
		~FragTrap(void);
		FragTrap(const FragTrap& fragtrap);

		FragTrap&	operator=(const FragTrap& existObject);
		void		attack(const std::string& target);
		void 		highFivesGuys();
};

#endif