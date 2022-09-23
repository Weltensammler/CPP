/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:33:25 by bschende          #+#    #+#             */
/*   Updated: 2022/09/23 15:03:16 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <unistd.h>

class ClapTrap{
	protected:
	std::string	_name;
	int			_hp;
	int			_ep;
	int			_dmg;
	public:
				ClapTrap(void);
				ClapTrap(std::string name);
				ClapTrap(ClapTrap const & src);
				~ClapTrap(void);
	std::string	getName(void) const;
	int			getHp(void) const;
	int			getEp(void) const;
	int			getDmg(void) const;
	void		setName(std::string string);
	void		setHp(int hp);
	void		setEp(int ep);
	void		setDmg(int dmg);
	ClapTrap	&operator=(ClapTrap const & src);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
