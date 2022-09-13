/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:40:09 by ben               #+#    #+#             */
/*   Updated: 2022/09/09 20:19:56 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	input;
	int			N;
	Zombie		*Zombie = NULL;

	input = "ONE";
	while (input.compare("EXIT"))
	{
		std::cout << "What do you want to do?\nCreate a Horde of Zombies enter: Horde\nExit programme enter: EXIT" << std::endl;
		getline(std::cin, input);
		if (!input.compare("Horde"))
		{
			if (Zombie)
				delete (Zombie);
			std::cout << "How many Zombies shopuld be in the Horde:" << std::endl;
			getline(std::cin, input);
			if (checknum(input))
				std::cout << "Please enter a valid number 1-1000:" << std::endl;
			std::cout << "Enter a Name for the Zombie Horde:" << std::endl;
			getline(std::cin, input);
			Zombie = newZombie(input);
			Zombie->announce();
		}
	}
	if (Zombie)
		delete (Zombie);
	return (0);
}