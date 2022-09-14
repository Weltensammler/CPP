/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:11:01 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 10:46:27 by bschende         ###   ########.fr       */
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
		Zombie(std::string name);
		~Zombie(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
