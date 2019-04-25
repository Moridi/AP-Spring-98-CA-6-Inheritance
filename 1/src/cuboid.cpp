#include "../header/cuboid.h"

using namespace std;

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