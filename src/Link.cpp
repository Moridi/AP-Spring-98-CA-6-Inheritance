#include "Link.h"

#include <iostream>

using namespace std;

void Link::view()
{
    cout << "Title: " << title << endl;
    element->view();
}