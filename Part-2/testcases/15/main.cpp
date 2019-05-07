#include <iostream>
#include "FileSystem.h"

using namespace std;

int main()
{
    FileSystem interface = FileSystem();

    interface.add_directory(1, "etc", 0);
    interface.add_file(2, "shadow", "root:!:1331:0:99999:7:::", 1);
    interface.add_file(3, "shadow", "root:x:0:0:root:/root:/bin/bash", 1);
    return 0;
}
