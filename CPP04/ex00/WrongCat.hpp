/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCatngCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:59:12 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 14:54:27 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
			WrongCat(void);
			WrongCat(std::string name);
			WrongCat(WrongCat const & src);
			~WrongCat(void);
	WrongCat &operator=(WrongCat const & src);
	void	makeSound(void) const;
};

#endif
