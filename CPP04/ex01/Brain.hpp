/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:21:40 by bschende          #+#    #+#             */
/*   Updated: 2022/09/26 10:27:49 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{
	// private:
	// 	std::string	ideas[100];
	public:
					Brain(void);	
					Brain(Brain const & src);
					~Brain(void);
	Brain			&operator=(Brain const & src);
	std::string	ideas[100];
};

#endif
