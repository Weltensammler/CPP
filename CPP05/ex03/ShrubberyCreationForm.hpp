/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:20:30 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 10:39:38 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <iostream>
#include <fstream>
#include <string>

class ShrubberyCreationForm : public Form{
	private:
	const std::string		_target;
	public:
							ShrubberyCreationForm(void);
							ShrubberyCreationForm(const std::string target);
							ShrubberyCreationForm(ShrubberyCreationForm const & src);
	virtual					~ShrubberyCreationForm(void);
	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const & src);
	const std::string		getTarget(void) const;
	void					execute(Bureaucrat const & executor) const;
};

#endif
