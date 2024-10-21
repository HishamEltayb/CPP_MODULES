/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 11:47:29 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/18 17:30:02 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <numeric>
#include <ctime>
#include <iterator>
#include <algorithm>
#include "Colors.hpp"

class Span
{
	private:
		unsigned int		maxSize;
		std::vector<int>	vec;
		Span();

	public:
	/* ------------------------------- Orthodox ------------------------------- */
		~Span();
		Span(const Span &other);
		Span &operator=(const Span &other);
		
	/* ------------------------------- Required Constructor ------------------------------- */
		Span(unsigned int N);
	
	
	/* --------------------------- Memeber functions --------------------------- */
		void								addNumber(int newElement);
		int									shortestSpan(void);
		int									longestSpan(void);
		template<typename It> void			addRange(It begin, It end);


	/* ------------------------------- Exceptions ------------------------------- */
	class FullContainer : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class SpanNotFound : public std::exception
	{
		public:
			const char *what() const throw();
	};

	std::vector<int>		getVector(void);

};

std::ostream& operator<<(std::ostream& out, Span& span);
#include "../srcs/Span.tpp"
#endif 
