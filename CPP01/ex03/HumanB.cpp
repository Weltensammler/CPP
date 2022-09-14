/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:12:16 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 17:12:48 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

	HumanB::HumanB(void)
	{
		
	}

	void	HumanB::attack(void)
	{
		std::cout << this->name << " attacks with their " << this->weapon << std::endl;
	}

	HumanB::~HumanB(void)
	{
		
	}
	