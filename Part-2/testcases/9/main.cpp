#include <iostream>
#include "file_system_interface.h"

using namespace std;

int main()
{
    FileSystemInterface interface = FileSystemInterface();

    interface.add_file(2, "shadow", "root:!:1331:0:99999:7:::", 0);
    interface.add_link(5, "sampleLink", 2, 0);

    interface.view(5);
    cout << endl;

    return 0;
}
