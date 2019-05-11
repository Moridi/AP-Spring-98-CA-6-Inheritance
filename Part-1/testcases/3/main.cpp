#include <vector>
#include <iostream>

#include "shape.h"
#include "sphere.h"
#include "cone.h"
#include "cuboid.h"

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