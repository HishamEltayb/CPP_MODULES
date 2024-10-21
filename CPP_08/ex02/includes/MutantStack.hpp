/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 17:28:25 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/20 12:32:01 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <deque>
#include <stack>
#include <vector>
#include <algorithm>
#include <numeric>
#include "Colors.hpp"

template <class T,  class Container = std::vector<T> >
class MutantStack : public std::stack <T, Container>
{
	private:
	
	public:
		~MutantStack();
		MutantStack();
		MutantStack(MutantStack const &other);
		MutantStack &operator=(MutantStack const &other);

        typedef typename Container::iterator iterator;
        typedef typename Container::const_iterator const_iterator;

     	iterator begin();
        iterator end();
       	const_iterator cbegin();
       	const_iterator cend();
		
};

#include "../srcs/MutantStack.tpp"

#endif



//this is the original std::stack template class 
// Class template std::stack

// namespace std {
//   template<class T, class Container = deque<T>>
//   class stack
//   {
//   public:
//     using value_type      = typename Container::value_type;
//     using reference       = typename Container::reference;
//     using const_reference = typename Container::const_reference;
//     using size_type       = typename Container::size_type;
//     using container_type  = Container;
 
//   protected:
//     Container c;
 
//   public:
//     stack()
//       : stack(Container())
//     {
//     }
//     explicit stack(const Container&);
//     explicit stack(Container&&);
//     template<class InputIter>
//     stack(InputIter first, InputIter last);
//     template<container-compatible-range<T> R>
//     stack(from_range_t, R&& rg);
//     template<class Alloc>
//     explicit stack(const Alloc&);
//     template<class Alloc>
//     stack(const Container&, const Alloc&);
//     template<class Alloc>
//     stack(Container&&, const Alloc&);
//     template<class Alloc>
//     stack(const stack&, const Alloc&);
//     template<class Alloc>
//     stack(stack&&, const Alloc&);
//     template<class InputIter, class Alloc>
//     stack(InputIter first, InputIter last, const Alloc&);
//     template<container-compatible-range<T> R, class Alloc>
//     stack(from_range_t, R&& rg, const Alloc&);
 
//     bool empty() const { return c.empty(); }
//     size_type size() const { return c.size(); }
//     reference top() { return c.back(); }
//     const_reference top() const { return c.back(); }
//     void push(const value_type& x) { c.push_back(x); }
//     void push(value_type&& x) { c.push_back(std::move(x)); }
//     template<container-compatible-range<T> R>
//     void push_range(R&& rg);
//     template<class... Args>
//     decltype(auto) emplace(Args&&... args)
//     {
//       return c.emplace_back(std::forward<Args>(args)...);
//     }
//     void pop() { c.pop_back(); }
//     void swap(stack& s) noexcept(is_nothrow_swappable_v<Container>)
//     {
//       using std::swap;
//       swap(c, s.c);
//     }
//   };
 
//   template<class Container>
//   stack(Container) -> stack<typename Container::value_type, Container>;
 
//   template<class InputIter>
//   stack(InputIter, InputIter) -> stack</*iter-value-type*/<InputIter>>;
 
//   template<ranges::input_range R>
//   stack(from_range_t, R&&) -> stack<ranges::range_value_t<R>>;
 
//   template<class Container, class Allocator>
//   stack(Container, Allocator) -> stack<typename Container::value_type, Container>;
 
//   template<class InputIter, class Allocator>
//   stack(InputIter, InputIter, Allocator)
//     -> stack</*iter-value-type*/<InputIter>,
//              deque</*iter-value-type*/<InputIter>, Allocator>>;
 
//   template<ranges::input_range R, class Allocator>
//   stack(from_range_t, R&&, Allocator)
//     -> stack<ranges::range_value_t<R>, deque<ranges::range_value_t<R>, Allocator>>;
 
//   template<class T, class Container, class Alloc>
//   struct uses_allocator<stack<T, Container>, Alloc>
//     : uses_allocator<Container, Alloc>::type
//   {};
// }