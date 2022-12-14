/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:00:38 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 16:00:39 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string	_name;
	public:
		void	announce(void);
		Zombie();
		void	_setname(std::string name);
		~Zombie(void);
};

Zombie*	zombieHorde(int N, std::string name);
bool	checknum(std::string str);

#endif
