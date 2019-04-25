#include "../header/shape.h"
#include <iostream>

using namespace std;

void Shape::move(int dx, int dy, int dz) {
	x += dx;
	y += dy;
	z += dz;
}

void Shape::print() {
	cout << "type: " << type() << ", center: (" << x << ", " << y << ", " << z << "), volume: " << volume() << endl;
}