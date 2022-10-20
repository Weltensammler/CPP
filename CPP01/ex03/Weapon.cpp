/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:13:09 by bschende          #+#    #+#             */
/*   Updated: 2022/10/19 13:36:27 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

	Weapon::Weapon(std::string weapon) : type(weapon)
	{
		
	}

	const std::string	&Weapon::getType(void)
	{
		return (this->type);
	}

	void	Weapon::setType(std::string weapon)
	{
		this->type = weapon;
	}

	Weapon::~Weapon(void)
	{
		
	}
	