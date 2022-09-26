/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:27:20 by bschende          #+#    #+#             */
/*   Updated: 2022/09/26 11:08:30 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal* horde[20];
	// const Animal* meta = new Animal;

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			horde[i] = new Cat;
		else
			horde[i] = new Dog;
	}
	// Cat catfox("fox");
	// std::cout << catfox.getbrain() << std::endl;
	// catfox.setbrain("Lightbulb");
	// std::cout << catfox.getbrain() << std::endl;
	// Cat test = catfox;
	// std::cout << test.getbrain() << std::endl;
	// catfox.setbrain("nothing");
	// std::cout << catfox.getbrain() << std::endl;
	// std::cout << test.getbrain() << std::endl;
	// catfox.setbrain("Lightbulb again");
	// std::cout << catfox.getbrain() << std::endl;
	// std::cout << test.getbrain() << std::endl;
	for (int j = 0; j < 20; j++)
		delete(horde[j]);
	return (0);
}
