/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:41:50 by bschende          #+#    #+#             */
/*   Updated: 2022/09/22 20:25:01 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	generator(void)
{
	srand(time(0));
	if ((rand() % 10) < 4)
		return (0);
	else if((rand() % 10) < 8)
		return (1);
	else
		return (2);
}

int	main(void)
{
	ClapTrap	john("Johnny five");
	int			damage[3] = {0,1,3};
	int			repair[3] = {0,1,3};
	std::string	enemy[3] = {"Baby Wyrm","Mobley Dick","Tumorhead"};
	int			i;
	
	while (john.getEp() > 0 && john.getHp() > 0)
	{
		i = generator();
		usleep(200000);
		if (i == 0)
		{
			john.attack(enemy[generator()]);
			usleep(222000);
		}
		else if (i == 1)
		{
			john.takeDamage(damage[generator()]);
			usleep(150000);
		}
		else
		{
			john.beRepaired(repair[generator()]);
			usleep(280000);
		}
	}
	if (john.getEp() == 0)
		std::cout << "I need to sleep now!" << std::endl;
	if (john.getHp() == 0)
		std::cout << john.getName() << " didn't survive!" << std::endl;
	return (0);
}