/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:33:24 by bschende          #+#    #+#             */
/*   Updated: 2022/09/23 16:03:13 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cstdlib>

class ScavTrap : public ClapTrap
{
	public:
				ScavTrap(void);
				ScavTrap(std::string name);
				ScavTrap(ClapTrap const & src);
				~ScavTrap(void);
		void	attack(const std::string& target);
		void 	guardGate();
};

#endif
