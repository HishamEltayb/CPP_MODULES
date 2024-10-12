/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:00:30 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/11 15:51:45 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include "Colors.hpp"

template <typename templ>
void	swap(templ& x, templ& y)
{
	templ tmp = x;
	
	x = y;
	y = tmp;
}

template <typename templ>
templ		max(templ const x, templ const y)
{
	return (x > y ? x : y);
}

template <typename templ>
templ		min(templ const x, templ const y)
{
	return (x < y ? x : y);
}

#endif