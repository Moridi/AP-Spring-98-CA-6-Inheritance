#include <vector>
#include <iostream>

#include "../header/shape.h"
#include "../header/sphere.h"
#include "../header/cone.h"
#include "../header/cuboid.h"

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