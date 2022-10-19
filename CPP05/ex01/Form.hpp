/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:42:23 by bschende          #+#    #+#             */
/*   Updated: 2022/10/19 14:55:40 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class	Form{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_silevel;
		const int			_exlevel;
	public:
			Form(void);
			Form(const std::string name, bool signature, int silevel, int exlevel);
			Form(Form const & src);
			~Form(void);
	Form	&operator=(Form const & src);
};

#endif
