/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 13:37:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/04 15:58:27 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

#define RED "\033[0;31m"
#define WHITE "\033[0;37m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define CYAN "\033[0;36m"
#define YELLOW "\033[0;33m"
#define MAGENTA "\033[0;35m"
#define BOLD "\033[1m"
#define UNDERLINE "\033[4m"
#define RESET "\033[0m"



class Harl 
{
	private:
		std::string 	levels[6];
		void			(Harl::*comments[6])(void);

		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);
		void			finish(void);
		
	public:
		Harl(void);
		~Harl(void);
		
		void			complain(std::string level);
};

#endif