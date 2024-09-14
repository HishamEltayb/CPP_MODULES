/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:10:58 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 19:15:51 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap 
{
	private:
		std::string name;
	public:
		DiamondTrap(std::string name);
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(const DiamondTrap& DiamondTrap);

		DiamondTrap&	operator=(const DiamondTrap& existObject);
		void whoAmI();
};

#endif