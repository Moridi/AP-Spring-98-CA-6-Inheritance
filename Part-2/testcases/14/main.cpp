#include <iostream>
#include "FileSystem.h"

using namespace std;

int main()
{
    FileSystem interface = FileSystem();

    interface.add_directory(1, "etc", 0);
    interface.add_file(1, "shadow", "root:!:1331:0:99999:7:::", 1);

    return 0;
}
