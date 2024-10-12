/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:01:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/12 18:18:41 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <stdexcept>
#include "Colors.hpp"

template <typename typ, typename Func> void iter(typ &arr, size_t length, Func func)
{
	size_t numberOfElements;

	numberOfElements = sizeof(arr) / sizeof(arr[0]);
	if (length >= numberOfElements)
	{
		std::cout << RED BOLD "The provided length exceeds the array size.\n" RESET;
		return ;
	}
	for (size_t i = 0; i < length; i++)
		func(arr[i]);
}

template <class typ> 	void printElement(typ& element)
{std::cout << element << std::endl;}


#endif