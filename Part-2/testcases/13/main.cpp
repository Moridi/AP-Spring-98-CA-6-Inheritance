#include <iostream>
#include "file_system_interface.h"

using namespace std;

int main()
{
    FileSystemInterface interface = FileSystemInterface();
    interface.add_file(2, "shadow", "root:!:1331:0:99999:7:::", 1);

    return 0;
}
