/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 18:18:43 by bschende          #+#    #+#             */
/*   Updated: 2022/10/21 22:55:56 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>
#include <string>
// #include <limits>

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

class Converter{
	private:
		std::string		_input;								//done
		types			_type;								//done
		void			identType(void);					//done
		void			identNumType(std::string str);		//done
		void			convertChar(void) const;			//done
		void			convertInt(void) const;				//done
		void			convertFloat(void) const;			//done
		void			convertDouble(void) const;			//done
		void			convertNan(void) const;				//done
		void			convertInf(void) const;				//done
	public:
						Converter(void);					//done
						Converter(Converter const & src);	//done
	virtual				~Converter(void);					//done
	Converter			&operator=(Converter const & src);	//done
	std::string			getInput(void) const;				//done
	void				setInput(const std::string str);	//done
	types				getType(void) const;				//done
	void				outputConversions(void);			//done
};

#endif