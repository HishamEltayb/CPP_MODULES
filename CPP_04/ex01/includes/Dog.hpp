/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 20:05:42 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;

	public:
		~Dog(void);
		Dog(void);
		Dog(const Dog &existObject);
		Dog &operator=(const Dog &existObject);
		
		void	makeSound(void) const;
		void	printBrainIdeas(void) const;
		void	setBrainIdeas(std::string idea) const;
};


#endif
