#ifndef __CONE_H__
#define __CONE_H__

#include "shape.h"

class Cone: public Shape
{
protected:
	int radius;
	int height;
public:
	Cone(int _x, int _y, int _z, int r, int h);
	virtual void scale(int factor);
	virtual int volume() const;
	virtual std::string type() const;
};

#endif