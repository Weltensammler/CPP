/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 16:57:00 by bschende          #+#    #+#             */
/*   Updated: 2022/10/24 00:08:01 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/*Span Default Constructor*/
Span::Span(unsigned int N) : _count(0)
{
	std::cout << "Span named Constructor called" << std::endl;
	this->_size = N;
	this->_vector = new std::vector<int>(N);
	return ;
}

/*Span Copy Constructor*/
Span::Span(Span const &src)
{
	std::cout << "Span copy Constructor called" << std::endl;
	this->_size = src._size;
	this->_count = src._count;
	this->_vector = new std::vector<int>(src._size);
	for (unsigned int i = 0; i < this->_count; i++)
		this->_vector->at(i) = src._vector->at(i);
	return ;
}

/*Span Copy assignment operator*/
Span	&Span::operator=(Span const &src)
{
	std::cout << "Span copy assignment operator called" << std::endl;
	this->_size = src._size;
	this->_count = src._count;
	if (this->_vector != NULL)
		delete this->_vector;
	this->_vector = new std::vector<int>(src._size);
	for (unsigned int i = 0; i < this->_count; i++)
		this->_vector->at(i) = src._vector->at(i);
	return (*this);
}

/*Span Destructor*/
Span::~Span(void)
{
	std::cout << "Span Destructor called" << std::endl;
	delete this->_vector;
}

/*adds a Number to the class*/
void	Span::addNumber(int i)
{
	if (this->_count < this->_size)
	{
		this->_vector->at(this->_count) = i;
		this->_count++;
	}
	else
		throw Span::NoVacancyException();
}

/*finds the shortest span between all the stored ints*/
unsigned int	Span::shortestSpan(void) const
{
	unsigned int	diff = UINT_MAX;

	if (this->_count < 2)
		throw Span::ToFewElementsException();
	std::sort(this->_vector->begin(), this->_vector->end());
	for (unsigned int i = 0, j = 1; j < _size; i++, j++)
		{
			if (static_cast<unsigned int>(this->_vector->at(j) - this->_vector->at(i)) < diff)
				diff = (this->_vector->at(j) - this->_vector->at(i));
			// std::cout << j << std::endl;
			// std::cout << "ergebnis\t:" << static_cast<unsigned int>(this->_vector->at(j) - this->_vector->at(i)) << std::endl;
		}
	return (diff);
}

/*finds the longest span between all the stored ints*/
unsigned int	Span::longestSpan(void) const
{
	unsigned int	span = 0;

	// for (unsigned int i = 0; i < _size; i++)
	// 	std::cout << this->_vector->at(i) << std::endl;
	if (this->_count < 2)
		throw Span::ToFewElementsException();
	int max = *std::max_element(this->_vector->begin(), this->_vector->end());
	int min = *std::min_element(this->_vector->begin(), this->_vector->end());
	// std::cout << min << "   " << max << std::endl;
	return (span = max - min);
}

/*adds n numbers to the array*/
void	Span::addManyNumbers(unsigned int n)
{
	int	array[n];

	if (this->_size < n)
		throw Span::NoVacancyException();
	this->_count = n;
	std::srand((unsigned)time(NULL));
	for(unsigned int i = 0; i < n; i++)
		array[i] = 0 + (std::rand() % INT_MAX);
	this->_vector->assign(array, array + n);
}

/*User defined exception*/
const char* Span::NoVacancyException::what() const throw()
{
	return ("NoVacancyException: Not enough room");
}

/*Another user defined exception*/
const char* Span::ToFewElementsException::what() const throw()
{
	return ("ToFewElementsException: Less then two numbers stored");
}
