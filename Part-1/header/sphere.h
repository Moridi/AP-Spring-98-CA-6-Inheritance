#ifndef __SPHERE_H__
#define __SPHERE_H__

#include "shape.h"

class Sphere: public Shape
{
protected:
	int radius;
public:
	Sphere(int _x, int _y, int _z, int r);
	virtual void scale(int factor);
	virtual int volume() const;
	virtual std::string type() const;
};

#endif