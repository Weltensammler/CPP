/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:03:21 by ben               #+#    #+#             */
/*   Updated: 2022/10/20 22:54:39 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "-----------TEST 1------------" << std::endl;
	try
	{
		Form test("test", 20, 50);
		Bureaucrat tester("tester", 19);
		tester.signForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------TEST 2------------" << std::endl;
	try
	{
		Form test("test", 20, 50);
		Bureaucrat tester("tester", 21);
		tester.signForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------TEST 3------------" << std::endl;
	try
	{
		Form test("test", 20, 50);
		Bureaucrat tester1("tester1", 19);
		Bureaucrat tester2("tester2", 19);
		tester1.signForm(test);
		tester2.signForm(test);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------TEST 4------------" << std::endl;
	try
	{
		Form test("test", 0, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------TEST 5------------" << std::endl;
	try
	{
		Form test("test", 151, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------TEST 6------------" << std::endl;
	try
	{
		Form test("test", 35, 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-----------TEST 7------------" << std::endl;
	try
	{
		Form test("test", 35, 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}