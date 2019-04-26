#ifndef __CUBOID_H__
#define __CUBOID_H__

#include "shape.h"

class Cuboid: public Shape
{
protected:
	int width;
	int height;
	int depth;
public:
	Cuboid(int _x, int _y, int _z, int w, int h, int d);
	virtual void scale(int factor);
	virtual int volume() const;
	virtual std::string type() const;
};

#endif