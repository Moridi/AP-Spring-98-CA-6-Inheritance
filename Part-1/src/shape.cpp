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

void Shape::print() {
	cout << "type: " << type() << ", ";
	cout << "center: (" << x << ", " << y << ", " << z << "), ";
	cout << "volume: " << volume() << endl;
}