//
// Point.cpp
//

#include <iostream>
#include "Point.h"

Point::Point() : _x(0), _y(0)
{
	std::cout << "Default constructor called!" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	std::cout << "Default constructor called!" << std::endl;
}

Point::Point(const Point &obj) : _x(obj._x), _y(obj._y)
{
	std::cout << "Copy constructor called!" << std::endl;
}

Point::~Point()
{
	std::cout << "Destructor called!" << std::endl;
}

Point	&Point::operator=(const Point &obj)
{
	std::cout << "Assignment operator used!" << std::endl;
	std::cout << "Const values are not reassignable!" << std::endl;
	(void)obj;
	return (*this);
}

float	Point::getFloatX() const
{
	return (_x.toFloat());
}

float	Point::getFloatY() const
{
	return (_y.toFloat());
}

int		Point::getIntX() const
{
	return (_x.toInt());
}

int		Point::getIntY() const
{
	return (_y.toInt());
}
