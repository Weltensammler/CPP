/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:07:40 by bschende          #+#    #+#             */
/*   Updated: 2022/10/22 11:34:59 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>
#include <string>

class Data{
	private:
		const std::string	_member;
	public:
				Data();
				Data(Data const &src);
		Data	&operator=(Data const &src);
				~Data();
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
