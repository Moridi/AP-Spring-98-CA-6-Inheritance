#include <vector>

#include "../header/shape.h"
#include "../header/sphere.h"
#include "../header/cone.h"
#include "../header/cuboid.h"

using namespace std;


int main()
{
    vector<Shape*> shapes;
    shapes.push_back(new Sphere(10, 10, 10, 2));
    shapes.push_back(new Cuboid(10, 10, 10, 1, 2, 3));
    shapes.push_back(new Cone(10, 10, 10, 2, 5));

    for (int i = 0; i < shapes.size(); ++i)
        shapes[i]->print();

    for (int i = 0; i < shapes.size(); ++i) {
        shapes[i]->move(-5, -10, 0);
        shapes[i]->scale(2);
    }

    for (int i = 0; i < shapes.size(); ++i)
        shapes[i]->print();
}