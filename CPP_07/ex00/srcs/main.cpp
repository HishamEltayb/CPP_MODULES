/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: heltayb <heltayb@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 13:14:41 by heltayb           #+#    #+#             */
/*   Updated: 2024/10/12 14:27:56 by heltayb          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

// int main()
// {
// 	int a = 2;
// 	int b = 3;
// 	::swap<int>( a, b );
// 	std::cout << BLUE BOLD "a = " << a << ", b = " << b << std::endl << RESET;
// 	std::cout << BLUE BOLD "min( a, b ) = " << ::min<int>( a, b ) << std::endl << RESET;
// 	std::cout << BLUE BOLD "max( a, b ) = " << ::max<int>( a, b ) << std::endl << RESET;
// 	std::string c = "chaine1";
// 	std::string d = "chaine2";
// 	::swap<std::string>(c, d);
// 	std::cout << YELLOW BOLD "c = " << c << ", d = " << d << std::endl << RESET;
// 	std::cout << YELLOW BOLD "min( c, d ) = " << ::min<std::string>( c, d ) << std::endl << RESET;
// 	std::cout << YELLOW BOLD "max( c, d ) = " << ::max<std::string>( c, d ) << std::endl << RESET;
// 	return 0;
// }


class Awesome
{
  public:
    Awesome(void) : _n(0) {}
    Awesome( int n ) : _n( n ) {}
    Awesome & operator= (Awesome & a) { _n = a._n; return *this; }
    bool operator==( Awesome const & rhs ) const { return (this->_n == rhs._n); }
    bool operator!=( Awesome const & rhs ) const{ return (this->_n != rhs._n); }
    bool operator>( Awesome const & rhs ) const { return (this->_n > rhs._n); }
    bool operator<( Awesome const & rhs ) const { return (this->_n < rhs._n); }
    bool operator>=( Awesome const & rhs ) const { return (this->_n >= rhs._n); }
    bool operator<=( Awesome const & rhs ) const { return (this->_n <= rhs._n); }
    int get_n() const { return _n; }
  private:
    int _n;
};
std::ostream & operator<<(std::ostream & o, const Awesome &a) { o << a.get_n(); return o; }

int main(void)
{
	Awesome a(2), b(4);

        swap(a, b);
        std::cout << a << " " << b << std::endl;
        std::cout << max(a, b) << std::endl;
        std::cout << min(a, b) << std::endl;
        return (0);
}