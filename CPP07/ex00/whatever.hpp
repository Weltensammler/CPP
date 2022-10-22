/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:48:26 by bschende          #+#    #+#             */
/*   Updated: 2022/10/22 15:38:43 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void	swap(T &a, T &b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T a, T b)
{
	if (a > b)
		return (b);
	else if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T	max(T a, T b)
{
	if (a < b)
		return (b);
	else if (a > b)
		return (a);
	else
		return (b);
}

#endif
