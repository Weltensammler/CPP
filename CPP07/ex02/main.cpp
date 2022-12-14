/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 21:36:29 by bschende          #+#    #+#             */
/*   Updated: 2022/10/23 10:35:14 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#define DEFAULT "\033[39m"
#define BLACK "\033[30m"
#define GREY "\033[90m"
#define RED "\033[31m"
#define CYAN "\033[36m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[94m"
#define MAGENTA "\033[35m"
#define MAX_VAL 10
int main(int, char**) {
	std::cout << GREEN << "----- project main.cpp (modified with output) ----- "
            << std::endl
            << std::endl;
  Array<int> numbers(MAX_VAL);
  int* mirror = new int[MAX_VAL];
  srand(time(NULL));
  for (int i = 0; i < MAX_VAL; i++)
  {
    numbers[i] = i;
    mirror[i] = i;
  }
  // SCOPE
  // {
    Array<int> tmp = numbers;
    Array<int> test(tmp);
    for (int i = 0; i < (int)numbers.size(); i++)
    {
      std::cout << "Index: " << i << ", numbers: " << numbers[i]
                << ", mirror: " << mirror[i] << ", tmp: " << tmp[i]
                << ", test: " << test[i] << std::endl;
    }
  // }

  for (int i = 0; i < MAX_VAL; i++) {
    if (mirror[i] != numbers[i]) {
      std::cerr << "didn't save the same value!!" << std::endl;
      return 1;
    }
  }

  std::cout << std::endl
            << "Trying to access out of range index" << std::endl
            << std::endl;

  try {
    numbers[-2] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  try {
    numbers[MAX_VAL] = 0;
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }

  for (int i = 0; i < MAX_VAL; i++) {
    numbers[i] = rand();
  }
  delete[] mirror;

  std::cout << BLUE << std::endl
            << "----- Inception Array ----- " << std::endl
            << std::endl;

  Array<Array<int> > inception_array(5);
  inception_array[0] = Array<int>(10);
  inception_array[1] = Array<int>(10);
  inception_array[2] = Array<int>(10);
  inception_array[3] = Array<int>(10);
  inception_array[4] = Array<int>(10);

  std::cout << "Success" << std::endl;

  std::cout << YELLOW << std::endl
            << "----- Assigning different size array to each other ----- " << std::endl
            << std::endl;

  Array<std::string> array_str1(2);
  array_str1[0] = "HELLO";
  array_str1[1] = "WORLD";

  Array<std::string> array_str2(3);
  array_str2[0] = "goodbye";
  array_str2[1] = "cruel";
  array_str2[2] = "world";

  array_str1 = array_str2;
  for (int i = 0; i < (int)array_str1.size(); i++)
    std::cout << array_str1[i] << std::endl;
  std::cout << std::endl;

  std::cout << RED << std::endl
            << "----- Copying empty Array ----- " << std::endl
            << std::endl;

  Array<int> empty;
  Array<int> empty_copy(empty);

  std::cout << empty.size() << std::endl;
  std::cout << empty_copy.size() << std::endl;
  
  return 0;
}