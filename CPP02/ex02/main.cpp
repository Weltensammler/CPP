/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:45:17 by bschende          #+#    #+#             */
/*   Updated: 2022/09/21 13:45:58 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a(0.00390625);
Fixed b(3.5);
Fixed c(a + b);
Fixed d(b - a);
Fixed e(a * b);
Fixed f(b / a);
Fixed g(++a);

std::cout << "It works, c = " << c << std::endl;
std::cout << "It works, d = " << d << std::endl;
std::cout << "It works, e = " << e << std::endl;
std::cout << "It works, f = " << f << std::endl;
std::cout << "It works, g = " << a << std::endl;
std::cout << "It works, --a = " << --a << std::endl;
std::cout << "It works, a-- = " << a-- << "It works, a-- = " << a << std::endl;
return 0;
}
