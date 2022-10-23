/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschende <bschende@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:34:44 by bschende          #+#    #+#             */
/*   Updated: 2022/10/23 22:46:44 by bschende         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <vector>
#include <limits>

class Span{
	private:
						std::vector<int>	*_vector;
						unsigned int		_size;
						unsigned int		_count;
						Span(void);
	public:
						Span(unsigned int N);					//done
						Span(Span const &src);					//done
		Span			&operator=(Span const &src);			//done
						~Span(void);							//done
		void			addNumber(int i);						//done
		unsigned int	shortestSpan(void) const;				//done
		unsigned int	longestSpan(void) const;				//done
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
