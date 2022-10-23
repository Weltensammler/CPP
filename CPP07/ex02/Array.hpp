/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:40:23 by bschende          #+#    #+#             */
/*   Updated: 2022/10/23 11:23:08 by bschende         ###   ########.fr       */
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
			this->_size = 0;
			this->_array = NULL;
			return ;
		};
		Array(unsigned int n)
		{
			_size = n;
			this->_array = new T[_size];
			return ;
		};
		Array(const Array &src)
		{
			this->_size = src._size;
			this->_array = new T[_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = src._array[i];
			return ;
		};
		Array	&operator=(Array const &src)
		{
			this->_size = src._size;
			if (this->_array != NULL)
				delete[] this->_array;;
			this->_array = new T[_size];
			for (unsigned int i = 0; i < this->_size; i++)
				this->_array[i] = src._array[i];
			return (*this);
		};
		T		&operator[](int index)
		{
			if (index < 0 || static_cast<size_t>(index) >= _size)
				throw OutOfRangeException();
			return(this->_array[index]);
		}
		T		&operator[](int index) const
		{
			if (index < 0 || static_cast<size_t>(index) >= _size)
				throw OutOfRangeException();
			return(_array[index]);
		}
		~Array()
		{
			delete[] this->_array;
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
	return("index is out of range!");
}

#endif
