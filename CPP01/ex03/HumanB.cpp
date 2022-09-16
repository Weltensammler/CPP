/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:12:16 by bschende          #+#    #+#             */
/*   Updated: 2022/09/16 12:32:12 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

	HumanB::HumanB(std::string _name) : name(_name)
	{
		this->Weapon = NULL;
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
	