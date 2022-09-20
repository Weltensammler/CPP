/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 16:22:49 by bschende          #+#    #+#             */
/*   Updated: 2022/09/20 17:36:59 by bschende         ###   ########.fr       */
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
		int		inttofp(const int input) const;
		int		doubletofp(const double input) const;
		int		toInt(void) const ;
		double	fptodouble(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &stream, const Fixed & rhs);

#endif