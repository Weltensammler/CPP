/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:50:57 by bschende          #+#    #+#             */
/*   Updated: 2022/08/26 19:06:51 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	input;
	Zombie		zombie;

	input = "ONE";
	while (input.compare(EXIT))
	{
		std::cout << "What do you want to do?\nCreate new Zombie enter: Zombie\nCreate random Chump enter: Chump\nExit programme enter: EXIT" << std::endl;
		getline(std::cin, input);
		if (input.compare(Zombie))
		{
			std::cout << "Enter a Name for the new Zombie:" << std::endl;
			getline(std::cin, input);
			zombie._setname(input);
			zombie.announce();
		}
		if (input.compare(Chump))
		{
			
		}
	}
}