/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 22:05:31 by bschende          #+#    #+#             */
/*   Updated: 2022/10/21 23:12:02 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "only one conversion is allowed" << std::endl;
		return (1);
	}
	const std::string input = argv[1];
	Converter test;
	test.setInput(input);
	test.outputConversions();
	return (0);
}
