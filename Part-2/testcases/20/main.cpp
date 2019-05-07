#include <iostream>
#include "FileSystem.h"

using namespace std;

int main()
{
    FileSystem interface = FileSystem();
    interface.add_directory(1, "etc", 0);
    interface.add_link(5, "sampleLink", 0, 1);

    interface.view(1);
    cout << endl;

    interface.add_link(6, "invalid", 0, 5);

    return 0;
}
