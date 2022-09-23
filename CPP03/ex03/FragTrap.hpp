/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:19:31 by bschende          #+#    #+#             */
/*   Updated: 2022/09/23 23:06:45 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	protected:
		int	hp;
		int	ep;
		int	dmg;
	public:
			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(ClapTrap const & src);
			~FragTrap(void);
	void	highFivesGuys(void);
};

#endif
