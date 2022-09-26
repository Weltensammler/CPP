/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:56:52 by bschende          #+#    #+#             */
/*   Updated: 2022/09/26 11:11:27 by bschende         ###   ########.fr       */
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
					Animal(const std::string type);
					Animal(Animal const & src);
			virtual	~Animal(void);
	Animal			&operator=(Animal const & src);
	virtual std::string	getType(void) const = 0;
	virtual void		makeSound(void) const = 0;
};

#endif
