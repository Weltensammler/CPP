/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 11:55:01 by bschende          #+#    #+#             */
/*   Updated: 2022/10/23 15:27:21 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <stdexcept>

class NoMatchException : public std::exception
{
	virtual const char* what() const throw() {
		return ("No match found!");
	};
};

template<typename T>
void	easyfind(T a, int b)
{
	typename T::iterator	p;

	p = std::find(a.begin(), a.end(), b);
	if (p != a.end() && *p == b)
		std::cout << *p << std::endl;
	else
		throw NoMatchException();
}

#endif
