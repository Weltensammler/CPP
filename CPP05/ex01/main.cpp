/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:03:21 by ben               #+#    #+#             */
/*   Updated: 2022/10/19 14:19:54 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat heinz("heinz", 74);

	std::cout << heinz << std::endl;
	heinz.incGrade();
	std::cout << heinz << std::endl;
	heinz.decGrade();
	std::cout << heinz << std::endl;
	try
	{
		Bureaucrat horst("horst", 151);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat ernst("ernst", 0);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat alois("alois", 150);
		std::cout << alois << std::endl;
		alois.decGrade();
		std::cout << alois << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat norbert("norbert", 1);
		std::cout << norbert << std::endl;
		norbert.incGrade();
		std::cout << norbert << std::endl;
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}