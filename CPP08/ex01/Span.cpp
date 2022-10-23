/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:57:00 by bschende          #+#    #+#             */
/*   Updated: 2022/10/23 17:30:25 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*Span Default Constructor*/
Span::Span(void) : _array(NULL), _size(0), _count(0)
{
	std::cout << "Span Default Constructor called" << std::endl;
	return ;
}

/*Span Default Constructor*/
Span::Span(unsigned int N) : _count(0)
{
	std::cout << "Span named Constructor called" << std::endl;
	this->_size = N;
	this->_array = new int[N];
	return ;
}

/*Span Copy Constructor*/
Span::Span(Span const &src)
{
	std::cout << "Span copy Constructor called" << std::endl;
	this->_size = src._size;
	this->_count = src._count;
	this->_array = new int[src._size];
	for (unsigned int i = 0; i < this->_count; i++)
		this->_array[i] = src._array[i];
	return ;
}

/*Span Copy assignment operator*/
Span	&Span::operator=(Span const &src)
{
	std::cout << "Span copy assignment operator called" << std::endl;
	this->_size = src._size;
	this->_count = src._count;
	if (this->_array != NULL)
		delete[] this->_array;
	this->_array = new int[src._size];
	for (unsigned int i = 0; i < this->_count; i++)
		this->_array[i] = src._array[i];
	return (*this);
}

/*Span Destructor*/
Span::~Span(void)
{
	std::cout << "Span Destructor called" << std::cout;
	delete[] this->_array;
}
