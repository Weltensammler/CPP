/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:47:58 by bschende          #+#    #+#             */
/*   Updated: 2022/09/22 12:40:45 by bschende         ###   ########.fr       */
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

/*> Operator overload*/
bool	Fixed::operator>(Fixed const & rhs) const
{
	std::cout << "> Operator overload called" << std::endl;
	if (toDouble() > rhs.toDouble())
		return (true);
	return (false);
}

/*< Operator overload*/
bool	Fixed::operator<(Fixed const & rhs) const
{
	std::cout << "< Operator overload called" << std::endl;
	if (toDouble() < rhs.toDouble())
		return (true);
	return (false);
}

/*>= Operator overload*/
bool	Fixed::operator>=(Fixed const & rhs) const
{
	std::cout << ">= Operator overload called" << std::endl;
	if (toDouble() >= rhs.toDouble())
		return (true);
	return (false);
}

/*<= Operator overload*/
bool	Fixed::operator<=(Fixed const & rhs) const
{
	std::cout << "<= Operator overload called" << std::endl;
	if (toDouble() <= rhs.toDouble())
		return (true);
	return (false);
}

/*== Operator overload*/
bool	Fixed::operator==(Fixed const & rhs) const
{
	std::cout << "== Operator overload called" << std::endl;
	if (toDouble() == rhs.toDouble())
		return (true);
	return (false);
}

/*!= Operator overload*/
bool	Fixed::operator!=(Fixed const & rhs) const
{
	std::cout << "!= Operator overload called" << std::endl;
	if (toDouble() != rhs.toDouble())
		return (true);
	return (false);
}

/*+ Operator overload*/
Fixed	Fixed::operator+(Fixed const & rhs) const
{
	std::cout << "+ Operator overload called" << std::endl;
	return (toDouble() + rhs.toDouble());
}

/*- Operator overload*/
Fixed	Fixed::operator-(Fixed const & rhs) const
{
	std::cout << "- Operator overload called" << std::endl;
	return (toDouble() - rhs.toDouble());
}

/** Operator overload*/
Fixed	Fixed::operator*(Fixed const & rhs) const
{
	std::cout << "* Operator overload called" << std::endl;
	return (toDouble() * rhs.toDouble());
}

/*/ Operator overload*/
Fixed	Fixed::operator/(Fixed const & rhs) const
{
	std::cout << "/ Operator overload called" << std::endl;
	return (toDouble() / rhs.toDouble());
}

/*++ prefix Operator overload*/
Fixed	Fixed::operator++()
{
	std::cout << "++ Prefix Operator overload called" << std::endl;
	++fpval;
	return (*this);
}

/*++ postfix Operator overload*/
Fixed	Fixed::operator++(int)
{
	std::cout << "++ Postfix Operator overload called" << std::endl;
	Fixed temp = *this;
	++*this;
	return (temp);
}

/*-- prefix Operator overload*/
Fixed	Fixed::operator--()
{
	std::cout << "-- Prefix Operator overload called" << std::endl;
	--fpval;
	return (*this);
}

/*-- postfix Operator overload*/
Fixed	Fixed::operator--(int)
{
	std::cout << "-- Postfix Operator overload called" << std::endl;
	Fixed temp = *this;
	--*this;
	return (temp);
}

/*<< Operator overload*/
std::ostream	&operator<<(std::ostream &stream, const Fixed & rhs)
{
	std::cout << "<< Operator overload called" << std::endl;
	stream << rhs.toDouble();
	return (stream);
}

/*Converts int value to it's Fixed Point value*/
int Fixed::toFp(const int input) const
{
	std::cout << "inttofp function called called" << std::endl;
	return (input * (1 << fbits) + (input >= 0 ? 0.5 : -0.5));
}

/*Converts double value to it's Fixed Point value*/
int Fixed::toFp(const double input) const
{
	std::cout << "doubletofp function called called" << std::endl;
	return (input * (1 << fbits) + (input >= 0 ? 0.5 : -0.5));
}

/*Converts Fixed Point value to it's int value*/
int	Fixed::toInt(void) const
{
	std::cout << "toint function called called" << std::endl;
	return (fpval / (1 << fbits));
}

/*Converts Fixed Point value to it's double value*/
double	Fixed::toDouble(void) const
{
	std::cout << "todouble function called called" << std::endl;
	return ((double)fpval / (double)(1 << fbits));
}

/*gets the fixed point value*/
int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fpval);
}

/*sets the fixed point value*/
void	Fixed::setRawBits(int const raw)
{	
	std::cout << "setRawBits member function called" << std::endl;
	fpval = raw;
	return ;
}

/*Returns a reference to the smallest of two fp numbers*/
Fixed	&Fixed::min(Fixed &fpone, Fixed &fptwo)
{
	std::cout << "min member function called" << std::endl;
	if (fpone.toDouble() < fptwo.toDouble())
		return (fpone);
	return (fptwo);
}

/*Returns a reference to the smallest of two const fp numbers*/
const Fixed	&Fixed::min(Fixed const &fpone, Fixed const &fptwo)
{
	std::cout << "const min member function called" << std::endl;
	if (fpone.toDouble() < fptwo.toDouble())
		return (fpone);
	return (fptwo);
}

/*Returns a reference to the bigger of two fp numbers*/
Fixed	&Fixed::max(Fixed &fpone, Fixed &fptwo)
{
	std::cout << "max member function called" << std::endl;
	if (fpone.toDouble() > fptwo.toDouble())
		return (fpone);
	return (fptwo);
}

/*Returns a reference to the bigger of two const fp numbers*/
const Fixed	&Fixed::max(Fixed const &fpone, Fixed const &fptwo)
{
	std::cout << "const max member function called" << std::endl;
	if (fpone.toDouble() > fptwo.toDouble())
		return (fpone);
	return (fptwo);
}

/*Deconstructor*/
Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called" << std::endl;
	return ;
}
