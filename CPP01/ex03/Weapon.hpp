/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:52:08 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 17:44:06 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>
#include "HumanA.hpp"
#include "HumanB.hpp"

class Weapon
{
private:
	std::string	type;
public:
						Weapon(std::string weapon);
	const std::string	&getType(void);
	void				setType(std::string weapon);
						~Weapon(void);
};

#endif