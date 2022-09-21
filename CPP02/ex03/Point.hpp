/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:51:38 by bschende          #+#    #+#             */
/*   Updated: 2022/09/21 23:20:02 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
	double		dx;
	double		dy;
public:
			Point();
			Point(const float xval, const float yval);
			Point(Point const & src);
	int		getxint(void) const;
	int		getyint(void) const;
	double	getxdouble(void) const;
	double	getydouble(void) const;
	Point	&operator=(Point const & rhs);
			~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
