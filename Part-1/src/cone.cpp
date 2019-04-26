#include "../header/cone.h"
#include "../header/constant.h"

using namespace std;

Cone::Cone(int _x, int _y, int _z, int r, int h)
	: Shape(_x, _y, _z), radius(r), height(h) {}

void Cone::scale(int factor) {
	radius *= factor;
	height *= factor;
}

int Cone::volume() const {
	return (1.0 / 3) * PI * radius * radius * height;
}

string Cone::type() const {
	return "Cone";
}