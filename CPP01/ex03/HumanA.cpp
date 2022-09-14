/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:07:06 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 18:03:28 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

	HumanA::HumanA(std::string _name, Weapon type) : name(_name), weapon(type)
	{
		
	}

	void	HumanA::attack(void)
	{
		std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	}

	HumanA::~HumanA(void)
	{
		
	}
	