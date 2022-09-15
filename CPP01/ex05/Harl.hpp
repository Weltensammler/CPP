/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:00:04 by bschende          #+#    #+#             */
/*   Updated: 2022/09/15 18:52:25 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>
#include <string>

class	Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
public;
	Harl();
	typedef void(Harl::*Harlaction)(void);
	void complain(std::string level);
	~Harl();
}

#endif