/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:50:57 by bschende          #+#    #+#             */
/*   Updated: 2022/09/22 19:42:58 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*Default Constructor*/
ClapTrap::ClapTrap(void)
{
	std::cout << "Default constructor called" << std::endl;
	_name = "Nobody";
	_hp = 10;
	_ep = 10;
	_dmg = 0;
	return ;
}

/*Constructor that that takes an int and sets the FP value*/
ClapTrap::ClapTrap(const std::string name)
{
	std::cout << "Name constructor called" << std::endl;
	_name = name;
	_hp =10;
	_ep = 10;
	_dmg = 0;
	return ;
}

/*Copy Constructor*/
ClapTrap::ClapTrap(ClapTrap const & src)
{
	std::cout << "copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
ClapTrap	&ClapTrap::operator=(ClapTrap const & src)
{
	this->_name = src._name;
	this->_hp = src.getHp();
	this->_ep = src.getEp();
	this->_dmg = src.getDmg();
	return (*this);
}

/*Deconstructor*/
ClapTrap::~ClapTrap()
{
	std::cout << "Deconstructor called" << std::endl;
	return ;
}

/*gets the private attribute name*/
std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}

/*gets the private attribute hitpoints*/
int			ClapTrap::getHp(void) const
{
	return (this->_hp);
}

/*gets the private attribute energypionts*/
int			ClapTrap::getEp(void) const
{
	return (this->_ep);
}

/*gets the private attribute damage*/
int			ClapTrap::getDmg(void) const
{
	return (this->_dmg);
}

/*sets the private attribute name of ClapTrap*/
void		ClapTrap::setName(std::string name)
{
	this->_name = name;
}

/*sets the private attribute hp of ClapTrap*/
void		ClapTrap::setHp(int hp)
{
	this->_hp = hp;
}

/*sets the private attribute ep of ClapTrap*/
void		ClapTrap::setEp(int ep)
{
	this->_ep = ep;
}

/*sets the private attribute damge of ClapTrap*/
void		ClapTrap::setDmg(int dmg)
{
	this->_dmg = dmg;
}

/*ClapTrap attacks target*/
void		ClapTrap::attack(const std::string& target)
{
	this->_ep--;
	std::cout << this->_name << " attacks " << target << " and causes " << _dmg << " points of damage!" << std::endl;
	return ;
}

/*ClapTrap takes damage*/
void		ClapTrap::takeDamage(unsigned int amount)
{
	this->_hp = this->_hp - amount;
	std::cout << this->_name << " takes " << amount << " points of damage!" << std::endl;
	return ;
}

/*ClapTrap gets repaired*/
void		ClapTrap::beRepaired(unsigned int amount)
{
	this->_hp = this->_hp + amount;
	this->_ep--;
	std::cout << this->_name << " repairs for " << amount << " hitpoints!" << std::endl;
	return ;
}
