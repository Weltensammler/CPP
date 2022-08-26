//
// bsp.cpp
//

#include <cmath>
#include "Point.h"

static float	area(int x1, int y1, int x2, int y2, int x3, int y3);
static bool	is_on_line(int x1, int y1, int x2, int y2, int px, int py);

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	/* Calculate area of triangle ABC */
	float A = area(a.getIntX(), a.getIntY(), b.getIntX(), b.getIntY(), c.getIntX(), c.getIntY());

	/* Calculate area of triangle PBC */ 
	float A1 = area(point.getIntX(), point.getIntY(), b.getIntX(), b.getIntY(), c.getIntX(), c.getIntY());

	/* Calculate area of triangle PAC */ 
	float A2 = area(a.getIntX(), a.getIntY(), point.getIntX(), point.getIntY(), c.getIntX(), c.getIntY());

	/* Calculate area of triangle PAB */  
	float A3 = area(a.getIntX(), a.getIntY(), b.getIntX(), b.getIntY(), point.getIntX(), point.getIntY());

	if (is_on_line(a.getIntX(), a.getIntY(), b.getIntX(), b.getIntY(), point.getIntX(), point.getIntY()) == true)
		return (false);
	if (is_on_line(b.getIntX(), b.getIntY(), c.getIntX(), c.getIntY(), point.getIntX(), point.getIntY()) == true)
		return (false);
	if (is_on_line(c.getIntX(), c.getIntY(), a.getIntX(), a.getIntY(), point.getIntX(), point.getIntY()) == true)
		return (false);

	/* Check if sum of A1, A2 and A3 is same as A */
	return (A == A1 + A2 + A3);
}

static float	area(int x1, int y1, int x2, int y2, int x3, int y3)
{
   return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

static bool	is_on_line(int x1, int y1, int x2, int y2, int px, int py)
{
	float	dxc = px - x1;
	float	dyc = py - y1;

	float	dxl = x2 - x1;
	float	dyl = y2 - y1;

	float	cross = dxc * dyl - dyc * dxl;
	if (cross != 0)
		return (false);
	return (true);
}
