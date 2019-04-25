#include "../header/cone.h"
#include "../header/constant.h"

using namespace std;

void Cone::scale(int factor) {
	radius *= factor;
	height *= factor;
}

int Cone::volume() {
	return (1.0 / 3) * PI * radius * radius * height;
}

string Cone::type() {
	return "Cone";
}