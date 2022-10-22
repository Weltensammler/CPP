/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 10:06:12 by bschende          #+#    #+#             */
/*   Updated: 2022/10/22 11:46:23 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void)
{
	Data	data;
	Data*	ptr = &data;
	uintptr_t	ptr1;

	std::cout << ptr << std::endl;
	ptr1 = serialize(ptr);
	std::cout << ptr1 << std::endl;
	ptr = deserialize(ptr1);
	std::cout << ptr << std::endl;
	return (0);
}
