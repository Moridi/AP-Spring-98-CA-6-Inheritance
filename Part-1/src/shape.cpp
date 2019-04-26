#include "../header/shape.h"
#include <iostream>

using namespace std;

Shape::Shape(int _x, int _y, int _z)
	: x(_x), y(_y), z(_z) {}

void Shape::move(int dx, int dy, int dz) {
	x += dx;
	y += dy;
	z += dz;
}

ostream& operator<<(ostream& out, Shape* shape) {
	out << "type: " << shape->type() << ", ";
	out << "center: (" << shape->x << ", " << shape->y << ", " << shape->z << "), ";
	out << "volume: " << shape->volume();
    return out;
}
