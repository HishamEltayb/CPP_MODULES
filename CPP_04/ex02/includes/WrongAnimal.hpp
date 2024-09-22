/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 20:05:42 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

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

class WrongAnimal
{
	protected:
		std::string type;
		
	public:
		virtual ~WrongAnimal(void);
		WrongAnimal(void);
 		WrongAnimal(const WrongAnimal &existObject);
		WrongAnimal &operator=(const WrongAnimal &existObject);
		
		void	makeSound(void) const;
		std::string		getType(void) const;
};
	
#endif