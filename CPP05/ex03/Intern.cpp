/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:30:57 by bschende          #+#    #+#             */
/*   Updated: 2022/10/21 12:03:35 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*Default Constructor*/
Intern::Intern()
{
	std::cout << "Intern Default constructor called" << std::endl;
	return ;
}

/*Deconstructor*/
Intern::~Intern()
{
	std::cout << "Intern Deconstructor called" << std::endl;
	return ;
}

/*Copy Constructor*/
Intern::Intern(Intern const & src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
Intern &Intern::operator=(Intern const &cpy)
{
	(void)cpy;
	return (*this);
}

/*Creates a new PresidentialPardonForm and returns the pointer*/
Form*	Intern::makePardonForm(std::string target)
{
	Form *tmp = NULL;

	tmp = new PresidentialPardonForm(target);
	return (tmp);
}

/*Creates a new ShrubberyCreationForm and returns the pointer*/
Form*	Intern::makeCreationForm(std::string target)
{
	Form *tmp = NULL;

	tmp = new ShrubberyCreationForm(target);
	return (tmp);
}

/*Creates a new RobotomyRequestForm and returns the pointer*/
Form*	Intern::makeRequestForm(std::string target)
{
	Form *tmp = NULL;

	tmp = new RobotomyRequestForm(target);
	return (tmp);
}

/*Creates a new form and returns the pointer*/
Form*	Intern::makeForm(std::string name, std::string target)
{
	Create p[3] = {&Intern::makeCreationForm, &Intern::makeRequestForm, &Intern::makePardonForm};
	std::string form[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	Form *tmp = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form[i] == name)
		{
			tmp = (this->*p[i])(target);
			std::cout << "Intern creates form " << name << std::endl;
			break ;
		}
		else if (i == 2)
			std::cout << "Intern can not create form " << name << " as it does not exist." << std::endl;
	}
	return (tmp);
}
