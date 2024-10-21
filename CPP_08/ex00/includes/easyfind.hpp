/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:00:52 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/18 11:38:50 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>
#include <string>
#include <vector>
#include "Colors.hpp"

class notFound : public std::exception 
{
	public:
    	const char* what() const throw();
};

template <typename T>
int easyfind(const T &container, const int &find);

#include "../srcs/easyfind.tpp"

#endif
