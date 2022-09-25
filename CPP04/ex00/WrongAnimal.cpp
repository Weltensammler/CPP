/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimalnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:55:12 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 15:26:12 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*Default Constructor*/
WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
	_type = "Some wrong Animal";
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
WrongAnimal::WrongAnimal(const std::string type)
{
	std::cout << "WrongAnimal Name constructor called" << std::endl;
	this->_type = type;
	return ;
}

/*Copy Constructor*/
WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
WrongAnimal	&WrongAnimal::operator=(WrongAnimal const & src)
{
	this->_type = src._type;
	return (*this);
}

/*Deconstructor*/
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Deconstructor called" << std::endl;
	return ;
}

/*get's the WrongAnimals type*/
std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << this->_type << " makes generic WrongAnimal noises" << std::endl;
}
