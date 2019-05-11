#include <iostream>
#include "file_system_interface.h"

using namespace std;

int main()
{
    FileSystemInterface interface = FileSystemInterface();
    interface.add_directory(1, "etc", 0);
    interface.add_file(2, "shadow", "root:!:1331:0:99999:7:::", 1);
    interface.add_file(3, "passwd", "root:x:0:0:root:/root:/bin/bash", 1);
    interface.add_directory(4, "ssh", 1);
    interface.add_link(5, "sampleLink", 1, 0);

    interface.view(0);
    cout << endl;

    return 0;
}
