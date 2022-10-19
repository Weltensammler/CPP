/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:06:15 by ben               #+#    #+#             */
/*   Updated: 2022/10/19 14:07:01 by bschende         ###   ########.fr       */
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
	void			incGrade(void);
	void			decGrade(void);
	class			GradeTooHighException : public std::exception
	{
			virtual	const char* what() const throw();
	};
	class			GradeTooLowException : public std::exception
	{
			virtual	const char* what() const throw();
	};
};

std::ostream	&operator<<(std::ostream &stream, const Bureaucrat & rhs);

#endif