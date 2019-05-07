#include <vector>
#include <iostream>

#include "../header/shape.h"
#include "../header/sphere.h"
#include "../header/cone.h"
#include "../header/cuboid.h"

using namespace std;


int main()
{
    vector<Shape*> shapes;
    shapes.push_back(new Sphere(5, 5, 5, 5));
    shapes.push_back(new Cuboid(-5, 5, -5, 5, 5, 5));
    shapes.push_back(new Cone(5, 5, 5, 5, 5));

    for (int i = 0; i < shapes.size(); ++i)
        cout << shapes[i] << endl;

    for (int i = 0; i < shapes.size(); ++i) {
        shapes[i]->move(-5, -10, -5);
        shapes[i]->scale(4);
    }

    for (int i = 0; i < shapes.size(); ++i)
        cout << shapes[i] << endl;
}