#include <vector>
#include <iostream>

#include "shape.h"
#include "sphere.h"
#include "cone.h"
#include "cuboid.h"

using namespace std;


int main()
{
    vector<Shape*> shapes;
    shapes.push_back(new Sphere(0, -5, 2, 3));
    shapes.push_back(new Cuboid(-15, 11, -50, 1, 10, 7));
    shapes.push_back(new Sphere(5, 1, 5, 2));
    shapes.push_back(new Cone(5, 7, -1, 4, 3));
    shapes.push_back(new Cone(-20, 0, 5, 5, 2));
    shapes.push_back(new Cuboid(-5, 5, -5, 2, 6, 3));

    for (int i = 0; i < shapes.size(); ++i)
        cout << shapes[i] << endl;

    for (int i = 0; i < shapes.size(); ++i) {
        shapes[i]->move(-5, -10, -5);
        shapes[i]->scale(3);
        shapes[i]->move(5, -10, 5);
    }

    for (int i = 0; i < shapes.size(); ++i)
        cout << shapes[i] << endl;
}