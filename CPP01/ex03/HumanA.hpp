/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 17:06:00 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 18:56:28 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
private:
	std::string		name;
	Weapon			&Weapon;
public:
			HumanA(std::string _name, class Weapon &Type);
	void	attack(void);
			~HumanA(void);
};

#endif