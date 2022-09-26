/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:26:26 by bschende          #+#    #+#             */
/*   Updated: 2022/09/26 10:55:59 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*Default Constructor*/
Dog::Dog(void) : Animal()
{
	std::cout << "Dog Default constructor called" << std::endl;
	this->_type = "Dog";
	this->brain = new Brain;
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
Dog::Dog(const std::string type) : Animal()
{
	std::cout << "Dog Name constructor called" << std::endl;
	this->_type = type;
	this->brain = new Brain;
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
	this->brain = new Brain;
	*(this->brain) = *(src.brain);
	return (*this);
}

/*Deconstructor*/
Dog::~Dog()
{
	std::cout << "Dog Deconstructor called" << std::endl;
	delete(brain);
	return ;
}


/*Outputs the animals sound*/
void	Dog::makeSound(void) const
{
	std::cout << this->_type << " Bark bark bark!" << std::endl;
}

/*get's the dogs type*/
std::string	Dog::getType(void) const
{
	return (this->_type);
}
