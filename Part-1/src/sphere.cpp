#include "../header/sphere.h"
#include "../header/constant.h"

using namespace std;

Sphere::Sphere(int _x, int _y, int _z, int r)
	: Shape(_x, _y, _z), radius(r) {}

void Sphere::scale(int factor) {
	radius *= factor;
}

int Sphere::volume() const {
	return (4.0 / 3) * PI * radius * radius * radius;
}

string Sphere::type() const {
	return "Sphere";
}