#include "../header/sphere.h"
#include "../header/constant.h"

using namespace std;

void Sphere::scale(int factor) {
	radius *= factor;
}

int Sphere::volume() {
	return (4.0 / 3) * PI * radius * radius * radius;
}

string Sphere::type() {
	return "Sphere";
}