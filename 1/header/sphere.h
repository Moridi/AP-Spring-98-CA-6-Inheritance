#ifndef __SPHERE_H__
#define __SPHERE_H__

#include "shape.h"

class Sphere: public Shape
{
protected:
	int radius;
public:
	Sphere(int _x, int _y, int _z, int r): Shape(_x, _y, _z), radius(r) {}
	virtual void scale(int factor);
	virtual int volume();
	virtual std::string type();
};

#endif