/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:03:21 by ben               #+#    #+#             */
/*   Updated: 2022/10/14 11:32:50 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(int argc, char **argv)
{
	Bureaucrat instance[argc];
	std::string number = argv[1];

	if (argc != 2)
	{
		std::cout << "invalid number of arguments" << std::endl;
		return (0);
	}
	if (std::stoi(argv[1]) > 1000 || std::stoi(argv[1]) < 0)
	{
		std::cout << "please enter a number between 0 - 1000" << std::endl;
		return (0);
	}
	while (//no exception)
	{
		
	}
}