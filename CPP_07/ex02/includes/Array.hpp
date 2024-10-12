/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:02:44 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/12 13:56:56 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <cstdlib>
#include "Colors.hpp"
#include <climits>

template <typename T>
class Array
{
	private:
		T				*arr;
		size_t			arrSize;

	public:
		Array(void);
		Array(unsigned int n);
		~Array(void);
		Array(const Array& existObject);
		Array&	operator=(const Array& rhs);
		
		T&		operator[](unsigned int index);
		
		unsigned int	size(void) const;

		class OutOfBounds : public std::exception
		{
			public:
				const char* what() const throw();
		};
};

#include "../srcs/Array.tpp"
#endif