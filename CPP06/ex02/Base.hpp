/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 12:10:26 by bschende          #+#    #+#             */
/*   Updated: 2022/10/22 13:18:33 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <string>
#include <ctime>
#include <sys/time.h>

class Base{
	public:
		virtual	~Base() {};
};

class A : public Base{
	
};

class B : public Base{
	
};

class C : public Base{
	
};

#endif
