#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <utility>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <exception>
#include "Colors.hpp"

class PmergeMe
{
	private:
		/***************** Private Attribues *****************/
		std::vector<int>		vec;
		std::list<int>			lst;

		/***************** Template Private Mmember Functions *****************/
		template <typename Container>
		Container							mergeInsertSort(Container& container);

		template <typename Container>
		std::vector<std::pair<int, int> >	createPairs(const Container& container);

		template <typename Container>
		Container							insertSmallerElements(const Container& sorted, Container smaller);


		/***************** Private Member Functions *****************/
		bool					isDigit(std::string& str);
		int						jacobsthal(int n);
		std::vector<int>		JacobsthalSequence(size_t n);
		void					printElements() const;

	public:
		/***************** Constructes and Destructors *****************/
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);

		/***************** Public Member Functions *****************/
		void					parsing(int argc, char* argv[]);
		void					sort();


		/***************** Exceptions *****************/
		class badInput : public std::exception
		{
			const char* what() const throw();
		};
};


#endif