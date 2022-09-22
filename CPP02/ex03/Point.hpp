/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:51:38 by bschende          #+#    #+#             */
/*   Updated: 2022/09/22 12:43:37 by bschende         ###   ########.fr       */
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
	double	getDoubleX(void) const;
	double	getDoubleY(void) const;
	Point	&operator=(Point const & rhs);
			~Point();
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
