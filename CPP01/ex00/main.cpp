/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:50:57 by bschende          #+#    #+#             */
/*   Updated: 2022/09/09 17:36:53 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	input;
	Zombie		*Zombie = NULL;

	input = "ONE";
	while (input.compare("EXIT"))
	{
		std::cout << "What do you want to do?\nCreate new Zombie enter: Zombie\nCreate random Chump enter: Chump\nExit programme enter: EXIT" << std::endl;
		getline(std::cin, input);
		if (!input.compare("Zombie"))
		{
			if (Zombie)
				delete (Zombie);
			std::cout << "Enter a Name for the new Zombie:" << std::endl;
			getline(std::cin, input);
			Zombie = newZombie(input);
			Zombie->announce();
		}
		if (!input.compare("Chump"))
		{
			std::cout << "Enter a Name for the random Chump:" << std::endl;
			getline(std::cin, input);
			randomChump(input);
		}
	}
	if (Zombie)
		delete (Zombie);
	return (0);
}