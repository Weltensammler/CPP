/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 19:41:50 by bschende          #+#    #+#             */
/*   Updated: 2022/09/24 16:20:09 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	generator(void)
{
	struct timeval	current_time;

	gettimeofday(&current_time, NULL);
	std::srand(current_time.tv_usec); //std::time(nullptr)
	if ((std::rand() % 3) == 0)
		return (0);
	else if((std::rand() % 3) == 1)
		return (1);
	else
		return (2);
}

int	main(void)
{
	ClapTrap	john("Johnny five");
	ScavTrap	scav("Scavenger");
	FragTrap	frag("Fraggy");
	DiamondTrap	bling("Ritchie");
	int			damage[3] = {0,1,3};
	int			repair[3] = {0,1,3};
	std::string	enemy[3] = {"Baby Wyrm","Mobley Dick","Tumorhead"};
	int			i;

	bling.whoAmI();
	while ((john.getEp() > 0 && john.getHp() > 0) && (scav.getEp() > 0 && scav.getHp() > 0) && (bling.getEp() > 0 && bling.getHp() > 0))
	{
		i = generator();
		usleep(3);
		if (i == 0)
		{
			john.attack(enemy[generator()]);
			scav.attack(enemy[generator()]);
			frag.attack(enemy[generator()]);
			bling.attack(enemy[generator()]);
		}
		else if (i == 1)
		{
			john.takeDamage(damage[generator()]);
			scav.takeDamage(damage[generator()]);
			frag.takeDamage(damage[generator()]);
			bling.takeDamage(damage[generator()]);
		}
		else
		{
			john.beRepaired(repair[generator()]);
			scav.beRepaired(repair[generator()]);
			frag.beRepaired(repair[generator()]);
			bling.beRepaired(repair[generator()]);
		}
	}
	if (john.getEp() == 0)
		std::cout << john.getName() << " needs to sleep now!" << std::endl;
	if (john.getHp() == 0)
		std::cout << john.getName() << " didn't survive!" << std::endl;
	if (scav.getEp() == 0)
		std::cout << scav.getName() << " needs to sleep now!" << std::endl;
	if (scav.getHp() == 0)
		std::cout << scav.getName() << " didn't survive!" << std::endl;
	if (frag.getEp() == 0)
		std::cout << frag.getName() << " needs to sleep now!" << std::endl;
	if (frag.getHp() == 0)
		std::cout << frag.getName() << " didn't survive!" << std::endl;
	frag.highFivesGuys();
	scav.guardGate();
	return (0);
}
