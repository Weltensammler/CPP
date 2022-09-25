/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:27:20 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 18:15:53 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal* horde[20];

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			horde[i] = new Cat;
		else
			horde[i] = new Dog;
	}
	Cat catfox("fox");
	std::cout << catfox.gettest() << std::endl;
	catfox.settest(20);
	std::cout << catfox.gettest() << std::endl;
	Cat test = catfox;
	std::cout << test.gettest() << std::endl;
	catfox.settest(50);
	std::cout << catfox.gettest() << std::endl;
	std::cout << test.gettest() << std::endl;
	catfox.settest(70);
	std::cout << catfox.gettest() << std::endl;
	std::cout << test.gettest() << std::endl;
	for (int j = 0; j < 20; j++)
		delete(horde[j]);
	return (0);
}
