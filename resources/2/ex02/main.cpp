//
// main.cpp
//

#include <iostream>
#include "Fixed.h"

int	main(void)
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c = b;

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "- - -" << std::endl;

	if (a < c)
		std::cout << "true story" << std::endl;
	if (c > a)
	 	std::cout << "true story x2" << std::endl;
	if (c >= a)
		std::cout << "true story x3" << std::endl;
	if (a <= c)
		std::cout << "true story x4" << std::endl;
	if (a == c)
		std::cout << "error" << std::endl;
	else
		std::cout << "true story x5" << std::endl;
	if (a != c)
		std::cout << "true story x6" << std::endl;
	std::cout << "- - -" << std::endl;
	
	std::cout << "a = " << a << ", c = " << c << std::endl;
	std::cout << "a + c = " << a + c << std::endl;
	std::cout << "a - c = " << a - c << std::endl;
	std::cout << "a * c = " << a * c << std::endl;
	std::cout << "c / a = " << c / a << std::endl;
	std::cout << "- - -" << std::endl;

	std::cout << "min(a, c) = " << Fixed::min(a, c) << std::endl;
	std::cout << "max(a, c) = " << Fixed::max(a, c) << std::endl;
	return 0;
}
