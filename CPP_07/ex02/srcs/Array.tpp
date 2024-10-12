/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:02:20 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/12 18:20:16 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

#include "Array.hpp"

template <typename T> Array<T>::Array() : arr(new T[0]()), arrSize(0) {}

template <typename T> Array<T>::Array(unsigned int n) : arrSize(n) {this->arr = new T[n];}

template <typename T> Array<T>::Array(const Array& existObject)  {this->arr = new T[0](); this->arrSize = 0; *this = existObject;}

template <typename T> Array<T>&	Array<T>::operator=(const Array& array)
{
	if (array.arrSize > 0)
	{
		delete[] this->arr;
		this->arrSize = array.arrSize;
		this->arr = new T[array.arrSize]();
		for (unsigned int i = 0; i < array.arrSize; i++)
			arr[i] = array.arr[i];
	}
	return (*this);
}

template <typename T> T&	Array<T>::operator[](unsigned int index)
{
	if (index >= this->arrSize)
		throw OutOfBounds();
	return (arr[index]);
}

template <typename T> Array<T>::~Array()
{
	if (this->arr)
		delete[] this->arr;
}

template <typename T> const char * Array<T>::OutOfBounds::what(void) const throw()
{
	const char * exceptionMsg = RED BOLD "Index is Out Of Bounds!...!!" RESET;
	return (exceptionMsg);
}

template <typename T> unsigned int	Array<T>::size() const {return this->arrSize;}

#endif