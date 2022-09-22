/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:45:17 by bschende          #+#    #+#             */
/*   Updated: 2022/09/22 13:08:48 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
// Fixed a(0);
// Fixed b(3.5);
// Fixed c(a + b);
// Fixed d(b - a);
// Fixed e(a * b);
// Fixed f(b / a);
// Fixed g(++a);

// std::cout << "It works, c = " << c << std::endl;
// std::cout << "It works, d = " << d << std::endl;
// std::cout << "It works, e = " << e << std::endl;
// std::cout << "It works, f = " << f << std::endl;
// std::cout << "It works, g = " << a << std::endl;
// std::cout << "It works, --a = " << --a << std::endl;
// std::cout << "It works, a-- = " << a-- << "It works, a-- = " << a << std::endl;
// a = a.maxfpn(b);
// std::cout << "It works, a = " << a << std::endl;
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << Fixed::max( a, b ) << std::endl;
if (a < b)
	std::cout << "It works < " << std::endl;
if (a > b)
	std::cout << "It works > " << std::endl;
if (a <= b)
	std::cout << "It works <= " << std::endl;
if (a >= b)
	std::cout << "It works >= " << std::endl;
if (a == b)
	std::cout << "It works == " << std::endl;
if (a != b)
	std::cout << "It works != " << std::endl;
a = a + b - b * b / b;
return (0);
}
