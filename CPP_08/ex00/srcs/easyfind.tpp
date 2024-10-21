/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 10:00:56 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/18 12:06:16 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
#define EASYFIND_TPP
#include "easyfind.hpp"

const char* notFound::what() const throw() 
{
	const char * exceptionMsg = RED BOLD "Not Found!...!!" RESET;
	return (exceptionMsg);
}

template <typename T>
int easyfind(const T &container, const int &find) 
{
    typename T::const_iterator it = std::find(container.begin(), container.end(), find);
    if (it != container.end())
        return *it;
    else
        throw notFound();
}

#endif