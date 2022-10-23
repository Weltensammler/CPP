/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 20:06:07 by bschende          #+#    #+#             */
/*   Updated: 2022/10/24 00:08:46 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	class Span span(100000);

	// span.addNumber(90000);
	// span.addNumber(10);
	// span.addNumber(2467);
	// span.addNumber(800);
	// span.addNumber(3000);
	// span.addNumber(588);
	// span.addNumber(30);
	
	try
	{
		span.addManyNumbers(100000);
		std::cout << span.longestSpan() << std::endl;
		std::cout << span.shortestSpan() << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}