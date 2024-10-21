/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 12:00:35 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/18 17:27:43 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/* ------------------------------- Orthodox ------------------------------- */
Span::Span() : maxSize(0)
{
	std::cout << GREEN BOLD "Span Default constructor called\n" RESET;
}

Span::~Span()
{
	std::cout << RED BOLD "Span destructor called\n" RESET;
}

Span::Span(const Span &other) : maxSize(other.maxSize)
{
	std::cout << RED BOLD "Span copy constructor called\n" RESET;
	*this = other;
}

Span &Span::operator=(const Span &other)
{
	std::cout << RED BOLD "Span copy assignement called\n" RESET;
	if (this == &other)
		return *this;
	this->maxSize = other.maxSize;
	this->vec = other.vec;
	return *this;
}
/* ------------------------------- Orthodox ------------------------------- */


/* ------------------------------- Required Constructor ------------------------------- */
Span::Span(unsigned int N) : maxSize(N)
{
	std::cout << GREEN BOLD "Span parameter N constructor called\n" RESET;
}
/* ------------------------------- Required Constructor ------------------------------- */



/* --------------------------- Memeber functions --------------------------- */
void Span::addNumber(int newElement)
{
	if (this->vec.size() >= this->maxSize)
		throw Span::FullContainer();
	else
		this->vec.push_back(newElement);
}

int Span::shortestSpan(void) 
{
	if (this->vec.size() < 2)
		throw Span::SpanNotFound();
	
	std::vector<int> sorted = this->vec;
    std::sort(sorted.begin(), sorted.end());

	std::vector<int> difference;
	std::adjacent_difference(sorted.begin(), sorted.end(), std::back_inserter(difference));
	
	int min_diff = *std::min_element(difference.begin() + 1, difference.end());

	return min_diff;
}

int Span::longestSpan() 
{
	if (this->vec.size() < 2)
		throw Span::SpanNotFound();

	int min = *std::min_element(this->vec.begin(), this->vec.end());
    int max = *std::max_element(this->vec.begin(), this->vec.end());

	return (max - min);
}

        
std::vector<int>		Span::getVector(void)
{
	return (this->vec);
}

/* --------------------------- Memeber functions --------------------------- */


/* ------------------------------- Exceptions ------------------------------- */
const char* Span::FullContainer::what() const throw() 
{
	const char * exceptionMsg = RED BOLD "Vector is Full!...!!" RESET;
	return (exceptionMsg);
}

const char* Span::SpanNotFound::what() const throw() 
{
	const char * exceptionMsg = RED BOLD "Not Enough Numbers to Find Span!...!!" RESET;
	return (exceptionMsg);
}

/* ------------------------------- Exceptions ------------------------------- */

std::ostream& operator<<(std::ostream& out,  Span& span)
{
	std::vector<int> temp;

	temp = span.getVector();
	std::vector<int>::iterator it;
	for (it =  temp.begin(); it != temp.end(); it++)
		out << *it << " " ;
	out << "\n";
	return (out);
}
