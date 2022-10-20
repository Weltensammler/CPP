/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:25:08 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 11:50:16 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
	public:
							Intern(void);
							Intern(Intern const & src);
	virtual					~Intern(void);
	Intern					&operator=(Intern const & src);
	Form*					makeForm(std::string name, std::string target);
};

#endif
