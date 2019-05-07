#include <iostream>
#include "FileSystem.h"

using namespace std;

int main()
{
    FileSystem interface = FileSystem();
    interface.view(0);
    cout << endl;

    return 0;
}
