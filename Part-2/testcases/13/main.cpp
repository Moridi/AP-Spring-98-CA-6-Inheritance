#include <iostream>
#include "FileSystem.h"

using namespace std;

int main()
{
    FileSystem interface = FileSystem();
    interface.add_file(2, "shadow", "root:!:1331:0:99999:7:::", 1);

    return 0;
}
