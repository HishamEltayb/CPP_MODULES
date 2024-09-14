/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 20:05:42 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

#define RED 		"\033[0;31m"
#define WHITE 		"\033[0;37m"
#define GREEN 		"\033[0;32m"
#define BLUE 		"\033[0;34m"
#define CYAN 		"\033[0;36m"
#define YELLOW 		"\033[0;33m"
#define MAGENTA 	"\033[0;35m"
#define BOLD 		"\033[1m"
#define UNDERLINE 	"\033[4m"
#define RESET 		"\033[0m"

class ClapTrap
{
	private:
		std::string			name;
		unsigned int		hitPoints;
		unsigned int		energyPoints;
		unsigned int		attackDamage;
		
	public:
		~ClapTrap(void);
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &existObject);
		ClapTrap &operator=(const ClapTrap &existObject);
		
		void				attack(const std::string& target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		
};

	
#endif
