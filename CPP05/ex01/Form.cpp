/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:51:12 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 22:44:19 by bschende         ###   ########.fr       */
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
Form::Form(const std::string name, int silevel, int exlevel) : _name (name), _signed (false), _silevel (silevel), _exlevel (exlevel)
{
	std::cout << "Form Name constructor called" << std::endl;
	if (this->_silevel < 1 || this->_exlevel < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_silevel > 150 || this->_exlevel > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

/*Copy Constructor*/
Form::Form(Form const & src) : _name (src._name), _silevel (src._silevel), _exlevel (src._exlevel)
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
std::ostream	&operator<<(std::ostream &stream, const Form & src)
{
	stream << "Form Name: " << src.getName() << "\n" << "Is Form signed: " << src.getSignature() << "\n" << "Required grade to sign: " << src.getSiLevel() << "\n" << "Required grade to execute: " << src.getExLevel() << std::endl;;
	return (stream);
}

/*Deconstructor*/
Form::~Form()
{
	std::cout << "Form Deconstructor called" << std::endl;
	return ;
}

/*gets Name of Form*/
std::string	Form::getName(void) const
{
	return (this->_name);
}

/*gets if Form is signed*/
bool	Form::getSignature(void) const
{
	return (this->_signed);
}

/*gets silevel of Form*/
int	Form::getSiLevel(void) const
{
	return (this->_silevel);
}

/*gets exlevel of Form*/
int	Form::getExLevel(void) const
{
	return (this->_exlevel);
}

/*signs the form if level is high enough*/
void	Form::beSigned(Bureaucrat &src)
{
	if (src.getGrade() <= this->_silevel)
		this->_signed = true;
	else if (src.getGrade() > this->_silevel)
		throw Bureaucrat::GradeTooLowException();
}
