/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:18:43 by bschende          #+#    #+#             */
/*   Updated: 2022/10/20 21:08:23 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>

class Converter{
	private:
		const std::string	_input;
		std::string			_type;
		enum types{
			UNDETERMINED,
			INVALID,
			CHAR,
			INT,
			FLOAT,
			DOUBLE,
			NAN_,
			INF,
		};
	public:
						Converter(void);
						Converter(const std::string input);
						Converter(Converter const & src);
	virtual				~Converter(void);
	Converter			&operator=(Converter const & src);
	const std::string	getInput(void) const;
	std::string			getType(void) const;
	
	void				identType(void);
};

#endif