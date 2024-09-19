/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/17 17:21:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::~Brain(void) {std::cout << RED BOLD << "[Brain Destructor called]\n" << RESET;}

Brain::Brain(void)
{
	std::cout << GREEN BOLD <<"[Brain Default constructor called]\n" <<  RESET;
}

Brain::Brain(const Brain &existObject)
{
	std::cout << YELLOW BOLD << "[Brain Copy constructor called]\n" << RESET;
	*this = existObject;
}

Brain& Brain::operator=(const Brain &existObject)
{
	std::cout << MAGENTA BOLD "[Brain Copy assignment operator called]\n" << RESET;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = existObject.ideas[i];
	return (*this);
}

void	Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = idea;
}

void	Brain::printIdeas(void)
{
	for (int i = 0; i < 100; i++)
		std::cout << this->ideas[i] + "\n";
	std::cout << std::endl;
}
