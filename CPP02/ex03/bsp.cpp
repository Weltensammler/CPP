/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:49:43 by bschende          #+#    #+#             */
/*   Updated: 2022/09/21 23:29:25 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	double	r;
	double	s;
	double	i;
	double	j;

	r = (b.getydouble() - point.getydouble()) * (a.getxdouble() - point.getxdouble()) - (a.getydouble() - point.getydouble()) * (b.getxdouble() - point.getxdouble());
	s = (c.getydouble() - point.getydouble()) * (a.getxdouble() - point.getxdouble()) - (a.getydouble() - point.getydouble()) * (c.getxdouble() - point.getxdouble());
	i = (a.getydouble() - point.getydouble()) * (b.getxdouble() - point.getxdouble()) - (b.getydouble() - point.getydouble()) * (a.getxdouble() - point.getxdouble());
	j = (c.getydouble() - point.getydouble()) * (b.getxdouble() - point.getxdouble()) - (b.getydouble() - point.getydouble()) * (c.getxdouble() - point.getxdouble());
	std::cout << "r = " << r << "s = " << s << "i = " << i << "j = " << j << std::endl;
	if (((r > 0 && s < 0) || (r < 0 && s > 0)) && ((i > 0 && j < 0) || (i < 0 && j > 0)))
		return (true);
	return (false);
}
