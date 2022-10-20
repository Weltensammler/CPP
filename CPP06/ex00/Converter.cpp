/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:42:53 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 22:25:58 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

/*Default Constructor*/
Converter::Converter() : _input("Default"), _type("UNDEFINED")
{
	std::cout << "Converter Default constructor called" << std::endl;
	return ;
}

/*Constructor that that takes Attributes*/
Converter::Converter(std::string const input) : _input(input), _type("UNDEFINED")
{
	std::cout << "Converter Name constructor called" << std::endl;
	return ;
}

/*Deconstructor*/
Converter::~Converter()
{
	std::cout << "Converter Deconstructor called" << std::endl;
	return ;
}

/*Copy Constructor*/
Converter::Converter(Converter const & src) : _input(src._input)
{
	std::cout << "Converter copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
Converter &Converter::operator=(Converter const &src)
{
	this->_type = src._type;
	return (*this);
}

/*gets the input*/
const std::string Converter::getInput(void) const
{
	return (this->_input);
}

/*gets the type*/
std::string	Converter::getType(void) const
{
	return (this->_type);
}

/*identifies the type*/
void	Converter::identType(void)
{
	if (this->_input.length() == 1 && !isdigit(this->_input.at(0)))
		this->_type = "CHAR";
	else if ()
}