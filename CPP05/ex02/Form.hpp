/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 14:42:23 by bschende          #+#    #+#             */
/*   Updated: 2022/10/19 18:13:06 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

class Bureaucrat;

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
	virtual			~Form(void);
	Form			&operator=(Form const & src);
	std::string		getName(void) const;
	bool			getSignature(void) const;
	int				getSiLevel(void) const;
	int				getExLevel(void) const;
	void			beSigned(Bureaucrat &src);
	virtual void	execute(Bureaucrat const & executor) const = 0;
};

std::ostream	&operator<<(std::ostream &stream, const Form & src);

#endif
