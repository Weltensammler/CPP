//
// Point.h
//

#ifndef _POINT_H_
#define _POINT_H_

#include "Fixed.h"

class Point
{
public:
	Point();
	Point(const float x, const float y);
	Point(const Point &obj);
	~Point();
	Point	&operator=(const Point &obj);

	float	getFloatX() const;
	float	getFloatY() const;
	int		getIntX() const;
	int		getIntY() const;

private:
	const Fixed	_x;
	const Fixed	_y;
};

#endif // _POINT_H_
