/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:55:14 by ben               #+#    #+#             */
/*   Updated: 2022/10/14 13:36:11 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*Default Constructor*/
Bureaucrat::Bureaucrat(void) : _name {"Some Bureaucrat"}
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name {name}, _grade {grade}
{
	std::cout << "Bureaucrat Name constructor called" << std::endl;
	return ;
}

/*Copy Constructor*/
Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
Bureaucrat	&Bureaucrat::operator=(Bureaucrat const & src)
{
	this->_grade = src._grade;
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

/*getter Name*/
std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

/*getter Grade*/
int			Bureaucrat::getGrade(void) const
{
	return (_grade);
}

