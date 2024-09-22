/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:59:31 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/22 13:10:24 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>
#include <string>

#define RED 				"\033[0;31m"
#define WHITE 				"\033[0;37m"
#define GREEN 				"\033[0;32m"
#define BLUE 				"\033[0;34m"
#define CYAN 				"\033[0;36m"
#define YELLOW 				"\033[0;33m"
#define MAGENTA 			"\033[0;35m"
#define DARK_GRAY    		"\033[1;30m"
#define ORANGE       		"\033[0;91m"
#define PINK         		"\033[0;95m"
#define LIGHT_RED    		"\033[2;31m"
#define LIGHT_GREEN  		"\033[2;32m"
#define LIGHT_YELLOW 		"\033[2;33m"
#define LIGHT_BLUE   		"\033[3;34m"
#define LIGHT_MAGENTA 		"\033[2;35m"
#define LIGHT_CYAN   		"\033[2;36m"
#define LIGHT_WHITE  		"\033[2;37m"

#define BG_RED       		"\033[41m"
#define BG_GREEN     		"\033[42m"
#define BG_YELLOW    		"\033[43m"
#define BG_BLUE      		"\033[44m"
#define BG_MAGENTA   		"\033[45m"
#define BG_CYAN      		"\033[46m"
#define BG_WHITE     		"\033[47m"
#define BG_LIGHT_RED 		"\033[101m"
#define BG_LIGHT_GREEN 		"\033[102m"
#define BG_LIGHT_YELLOW 	"\033[103m"
#define BG_LIGHT_BLUE 		"\033[104m"
#define BG_LIGHT_MAGENTA 	"\033[105m"
#define BG_LIGHT_CYAN 		"\033[106m"
#define BG_GRAY      		"\033[100m"


#define BOLD 				"\033[1m"
#define ITALIC       		"\033[3m"
#define STRIKETHROUGH 		"\033[9m"
#define UNDERLINE 			"\033[4m"
#define DOUBLE_UNDERLINE 	"\033[21m"

#define RESET 				"\033[0m"

#include <iostream>
#include <string>
#include "Node.hpp"
#include "LinkedList.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

#endif