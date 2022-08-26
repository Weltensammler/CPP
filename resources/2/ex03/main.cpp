//
// main.cpp
//

#include <iostream>
#include "Fixed.h"
#include "Point.h"

static void	print_result(bool result, Point &point);
bool	bsp(Point const a, Point const b, Point const c, Point const point);

int	main(void)
{
	bool	result;
	Point	first(0.0f, 0.0f);
	Point	second(10.0f, 30.0f);
	Point	third(20.0f, 0.0f);
	Point	point_in(10.0f, 15.0f);
	Point	point_out(30.0f, 15.0f);
	Point	point_on_vertex(20.0f, 0.0f);
	Point	point_on_edge(10.0f, 0.0f);

	result = bsp(first, second, third, point_in);
	print_result(result, point_in);

	result = bsp(first, second, third, point_out);
	print_result(result, point_out);

	result = bsp(first, second, third, point_on_vertex);
	print_result(result, point_on_vertex);

	result = bsp(first, second, third, point_on_edge);
	print_result(result, point_on_edge);

	return 0;
}

static void	print_result(bool result, Point &point)
{
	if (result == true)
		std::cout << "Point (" << point.getFloatX() << ", " << point.getFloatY() 
			<< ") lies inside the triangle!" << std::endl;
	else
		std::cout << "Point (" << point.getFloatX() << ", " << point.getFloatY() 
			<< ") lies outside the triangle!" << std::endl;
}
