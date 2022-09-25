/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:16:09 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 14:48:09 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*Default Constructor*/
Cat::Cat(void) : Animal()
{
	std::cout << "Cat Default constructor called" << std::endl;
	this->_type = "Cat";
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
Cat::Cat(const std::string type) : Animal()
{
	std::cout << "Cat Name constructor called" << std::endl;
	this->_type = type;
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
	this->_type = src._type;
	return (*this);
}

/*Deconstructor*/
Cat::~Cat()
{
	std::cout << "Cat Deconstructor called" << std::endl;
	return ;
}


/*Outputs the animals sound*/
void	Cat::makeSound(void) const
{
	std::cout << this->_type << " MEEEEOOOOOWWWWWWW!" << std::endl;
}
