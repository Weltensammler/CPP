/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 17:39:25 by ben               #+#    #+#             */
/*   Updated: 2022/09/09 20:18:13 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	checknum(std::string str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((int)str[i] < 48 || (int)str[i] > 57)
			return (1);
		i++;
	}
	return (0);
}

Zombie* newZombie(std::string name)
{
	Zombie	*newZombie;

	newZombie = new Zombie;
	newZombie->_setname(name);
	return (newZombie);
}
