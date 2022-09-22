/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:48:08 by bschende          #+#    #+#             */
/*   Updated: 2022/09/22 12:36:31 by bschende         ###   ########.fr       */
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

	Fixed		&operator=(Fixed const & rhs);
	bool		operator>(Fixed const & rhs) const;
	bool		operator<(Fixed const & rhs) const;
	bool		operator>=(Fixed const & rhs) const;
	bool		operator<=(Fixed const & rhs) const;
	bool		operator==(Fixed const & rhs) const;
	bool		operator!=(Fixed const & rhs) const;
	Fixed		operator+(Fixed const & rhs) const;
	Fixed		operator-(Fixed const & rhs) const;
	Fixed		operator*(Fixed const & rhs) const;
	Fixed		operator/(Fixed const & rhs) const;
	Fixed		operator++();
	Fixed		operator++(int);
	Fixed		operator--();
	Fixed		operator--(int);
	int			toFp(const int input) const;
	int			toFp(const double input) const;
	int			toInt(void) const;
	double		toDouble(void) const;
	int			getRawBits(void) const;
	void		setRawBits(int const raw);
	static Fixed	&min(Fixed &fpone, Fixed &fptwo);
	static const Fixed	&min(Fixed const &fpone, Fixed const &fptwo);
	static Fixed	&max(Fixed &fpone, Fixed &fptwo);
	static const Fixed	&max(Fixed const &fpone, Fixed const &fptwo);
};

std::ostream		&operator<<(std::ostream &stream, const Fixed & rhs);

#endif