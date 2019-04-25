#include "File.h"

#include <iostream>

using namespace std;

void File::view()
{
    cout << "Title: " << title << endl <<
            "Content:" << endl << content << endl;
}