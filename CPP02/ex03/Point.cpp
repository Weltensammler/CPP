/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:51:05 by bschende          #+#    #+#             */
/*   Updated: 2022/09/22 12:42:39 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/*Default Constructor*/
Point::Point() : x(0), y(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

/*Constructor to set value of x and y*/
Point::Point(const float xval, const float yval) : x(xval), y(yval)
{
	std::cout << "Point Default constructor called" << std::endl;
	dx = x.toDouble();
	dy = y.toDouble();
	return ;
}

/*Copy Constructor*/
Point::Point(Point const & src)
{
	std::cout << "Point copy constructor called" << std::endl;
	this->dx = src.getDoubleX();
	this->dy = src.getDoubleY();
	return ;
}

/*= Operator overload*/
Point	&Point::operator=(Point const & rhs)
{
	std::cout << "Point Copy assignment operator called" << std::endl;
	(void)rhs;
	return (*this);
}

/*gets dx*/
double		Point::getDoubleX(void) const
{
	std::cout << "getxdouble member function called" << std::endl;
	return (dx);
}

/*gets dy*/
double		Point::getDoubleY(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (dy);
}

Point::~Point()
{
}
