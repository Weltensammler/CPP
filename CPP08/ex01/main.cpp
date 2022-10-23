/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:06:07 by bschende          #+#    #+#             */
/*   Updated: 2022/10/23 22:19:54 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	class Span span(7);

	span.addNumber(5);
	span.addNumber(10);
	span.addNumber(15);
	span.addNumber(4);
	span.addNumber(1);
	span.addNumber(50);
	span.addNumber(30);
	try
	{
		std::cout << span.longestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}