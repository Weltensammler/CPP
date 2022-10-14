/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:55:14 by ben               #+#    #+#             */
/*   Updated: 2022/10/14 11:22:19 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*Default Constructor*/
Bureaucrat::Bureaucrat(void)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	_name = "Some Bureaucrat";
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
Bureaucrat::Bureaucrat(const std::string name, int grade)
{
	std::cout << "Bureaucrat Name constructor called" << std::endl;
	this->_name = name;
	this->_grade = grade;
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
	this->_name = src._name;
	this->_grade = src._grade;
	return (*this);
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
