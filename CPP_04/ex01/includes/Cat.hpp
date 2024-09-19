/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 20:05:42 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		~Cat(void);
		Cat(void);
		Cat(const Cat &existObject);
		Cat &operator=(const Cat &existObject);

		void	makeSound(void) const;
		void	printBrainIdeas(void) const;
		void	setBrainIdeas(std::string idea) const;

};

	
#endif
