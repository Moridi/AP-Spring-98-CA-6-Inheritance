#include <vector>
#include <iostream>

#include "shape.h"
#include "sphere.h"
#include "cone.h"
#include "cuboid.h"

using namespace std;


int main()
{
    Shape* cone = new Cone(0, 0, 0, 10, 5);
    cout << cone << endl;

    cone->move(5, 5, 0);
    cout << cone << endl;

    cone->scale(2);
    cout << cone << endl;
}