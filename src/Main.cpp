#include "FileSystem.h"

int main()
{
    FileSystem interface = FileSystem();
    interface.view(0);

    interface.add_directory(1, "etc", 0);

    interface.add_file(2, "shadow", "root:!:1331:0:99999:7:::", 1);
    interface.view(2);
    interface.add_file(3, "passwd", "root:x:0:0:root:/root:/bin/bash", 1);
    interface.view(1);
    interface.add_directory(4, "ssh", 1);
    interface.add_link(5, "sampleLink", 1, 0);

    interface.view(5);
    interface.view(0);

    return 0;
}
