#include <iostream>
#include "file_system_interface.h"

using namespace std;

int main()
{
    FileSystemInterface interface = FileSystemInterface();
    interface.add_directory(1, "etc", 0);
    interface.add_link(5, "sampleLink", 0, 1);

    interface.view(1);
    cout << endl;

    interface.add_link(6, "invalid", 0, 5);

    return 0;
}
