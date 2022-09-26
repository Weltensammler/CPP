/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 17:52:26 by bschende          #+#    #+#             */
/*   Updated: 2022/09/26 10:55:44 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
	private:
	Brain*	brain;
	public:
				Dog(void);
				Dog(std::string name);
				Dog(Dog const & src);
				~Dog(void);
	Dog			&operator=(Dog const & src);
	void		makeSound(void) const;
	std::string	getType(void) const;
};

#endif
