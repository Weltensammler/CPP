/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:00:55 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 16:00:56 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

bool checknum(std::string str)
{
	size_t i;

	for (i = 0; i < str.length(); i++)
		if (isdigit(str[i]) == false)
			return (false);
	return (true);
}

Zombie*	zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	*horde = new Zombie[N];

	for (i = 0; i < N; i++)
	{
		horde[i]._setname(name);
		horde[i].announce();
	}
	return (horde);
}
