/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatngCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:16:09 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 14:56:39 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*Default Constructor*/
WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat Default constructor called" << std::endl;
	this->_type = "WrongCat";
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
WrongCat::WrongCat(const std::string type) : WrongAnimal()
{
	std::cout << "WrongCat Name constructor called" << std::endl;
	this->_type = type;
	return ;
}

/*Copy Constructor*/
WrongCat::WrongCat(WrongCat const & src) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
WrongCat	&WrongCat::operator=(WrongCat const & src)
{
	this->_type = src._type;
	return (*this);
}

/*Deconstructor*/
WrongCat::~WrongCat()
{
	std::cout << "WrongCat Deconstructor called" << std::endl;
	return ;
}
