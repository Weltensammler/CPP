/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 13:27:20 by bschende          #+#    #+#             */
/*   Updated: 2022/09/25 17:21:51 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* h = new WrongCat();
Animal k;
Cat l;
Dog m;
WrongAnimal n;
WrongCat o;
std::cout << i->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << h->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
k.makeSound();
l.makeSound();
m.makeSound();
n.makeSound();
o.makeSound();
delete j;
delete i;
delete h;
delete meta;
return 0;
}
