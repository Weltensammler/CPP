/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:17:15 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 11:04:13 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*Default Constructor*/
PresidentialPardonForm::PresidentialPardonForm() : Form(), _target("Default")
{
	std::cout << "PresidentialPardonForm Default constructor called" << std::endl;
	return ;
}

/*Constructor that that takes Attributes*/
PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("PresidentialPardon", false, 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm Name constructor called" << std::endl;
}

/*Deconstructor*/
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Deconstructor called" << std::endl;
	return ;
}

/*Copy Constructor*/
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src), _target(src._target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &cpy)
{
	(void)cpy;//Was ist das ?
	return (*this);
}

/*gets the target*/
const std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

/*executes the PresidentialPardonForm*/
void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getExLevel())
		throw Bureaucrat::GradeTooLowException();
	if (!getSignature())
		throw Form::FormNotSignedException();
	else
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
