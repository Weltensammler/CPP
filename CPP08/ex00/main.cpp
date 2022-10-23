/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 12:23:33 by bschende          #+#    #+#             */
/*   Updated: 2022/10/23 18:24:39 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void	displayInt(int i)
{
	std::cout << i << std::endl;
}

int	main(void)
{
	std::list<int>	lst;
	// std::list<int>::iterator	p;

	lst.push_back(5);
	lst.push_back(10);
	lst.push_back(15);
	lst.push_back(1);
	lst.push_back(100);
	lst.push_back(500);
	lst.push_front(2000);
	// for_each(lst.begin(), lst.end(), displayInt);
	// p = std::find(lst.begin(), lst.end(), 100);
	try
	{
		easyfind(lst, 100);
	}
	catch (std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
