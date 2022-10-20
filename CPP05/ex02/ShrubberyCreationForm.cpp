/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:24:13 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 15:10:38 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*Default Constructor*/
ShrubberyCreationForm::ShrubberyCreationForm() : Form(), _target("Default")
{
	std::cout << "ShrubberyCreationForm Default constructor called" << std::endl;
	return ;
}

/*Constructor that that takes Attributes*/
ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Shrubbery creation", false, 25, 5), _target(target)
{
	std::cout << "ShrubberyCreationForm Name constructor called" << std::endl;
}

/*Deconstructor*/
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm Deconstructor called" << std::endl;
	return ;
}

/*Copy Constructor*/
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src), _target(src._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &cpy)
{
	(void)cpy;
	return (*this);
}

/*gets the target*/
const std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

/*executes the ShrubberyCreationForm*/
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::fstream	file;
	int				i = 0;

	if (executor.getGrade() > getExLevel())
		throw Bureaucrat::GradeTooLowException();
	else if (!getSignature())
		throw Form::FormNotSignedException();
	else
	{
		file.open((this->getTarget() + "_shrubbery").c_str(), std::fstream::out);
		if (!file.is_open())
		{
			std::cout << "Could not open file" << std::endl;
			file.close();
			return;
		}
		while (i < 2)
		{
			file << "             * *" << std::endl;
			file << "          *    *  *" << std::endl;
			file << "      *  *    *     *  *" << std::endl;
			file << "     *     *    *  *    *" << std::endl;
			file << " * *   *    *    *    *   *" << std::endl;
			file << " *     *  *    * * .#  *   *" << std::endl;
			file << " *   *     * #.  .# *   *" << std::endl;
			file << "  *      #.  #: #  * *    *" << std::endl;
			file << " *   * *  #. ##        *" << std::endl;
			file << "   *        ###" << std::endl;
			file << "             ###" << std::endl;
			file << "              ##." << std::endl;
			file << "              .##:" << std::endl;
			file << "              :###" << std::endl;
			file << "              ;###" << std::endl;
			file << "            ,####." << std::endl;
			file << "           .######." << std::endl;
			file << std::endl
				 << std::endl;
			i++;
		}
		file.close();
	}
}
