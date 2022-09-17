/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:49:50 by bschende          #+#    #+#             */
/*   Updated: 2022/09/17 14:42:42 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed{
	private:
		int					fpval;
		static const int	fbits = 8;
	public:
				Fixed();
				Fixed(Fixed const & src);
				~Fixed();

		Fixed	&operator=(Fixed const & rhs);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif