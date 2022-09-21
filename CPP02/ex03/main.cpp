/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 18:48:20 by bschende          #+#    #+#             */
/*   Updated: 2022/09/21 23:28:59 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void ) 
{
	Point	a(1.0, 1.0);
	Point	b(7.0, 1.0);
	Point	c(4.0, 5.0);
	Point	point(4.0, 2.0);

	if (bsp(a, b, c, point) == true)
		std::cout << "Point lies in the triangle" << std::endl;
	else
		std::cout << "Point lies not in the triangle" << std::endl;
	return 0;
}
