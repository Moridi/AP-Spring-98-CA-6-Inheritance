#include <vector>
#include <iostream>

#include "shape.h"
#include "sphere.h"
#include "cone.h"
#include "cuboid.h"

using namespace std;


int main()
{
    Shape* cuboid = new Cuboid(0, 0, 0, 10, 5, 2);
    cout << cuboid << endl;

    cuboid->move(5, 5, 0);
    cout << cuboid << endl;

    cuboid->scale(2);
    cout << cuboid << endl;
}