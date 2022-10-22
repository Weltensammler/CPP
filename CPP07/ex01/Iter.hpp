/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:54:50 by bschende          #+#    #+#             */
/*   Updated: 2022/10/22 21:31:03 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void	iter(T *array, size_t size, void (*f)(const T &arg))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
}

template<typename T>
void	ft_print(T arg)
{
	std::cout << arg << std::endl;
}

#endif
