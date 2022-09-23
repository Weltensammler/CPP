/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 23:05:52 by bschende          #+#    #+#             */
/*   Updated: 2022/09/23 15:21:23 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*Default Constructor*/
ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Default constructor called" << std::endl;
	this->setHp(100);
	this->setEp(50);
	this->setDmg(20);
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
ScavTrap::ScavTrap(const std::string name)
{
	std::cout << "ScavTrap Name constructor called" << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setEp(50);
	this->setDmg(20);
	return ;
}

/*Copy Constructor*/
ScavTrap::ScavTrap(ClapTrap const & src)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*Deconstructor*/
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Deconstructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	this->_ep--;
	std::cout << this->_name << " attacks " << target << " and causes " << this->_dmg << " points of damage!" << std::endl;
	return ;
}

void ScavTrap::guardGate()
{
	std::cout << this->_name << " says: I'm in Gatekeeper mode now!" << std::endl;
}
