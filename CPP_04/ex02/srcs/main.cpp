/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/22 14:48:01 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	{
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		delete j;
		delete i;
	}

	//this Abstract class that cannot be instantiated on its own
	// Animal what;
	{

		int numberOfObjects = 9;
		
		Animal *Animal[numberOfObjects];

		int i = 0;
		
		//creating the first half as Dogs
		for (; i < numberOfObjects / 2; i++)
			Animal[i] = new Dog();
		
		//creating the second half as Cats
		for (; i < numberOfObjects; i++)
			Animal[i] = new Cat();
		
		i = 0;

		//just making sure of the type and the sound and the ideas of the Dog brain
		for (; i < numberOfObjects / 2; i++)
		{
			const Dog *pointerToDogClass = dynamic_cast<const Dog *>(Animal[i]);
			std::cout << Animal[i]->getType() << " (" << i  + 1<< ")" << std::endl;
			Animal[i]->makeSound();
			pointerToDogClass->printBrainIdeas();
			pointerToDogClass->setBrainIdeas("DOG: I want to chase the cat");
			pointerToDogClass->printBrainIdeas();
		}
		
		//just making sure of the type and the sound and the ideas of the Cat brain
		for (; i < numberOfObjects; i++)
		{
			const Cat *pointerToCatClass = dynamic_cast<const Cat *>(Animal[i]);
			std::cout << Animal[i]->getType() << " (" << i + 1<< ")" << std::endl;
			Animal[i]->makeSound();
			pointerToCatClass->printBrainIdeas();
			pointerToCatClass->setBrainIdeas("CAT: I want to run from the dog");
			pointerToCatClass->printBrainIdeas();
		}
		i = 0;
		//deleting the Dogs memory 
		for (; i < numberOfObjects / 2; i++)
			delete Animal[i];

		
		//deleting the Cats memory 
		for (; i < numberOfObjects; i++)
			delete Animal[i];

	}

	{
		Animal *dogg = new Dog();
			
		const Dog *pointerTodoggClass = dynamic_cast<const Dog *>(dogg);

		if (pointerTodoggClass == NULL)
			std::cout << "not ok\n";
		else
			std::cout << "ok\n";
			
		std::cout << dogg->getType() << " " << std::endl;
		dogg->makeSound();
		pointerTodoggClass->printBrainIdeas();
		pointerTodoggClass->setBrainIdeas("DOG: I want to chase the cat");
		pointerTodoggClass->printBrainIdeas();
		delete dogg;
		std::cout << std::endl;

		const Animal *catt = new Cat();
		const Cat *pointerTocattClass = dynamic_cast<const Cat *>(catt);
		std::cout << catt->getType() << " " << std::endl;
		catt->makeSound();
		pointerTocattClass->printBrainIdeas();
		pointerTocattClass->setBrainIdeas("CAT: I want to run from the dog");
		pointerTocattClass->printBrainIdeas();
		delete catt;
		std::cout << std::endl;
		

	}


	return 0;
}