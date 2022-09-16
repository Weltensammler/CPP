/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:07:06 by bschende          #+#    #+#             */
/*   Updated: 2022/09/16 12:32:07 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

	HumanA::HumanA(std::string _name, class Weapon &Type) : name(_name), Weapon(Type)
	{
		
	}

	void	HumanA::attack(void)
	{
		std::cout << this->name << " attacks with their " << this->Weapon.getType() << std::endl;
	}

	HumanA::~HumanA(void)
	{
		
	}
	