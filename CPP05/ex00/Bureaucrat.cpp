/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 10:55:14 by ben               #+#    #+#             */
/*   Updated: 2022/10/20 22:38:34 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*Default Constructor*/
Bureaucrat::Bureaucrat(void) : _name ("Some Bureaucrat"), _grade (75)
{
	std::cout << "Bureaucrat Default constructor called" << std::endl;
	return ;
}

/*Constructor that that takes Attributes*/
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name (name), _grade (grade)
{
	std::cout << "Bureaucrat Name constructor called" << std::endl;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

/*Copy Constructor*/
Bureaucrat::Bureaucrat(Bureaucrat const & src) : _name (src._name)
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

/*redefining what for toohighexception*/
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("BureaucratException: Grade too High");
}

/*redefining what for toolowexception*/
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("BureaucratException: Grade too Low");
}

/*increments the Grade*/
void	Bureaucrat::incGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

/*decrements the Grade*/
void	Bureaucrat::decGrade(void)
{
	this->_grade++;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}
