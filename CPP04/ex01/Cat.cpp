/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:16:09 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 18:25:55 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*Default Constructor*/
Cat::Cat(void) : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	this->brain = new Brain;
	this->test = 10;
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
Cat::Cat(const std::string type) : Animal()
{
	std::cout << "Cat Name constructor called" << std::endl;
	this->_type = type;
	this->brain = new Brain;
	this->test = 10;
	return ;
}

/*Copy Constructor*/
Cat::Cat(Cat const & src) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
Cat	&Cat::operator=(Cat const & src)
{
	std::cout << src.getType() << std::endl;
	this->_type = src._type;
	this->brain = new Brain;
	*(this->brain) = *(src.brain);
	this->test = src.test;
	return (*this);
}

/*Deconstructor*/
Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
	delete(brain);
	return ;
}


/*Outputs the animals sound*/
void	Cat::makeSound(void) const
{
	std::cout << this->_type << " MEEEEOOOOOWWWWWWW!" << std::endl;
}


void	Cat::settest(int i)
{
	this->test = i;
}

int	Cat::gettest(void)
{
	return (this->test);
}