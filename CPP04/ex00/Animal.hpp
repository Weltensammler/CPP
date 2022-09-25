/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:56:52 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 14:46:25 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
	protected:
		std::string	_type;
	public:
					Animal(void);
					Animal(std::string name);
					Animal(Animal const & src);
			virtual	~Animal(void);
	Animal			&operator=(Animal const & src);
	std::string		getType(void) const;
	virtual void	makeSound(void) const;
};

#endif
