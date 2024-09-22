/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/22 14:52:52 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(void)
{
	const Animal* d = new Dog();
	const Animal* c = new Cat();
	delete d;
	delete c;
	
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
		






		
	//AnimalType->DogType
	// const Dog *pointerToDogClass = dynamic_cast<const Dog *>(dog);
	// std::cout << dog->getType() << " " << std::endl;
	// dog->makeSound();
	// pointerToDogClass->printBrainIdeas();
	// pointerToDogClass->setBrainIdeas("DOG: I want to chase the cat");
	// pointerToDogClass->printBrainIdeas();
	// delete dog;
	// std::cout << std::endl;

	// const Animal *cat = new Cat();
	// const Cat *pointerToCatClass = dynamic_cast<const Dog *>(cat);
	// std::cout << cat->getType() << " " << std::endl;
	// cat->makeSound();
	// pointerToCatClass->printBrainIdeas();
	// pointerToCatClass->setBrainIdeas("CAT: I want to run from the dog");
	// pointerToCatClass->printBrainIdeas();
	// delete cat;
	// std::cout << std::endl;
	
	return 0;
}