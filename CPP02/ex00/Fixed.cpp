/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:29:10 by bschende          #+#    #+#             */
/*   Updated: 2022/09/17 16:17:20 by bschende         ###   ########.fr       */
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

/*Copy Constructor*/
Fixed::Fixed(Fixed const & src)
{
	std::cout << "copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*Operator overload*/
Fixed	&Fixed::operator=(Fixed const & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	fpval = rhs.getRawBits();
	return (*this);
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
}

/*Deconstructor*/
Fixed::~Fixed(void)
{
	std::cout << "Deconstructor called" << std::endl;
}
