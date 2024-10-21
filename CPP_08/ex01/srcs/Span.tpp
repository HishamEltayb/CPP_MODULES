/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.tpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 16:35:38 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/18 17:22:03 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_TPP
#define SPAN_TPP

#include "Span.hpp"

template<typename It>
void Span::addRange(It begin, It end)
{
    if (begin == end)
        return;
    size_t distance = std::distance(begin, end);
	
    if (this->vec.size() + distance > this->maxSize)
        throw Span::FullContainer();
    
    this->vec.insert(this->vec.end(), begin, end);
    
}

#endif