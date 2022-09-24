/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:21:49 by bschende          #+#    #+#             */
/*   Updated: 2022/09/24 16:32:14 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

/*Default Constructor*/
DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	// ClapTrap::_name = this->_name + "_clap_name";
	this->_hp = FragTrap::hp;
	this->_ep = ScavTrap::ep;
	this->_dmg = FragTrap::dmg;
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(std::string(name).append("_clap_name"))
{
	std::cout << "DiamondTrap Name constructor called" << std::endl;
	this->_name = name;
	this->_hp = FragTrap::hp;
	this->_ep = ScavTrap::ep;
	this->_dmg = FragTrap::dmg;
	return ;
}

/*Copy Constructor*/
DiamondTrap::DiamondTrap(ClapTrap const & src)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*Deconstructor*/
DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Deconstructor called" << std::endl;
	return ;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is: " << _name << "\nMy ClapTrapname is: " << ClapTrap::_name << std::endl;
}
