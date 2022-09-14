/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:00:47 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 16:00:52 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void protection(void)
{
	std::cout << "Don't try to break my stuff :(" << std::endl;
	exit(1);
}

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
		if (!std::cin)
			protection();
		if (!input.compare("Horde"))
		{
			if (Zombie)
				delete [] Zombie;
			std::cout << "How many Zombies shopuld be in the Horde:" << std::endl;
			while (!checknum(input) || input.length() == 0)
			{
				std::cout << "Please enter a valid number 1-1000:" << std::endl;
				getline(std::cin, input);
				if (!std::cin)
					protection();
				if (checknum(input) == true)
				{
					N = stoi(input);
					if (N > 1000 || N == 0)
						input = "nope";
				}
			}
			N = stoi(input);
			std::cout << "Enter a Name for the Zombie Horde:" << std::endl;
			getline(std::cin, input);
			if (!std::cin)
				protection();
			Zombie = zombieHorde(N, input);
		}
	}
	if (Zombie)
		delete [] Zombie;
	return (0);
}