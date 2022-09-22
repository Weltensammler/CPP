/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:22:49 by bschende          #+#    #+#             */
/*   Updated: 2022/09/22 12:24:50 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <sstream>
#include <string>

class	Fixed{
	private:
		int					fpval;
		static const int	fbits = 8;
	public:
				Fixed(void);
				Fixed(const int intval);
				Fixed(const double floatval);
				Fixed(Fixed const & src);
				~Fixed();

		Fixed	&operator=(Fixed const & rhs);
		int		toFp(const int input) const;
		int		toFp(const double input) const;
		int		toInt(void) const ;
		double	toDouble(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &stream, const Fixed & rhs);

#endif