#include <iostream>
#include "FileSystem.h"

using namespace std;

int main()
{
    FileSystem interface = FileSystem();

    interface.add_directory(1, "etc", 0);
    interface.add_link(5, "sampleLink", 1, 0);

    interface.view(5);
    cout << endl;

    return 0;
}
