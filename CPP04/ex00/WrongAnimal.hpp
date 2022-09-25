/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimalnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:56:52 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 14:52:52 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
	protected:
		std::string	_type;
	public:
					WrongAnimal(void);
					WrongAnimal(std::string name);
					WrongAnimal(WrongAnimal const & src);
			virtual	~WrongAnimal(void);
	WrongAnimal		&operator=(WrongAnimal const & src);
	std::string		getType(void) const;
	void			makeSound(void) const;
};

#endif
