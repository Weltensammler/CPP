/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:30:57 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 15:12:31 by bschende         ###   ########.fr       */
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

/*Creates a new form and returns the pointer*/
Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string form[3] = {"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon"};
	int caseNumb = -1;
	Form *tmp = NULL;
	for (int i = 0; i < 3; i++)
	{
		if (form[i] == name)
		{
			caseNumb = i;
			break ;
		}
	}
	switch (caseNumb)
	{
		case 0:
			tmp = new ShrubberyCreationForm(target);
			std::cout << "Intern creates form " << name << std::endl;
			break;
		case 1:
			tmp = new RobotomyRequestForm(target);
			std::cout << "Intern creates form " << name << std::endl;
			break;
		case 2:
			tmp = new PresidentialPardonForm(target);
			std::cout << "Intern creates form " << name << std::endl;
			break;
		default:
			std::cout << "Intern can not create form " << name << " as it does not exist." << std::endl;
			break;
	}
	return (tmp);
}
