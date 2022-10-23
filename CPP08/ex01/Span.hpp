/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:34:44 by bschende          #+#    #+#             */
/*   Updated: 2022/10/23 22:06:58 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>

class Span{
	private:
						std::vector<int>	*_vector;
						unsigned int		_size;
						unsigned int		_count;
						Span(void);
	public:
						Span(unsigned int N);					//done
						Span(Span const &src);					
		Span			&operator=(Span const &src);			
						~Span(void);							
		void			addNumber(int i);						
		unsigned int	shortestSpan(int array[]) const;
		unsigned int	longestSpan(void) const;
		class NoVacancyException : public std::exception		//done
		{
			virtual const char* what() const throw();
		};
		class ToFewElementsException : public std::exception	//done
		{
			virtual const char* what() const throw();
		};
};

#endif
