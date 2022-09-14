/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:06:00 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 18:00:36 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
	Weapon		&weapon;
	std::string	name;
public:
			HumanA(std::string _name, Weapon type);
	void	attack(void);
	// const std::string	&getType(void);
	// void				setType(std::string weapon);
			~HumanA(void);
};

#endif