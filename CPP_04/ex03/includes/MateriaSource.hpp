/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/09/14 20:05:42 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "main.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* inventory[4];
		
	public:
		~MateriaSource(void);
		MateriaSource(void);
 		MateriaSource(const MateriaSource &existObject);
		MateriaSource &operator=(const MateriaSource &existObject);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);

};
	
#endif