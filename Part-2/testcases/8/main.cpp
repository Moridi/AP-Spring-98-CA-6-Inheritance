#include <iostream>
#include "file_system_interface.h"

using namespace std;

int main()
{
    FileSystemInterface interface = FileSystemInterface();

    interface.add_directory(1, "etc", 0);
    interface.add_link(5, "sampleLink", 1, 0);

    interface.view(5);
    cout << endl;

    return 0;
}
