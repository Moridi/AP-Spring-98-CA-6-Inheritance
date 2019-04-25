#ifndef __CONE_H__
#define __CONE_H__

#include "shape.h"

class Cone: public Shape
{
protected:
	int radius;
	int height;
public:
	Cone(int _x, int _y, int _z, int r, int h): Shape(_x, _y, _z), radius(r), height(h) {}
	virtual void scale(int factor);
	virtual int volume();
	virtual std::string type();
};

#endif