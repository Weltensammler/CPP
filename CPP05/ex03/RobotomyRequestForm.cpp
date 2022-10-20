/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:13:52 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 11:03:39 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*Default Constructor*/
RobotomyRequestForm::RobotomyRequestForm() : Form(), _target("Default")
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
	return ;
}

/*Constructor that that takes Attributes*/
RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Robotomy request", false, 25, 5), _target(target)
{
	std::cout << "RobotomyRequestForm Name constructor called" << std::endl;
}

/*Deconstructor*/
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm Deconstructor called" << std::endl;
	return ;
}

/*Copy Constructor*/
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : Form(src), _target(src._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &cpy)
{
	(void)cpy;//Was ist das ?
	return (*this);
}

/*gets the target*/
const std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

/*executes the RobotomyRequestForm*/
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	struct timeval	current_time;

	gettimeofday(&current_time, NULL);
	std::srand(current_time.tv_usec);
	if (executor.getGrade() > getExLevel())
		throw Bureaucrat::GradeTooLowException();
	if (!getSignature())
		throw Form::FormNotSignedException();
	else
	{
		std::cout << "******************************************" << std::endl;
		std::cout << "BzzzZzzzZZZzzzZ BrrRRRRrrrRRRrrrr BzzzzZzz" << std::endl;
		std::cout << "******************************************" << std::endl;
		
		if ((std::rand() % 2))
		{
			std::cout << this->getTarget() << " was successfully";
			std::cout << " robotomized !" << std::endl << std::endl;
		}
		else
		{
			std::cout << this->getTarget() << " FAILED to be";
			std::cout << " robotomized !" << std::endl << std::endl;
		}
	}
}
