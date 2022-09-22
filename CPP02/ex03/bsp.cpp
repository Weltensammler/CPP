/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:49:43 by bschende          #+#    #+#             */
/*   Updated: 2022/09/22 12:45:38 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	double	r;
	double	s;
	double	i;
	double	j;

	r = (b.getDoubleY() - point.getDoubleY()) * (a.getDoubleX() - point.getDoubleX()) - (a.getDoubleY() - point.getDoubleY()) * (b.getDoubleX() - point.getDoubleX());
	s = (c.getDoubleY() - point.getDoubleY()) * (a.getDoubleX() - point.getDoubleX()) - (a.getDoubleY() - point.getDoubleY()) * (c.getDoubleX() - point.getDoubleX());
	i = (a.getDoubleY() - point.getDoubleY()) * (b.getDoubleX() - point.getDoubleX()) - (b.getDoubleY() - point.getDoubleY()) * (a.getDoubleX() - point.getDoubleX());
	j = (c.getDoubleY() - point.getDoubleY()) * (b.getDoubleX() - point.getDoubleX()) - (b.getDoubleY() - point.getDoubleY()) * (c.getDoubleX() - point.getDoubleX());
	std::cout << "r = " << r << "s = " << s << "i = " << i << "j = " << j << std::endl;
	if (((r > 0 && s < 0) || (r < 0 && s > 0)) && ((i > 0 && j < 0) || (i < 0 && j > 0)))
		return (true);
	return (false);
}
