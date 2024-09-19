/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:13:53 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/17 17:21:36 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::~Dog(void)  
{
	std::cout << RED BOLD << "[Dog Destructor called]\n" << RESET;
	delete this->brain;	
}

Dog::Dog(void) : Animal()
{
	std::cout << GREEN BOLD <<"[Dog Default constructor called]\n" <<  RESET;
	this->type = MAGENTA "Dog" RESET;
	this->brain = new Brain;
	this->brain->setIdeas("Dog: Is it time for a treat yet? I hope they pet me soon!");
}

Dog::Dog(const Dog &existObject) : Animal()
{
	std::cout << YELLOW BOLD << "[Dog Copy constructor called]\n" << RESET;
	this->brain = new Brain;
	*this = existObject;
}

Dog& Dog::operator=(const Dog &existObject)
{
	std::cout << MAGENTA BOLD "[Dog Copy assignment operator called]\n" << RESET;
	this->type = existObject.type;
	delete this->brain;
	this->brain = new Brain(*existObject.brain);
	return (*this);
}

void	Dog::makeSound(void) const {std::cout << MAGENTA "WOOF WOOF ...!!\n" RESET;}

void	Dog::printBrainIdeas(void) const
{
	this->brain->printIdeas();	
}

void	Dog::setBrainIdeas(std::string ideas) const
{
	this->brain->setIdeas(ideas);
}


