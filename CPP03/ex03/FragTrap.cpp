/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:24:08 by bschende          #+#    #+#             */
/*   Updated: 2022/09/23 23:07:32 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*Default Constructor*/
FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->setHp(100);
	this->setEp(100);
	this->setDmg(30);
	hp = 100;
	ep = 100;
	dmg = 30;
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
FragTrap::FragTrap(const std::string name)
{
	std::cout << "FragTrap Name constructor called" << std::endl;
	this->setName(name);
	this->setHp(100);
	this->setEp(100);
	this->setDmg(30);
	hp = 100;
	ep = 100;
	dmg = 30;
	return ;
}

/*Copy Constructor*/
FragTrap::FragTrap(ClapTrap const & src)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*Deconstructor*/
FragTrap::~FragTrap()
{
	std::cout << "FragTrap Deconstructor called" << std::endl;
	return ;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << ": Hell yeah! High five guys!" << std::endl;
}