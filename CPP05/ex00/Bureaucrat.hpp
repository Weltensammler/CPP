/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:06:15 by ben               #+#    #+#             */
/*   Updated: 2022/10/14 11:19:37 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat{
	protected:
		const std::string	_name;
		int					_grade;
	public:
					Bureaucrat(void);
					Bureaucrat(const std::string name, int grade);
					Bureaucrat(Bureaucrat const & src);
					~Bureaucrat(void);
	Bureaucrat		&operator=(Bureaucrat const & src);
	std::string		getName(void) const;
	int				getGrade(void) const;
};

#endif