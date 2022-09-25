/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:26:26 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 14:48:13 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*Default Constructor*/
Dog::Dog(void) : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_type = "Dog";
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
Dog::Dog(const std::string type) : Animal()
{
	std::cout << "Dog Name constructor called" << std::endl;
	this->_type = type;
	return ;
}

/*Copy Constructor*/
Dog::Dog(Dog const & src) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
Dog	&Dog::operator=(Dog const & src)
{
	this->_type = src._type;
	return (*this);
}

/*Deconstructor*/
Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
	return ;
}


/*Outputs the animals sound*/
void	Dog::makeSound(void) const
{
	std::cout << this->_type << " Bark bark bark!" << std::endl;
}
