/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:50:57 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 10:52:09 by bschende         ###   ########.fr       */
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
	Zombie		*Zombie = NULL;

	input = "ONE";
	while (input.compare("EXIT"))
	{
		std::cout << "What do you want to do?\nCreate new Zombie enter: Zombie\nCreate random Chump enter: Chump\nExit programme enter: EXIT" << std::endl;
		getline(std::cin, input);
		if (!std::cin)
			protection();
		if (!input.compare("Zombie"))
		{
			if (Zombie)
				delete (Zombie);
			std::cout << "Enter a Name for the new Zombie:" << std::endl;
			getline(std::cin, input);
			if (!std::cin)
				protection();
			Zombie = newZombie(input);
			Zombie->announce();
		}
		if (!input.compare("Chump"))
		{
			std::cout << "Enter a Name for the random Chump:" << std::endl;
			getline(std::cin, input);
			if (!std::cin)
				protection();
			randomChump(input);
		}
	}
	if (Zombie)
		delete (Zombie);
	return (0);
}