#include <vector>
#include <iostream>

#include "../header/shape.h"
#include "../header/sphere.h"
#include "../header/cone.h"
#include "../header/cuboid.h"

using namespace std;


int main()
{
    Shape* sphere = new Sphere(0, 0, 0, 8);
    cout << sphere << endl;

    sphere->move(5, -15, 3);
    cout << sphere << endl;

    sphere->scale(3);
    cout << sphere << endl;
}