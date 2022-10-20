/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:15:47 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 10:39:15 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include <string>
#include <iostream>

class PresidentialPardonForm : public Form{
	private:
		const std::string	_target;
	public:
							PresidentialPardonForm(void);
							PresidentialPardonForm(const std::string target);
							PresidentialPardonForm(PresidentialPardonForm const & src);
	virtual					~PresidentialPardonForm(void);
	PresidentialPardonForm	&operator=(PresidentialPardonForm const & src);
	const std::string		getTarget(void) const;
	void					execute(Bureaucrat const & executor) const;
};

#endif
