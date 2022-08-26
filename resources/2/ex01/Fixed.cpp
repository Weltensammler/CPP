//
// Fixed.cpp
//

#include <cmath>
#include <iostream>
#include "Fixed.h"

const int	Fixed::_bits = 8;

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	this->_value = value * (1 << _bits);
}

Fixed::Fixed(const float value)
{
	float	temp;

	std::cout << "Float constructor called" << std::endl;
	temp = value * (1 << _bits);
	this->_value = roundf(temp);
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	_value = obj._value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float	Fixed::toFloat(void) const
{
	return (_value / (float)(1 << _bits));
}

int		Fixed::toInt(void) const
{
	return (_value / (1 << _bits));
}

// https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}
