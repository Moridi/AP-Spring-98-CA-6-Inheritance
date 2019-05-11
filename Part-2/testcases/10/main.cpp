#include <iostream>
#include "file_system_interface.h"

using namespace std;

int main()
{
    FileSystemInterface interface = FileSystemInterface();
    interface.view(0);
    cout << endl;

    interface.add_directory(1, "etc", 0);
    interface.add_file(2, "shadow", "root:!:1331:0:99999:7:::", 1);
    interface.view(2);
    cout << endl;

    interface.add_file(3, "passwd", "root:x:0:0:root:/root:/bin/bash", 1);
    interface.view(1);
    cout << endl;
    
    interface.add_directory(4, "ssh", 1);
    interface.add_link(5, "sampleLink", 1, 0);

    interface.view(5);
    cout << endl;

    return 0;
}
