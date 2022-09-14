/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 16:00:13 by bschende          #+#    #+#             */
/*   Updated: 2022/09/14 16:35:22 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Adress of string    : " << &string << std::endl;
	std::cout << "Adress of stringPTR : " << stringPTR << std::endl;
	std::cout << "Adress of stringREF : " << &stringREF << std::endl;
	std::cout << "Value of string     : " << string << std::endl;
	std::cout << "Value of stringPTR  : " << *stringPTR << std::endl;
	std::cout << "Value of stringREF  : " << stringREF << std::endl;
}