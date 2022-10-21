/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:25:08 by bschende          #+#    #+#             */
/*   Updated: 2022/10/21 12:04:48 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>


class Intern{
	private:
	Form*					makePardonForm(std::string target);
	Form*					makeCreationForm(std::string target);
	Form*					makeRequestForm(std::string target);
	public:
							Intern(void);
							Intern(Intern const & src);
	virtual					~Intern(void);
	Intern					&operator=(Intern const & src);
	Form*					makeForm(std::string name, std::string target);
	typedef Form* (Intern::*Create)(std::string);
};

#endif
