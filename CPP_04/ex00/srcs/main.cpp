/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/19 10:33:55 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"



int main(void)
{
	//AnimalType.
	const Animal *animal = new Animal();
	std::cout << animal->getType() << " " << std::endl;
	animal->makeSound();
	delete animal;
	std::cout << std::endl;
	
	//AnimalType->DogType
	const Animal *dog = new Dog();
	std::cout << dog->getType() << " " << std::endl;
	dog->makeSound();
	delete dog;
	std::cout << std::endl;
	
	//AnimalType->CatType
	const Animal *cat = new Cat();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	delete cat;
	std::cout << std::endl;
	
	//WrongAnimalType -> WrongCatType
	const WrongAnimal *wrongcat = new WrongCat();
	std::cout << wrongcat->getType() << " " << std::endl;
	wrongcat->makeSound();
	delete wrongcat;
	std::cout << std::endl;
	return (0);
}