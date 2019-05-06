#include <iostream>
#include "FileSystem.h"

using namespace std;

int main()
{
    FileSystem interface = FileSystem();
    interface.add_file(1, "shadow", "root:!:1331:0:99999:7:::", 0);
    interface.add_directory(2, "etc", 1);

    return 0;
}
