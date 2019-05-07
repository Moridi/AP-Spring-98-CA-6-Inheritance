#include <vector>
#include <iostream>

#include "../header/shape.h"
#include "../header/sphere.h"
#include "../header/cone.h"
#include "../header/cuboid.h"

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