/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 10:10:56 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 10:39:28 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
 
#include "Form.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <sys/time.h>

class RobotomyRequestForm : public Form{
	private:
		const std::string	_target;
	public:
						RobotomyRequestForm(void);
						RobotomyRequestForm(const std::string target);
						RobotomyRequestForm(RobotomyRequestForm const & src);
	virtual				~RobotomyRequestForm(void);
	RobotomyRequestForm	&operator=(RobotomyRequestForm const & src);
	const std::string	getTarget(void) const;
	void				execute(Bureaucrat const & executor) const;
};

#endif
