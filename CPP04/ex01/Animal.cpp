/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:55:12 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 18:12:00 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*Default Constructor*/
Animal::Animal(void)
{
	std::cout << "Animal Default constructor called" << std::endl;
	_type = "Some Animal";
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
Animal::Animal(const std::string type)
{
	std::cout << "Animal Name constructor called" << std::endl;
	this->_type = type;
	return ;
}

/*Copy Constructor*/
Animal::Animal(Animal const & src)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
Animal	&Animal::operator=(Animal const & src)
{
	this->_type = src._type;
	return (*this);
}

/*Deconstructor*/
Animal::~Animal()
{
	std::cout << "Animal Deconstructor called" << std::endl;
	return ;
}

/*get's the animals type*/
std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << this->_type << " makes generic animal noises" << std::endl;
}
