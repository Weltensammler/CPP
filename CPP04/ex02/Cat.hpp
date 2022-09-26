/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:59:12 by bschende          #+#    #+#             */
/*   Updated: 2022/09/26 10:54:12 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal{
	private:
	Brain*	brain;
	public:
				Cat(void);
				Cat(std::string name);
				Cat(Cat const & src);
				~Cat(void);
	Cat			&operator=(Cat const & src);
	void		makeSound(void) const;
	std::string	getType(void) const;
			// void	setbrain(std::string idea);
			// std::string		getbrain(void);
};

#endif
