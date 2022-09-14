/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:00:30 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 16:00:33 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	_name = "I'm initialized";
}

void	Zombie::_setname(std::string name)
{
	_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << _name << ", has been destroyed" << std::endl;
}
