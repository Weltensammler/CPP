/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:17:30 by bschende          #+#    #+#             */
/*   Updated: 2022/09/24 00:12:26 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
 
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap{
	private:
		std::string	_name;
	public:
			DiamondTrap(void);
			DiamondTrap(std::string name);
			DiamondTrap(ClapTrap const & src);
			~DiamondTrap(void);
	void	highFivesGuys(void);
	void	attack(const std::string& target);
	void 	whoAmI();
};

#endif
