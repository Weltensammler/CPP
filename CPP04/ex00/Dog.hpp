/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:52:26 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 14:45:37 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	public:
			Dog(void);
			Dog(std::string name);
			Dog(Dog const & src);
			~Dog(void);
	Dog		&operator=(Dog const & src);
	void	makeSound(void) const;
};

#endif
