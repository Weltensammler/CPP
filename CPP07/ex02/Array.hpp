/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:40:23 by bschende          #+#    #+#             */
/*   Updated: 2022/10/22 23:33:38 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>

template<typename T>
class	Array{
	private:
		unsigned int	_size;
		T				*_array;
	public:
		Array()
		{
			_size = 0;
			_array = NULL;
			return ;
		};
		Array(unsigned int n)
		{
			_size = n;
			_array = new T[n];
			return ;
		};
		Array(const Array &src)
		{
			this->_size = src._size;
			this->_array = new T[_size];
			(*this->_array) = (*src._array);
			*this = src;
			return ;
		};
		Array	&operator=(Array const &src)
		{
			this->_size = src._size;
			this->_array = new T[_size];
			*(this->_array) = *(src._array);
			return (*this);
		};
		T		&operator[](int index)
		{
			if (index < 0 || static_cast<size_t>(index) >= _size)
				throw OutOfRangeException();
			return(_array[index]);
		}
		T		&operator[](int index) const
		{
			if (index < 0 || static_cast<size_t>(index) >= _size)
				throw OutOfRangeException();
			return(_array[index]);
		}
		~Array()
		{
			delete _array;
			return ;
		};
		unsigned int size(void) const
		{
			return (this->_size);
		};
		class OutOfRangeException : public std::exception
		{
			virtual const char* what() const throw();
		};
};

template<class T>
const char* Array<T>::OutOfRangeException::what() const throw()
{
	return("index is ousite of the size!");
}

#endif
