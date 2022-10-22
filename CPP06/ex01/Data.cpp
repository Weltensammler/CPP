/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:32:40 by bschende          #+#    #+#             */
/*   Updated: 2022/10/22 11:41:36 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

/*Default Constructor*/
Data::Data() : _member("some data")
{
	std::cout << "Data Constructor called" << std::endl;
	return ;
}

/*Deconstructor*/
Data::~Data()
{
	std::cout << "Data Deconstructor called" << std::endl;
	return ;
}

/*Copy Constructor*/
Data::Data(Data const & src) : _member(src._member)
{
	std::cout << "Data copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
Data	&Data::operator=(Data const &src)
{
	(void)src;
	return (*this);
}

/*reinterprets to uintptr_t*/
uintptr_t serialize(Data* ptr)
{
	uintptr_t	raw;

	raw = reinterpret_cast<uintptr_t>(ptr);
	return (raw);
}

/*reinterprets to data* */
Data* deserialize(uintptr_t raw)
{
	Data *ptr;

	ptr = reinterpret_cast<Data*>(raw);
	return (ptr);
}
