/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:43:43 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 16:50:19 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain Default constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = "Void";
	return ;
}

/*Copy Constructor*/
Brain::Brain(Brain const & src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*= Operator overload*/	
Brain	&Brain::operator=(Brain const & src)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}

/*Deconstructor*/
Brain::~Brain()
{
	std::cout << "Brain Deconstructor called" << std::endl;
	return ;
}