/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:51:12 by bschende          #+#    #+#             */
/*   Updated: 2022/10/19 15:02:29 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*Default Constructor*/
Form::Form(void) : _name ("Some Form"), _signed (false), _silevel (150), _exlevel (150)
{
	std::cout << "Form Default constructor called" << std::endl;
	return ;
}

/*Constructor that that takes Attributes*/
Form::Form(const std::string name, bool signature, int silevel, int exlevel) : _name (name), _signed (signature), _silevel (silevel), _exlevel (exlevel)
{
	std::cout << "Form Name constructor called" << std::endl;
	if (this->_silevel < 1 || this->_exlevel < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_silevel > 150 || this->_exlevel > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

/*Copy Constructor*/
Form::Form(Form const & src)
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
Form	&Form::operator=(Form const & src)
{
	this->_signed = src._signed;
	return (*this);
}

/*<< Operator overload*/	
std::ostream	&operator<<(std::ostream &stream, const Bureaucrat & rhs)
{
	stream << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return (stream);
}

/*Deconstructor*/
Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Deconstructor called" << std::endl;
	return ;
}