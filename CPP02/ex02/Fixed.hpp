/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:45:09 by bschende          #+#    #+#             */
/*   Updated: 2022/09/21 13:42:38 by bschende         ###   ########.fr       */
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
		bool	operator>(Fixed const & rhs) const;
		bool	operator<(Fixed const & rhs) const;
		bool	operator>=(Fixed const & rhs) const;
		bool	operator<=(Fixed const & rhs) const;
		bool	operator==(Fixed const & rhs) const;
		bool	operator!=(Fixed const & rhs) const;
		Fixed	operator+(Fixed const & rhs) const;
		Fixed	operator-(Fixed const & rhs) const;
		Fixed	operator*(Fixed const & rhs) const;
		Fixed	operator/(Fixed const & rhs) const;
		Fixed	operator++();
		Fixed	operator++(int);
		Fixed	operator--();
		Fixed	operator--(int);
		int		inttofp(const int input) const;
		int		doubletofp(const double input) const;
		int		toInt(void) const ;
		double	fptodouble(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream	&operator<<(std::ostream &stream, const Fixed & rhs);

#endif