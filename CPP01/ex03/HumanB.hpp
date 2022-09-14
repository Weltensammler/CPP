/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:00:13 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 18:55:50 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon		*Weapon;
	std::string	name;
public:
			HumanB(std::string _name);
	void	setWeapon(class Weapon &_Weapon);
	void	attack(void);
			~HumanB(void);
};

#endif