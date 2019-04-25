#include "../header/cuboid.h"

using namespace std;

Cuboid::Cuboid(int _x, int _y, int _z, int w, int h, int d)
	: Shape(_x, _y, _z), width(w), height(h), depth(d) {}

void Cuboid::scale(int factor) {
	width *= factor;
	height *= factor;
	depth *= factor;
}

int Cuboid::volume() {
	return width * height * depth;
}

string Cuboid::type() {
	return "Cuboid";
}