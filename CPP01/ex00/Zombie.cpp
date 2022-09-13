/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ben <ben@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 18:46:34 by bschende          #+#    #+#             */
/*   Updated: 2022/09/09 12:04:08 by ben              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::_setname(std::string new_name)
{
	name = new_name;
}

Zombie::Zombie(void)
{
	
}

Zombie::~Zombie(void)
{
	std::cout << name << ", has been destroyed" << std::endl;
}
