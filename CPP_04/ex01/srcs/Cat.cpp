/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/17 17:21:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::~Cat(void)  
{
	std::cout << RED BOLD << "[Cat Destructor called]\n" << RESET;
	delete this->brain;
}

Cat::Cat(void) : Animal()
{
	std::cout << GREEN BOLD <<"[Cat Default constructor called]\n" <<  RESET;
	this->type = YELLOW "Cat" RESET;
	this->brain = new Brain;
	this->brain->setIdeas("Cat: Should I knock this off the table... or take a nap first?");

}

Cat::Cat(const Cat &existObject) : Animal()
{
	std::cout << YELLOW BOLD << "[Cat Copy constructor called]\n" << RESET;
	this->brain = new Brain;
	*this = existObject;
}

Cat& Cat::operator=(const Cat &existObject)
{
	std::cout << MAGENTA BOLD "[Cat Copy assignment operator called]\n" << RESET;
	this->type = existObject.type;
	delete this->brain;
	this->brain = new Brain(*existObject.brain);
	return (*this);
}

void	Cat::makeSound(void) const {std::cout << YELLOW "MEOW ...!!\n" RESET;}

void	Cat::printBrainIdeas(void) const
{
	this->brain->printIdeas();	
}

void	Cat::setBrainIdeas(std::string ideas) const
{
	this->brain->setIdeas(ideas);
}

