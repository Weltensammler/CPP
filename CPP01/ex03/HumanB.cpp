/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:12:16 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 18:55:20 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

	HumanB::HumanB(std::string _name) : name(_name)
	{
		
	}

	void	HumanB::setWeapon(class Weapon &_Weapon)
	{
		Weapon = &_Weapon;
	}

	void	HumanB::attack(void)
	{
		std::cout << this->name << " attacks with their " << this->Weapon->getType() << std::endl;
	}

	HumanB::~HumanB(void)
	{
		
	}
	