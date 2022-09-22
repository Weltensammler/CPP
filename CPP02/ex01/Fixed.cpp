/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:22:41 by bschende          #+#    #+#             */
/*   Updated: 2022/09/22 12:28:23 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*Default Constructor*/
Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	fpval = 0;
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
Fixed::Fixed(const int _fpval)
{
	std::cout << "Value int constructor called" << std::endl;
	fpval = toFp(_fpval);
	return ;
}

/*Constructor that takes a flaoting point number and sets the FP value*/
Fixed::Fixed(const double floatval)
{
	std::cout << "Value float constructor called" << std::endl;
	fpval = toFp(floatval);
	return ;
}

/*Copy Constructor*/
Fixed::Fixed(Fixed const & src)
{
	std::cout << "copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/
Fixed	&Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fpval = rhs.getRawBits();
	return (*this);
}

/*<< Operator overload*/
std::ostream	&operator<<(std::ostream &stream, const Fixed & rhs)
{
	stream << rhs.toDouble();
	return (stream);
}

/*Converts int value to it's Fixed Point value*/
int Fixed::toFp(const int input) const
{
	return (input * (1 << fbits) + (input >= 0 ? 0.5 : -0.5));
}

/*Converts double value to it's Fixed Point value*/
int Fixed::toFp(const double input) const
{
	return (input * (1 << fbits) + (input >= 0 ? 0.5 : -0.5));
}

/*Converts Fixed Point value to it's int value*/
int	Fixed::toInt(void) const
{
	return (fpval / (1 << fbits));
}

/*Converts Fixed Point value to it's double value*/
double	Fixed::toDouble(void) const
{
	return ((double)fpval / (double)(1 << fbits));
}

/*gets the fixed point value*/
int		Fixed::getRawBits(void) const
{
	return (fpval);
}

/*sets the fixed point value*/
void	Fixed::setRawBits(int const raw)
{	
	std::cout << "setRawBits member function called" << std::endl;
	fpval = raw;
	return ;
}

/*Deconstructor*/
Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called" << std::endl;
	return ;
}
