#include "FileSystemInterface.h"

int main()
{
    FileSystemInterface interface = FileSystemInterface();

    interface.add_directory(1, "root", NULL);
    interface.add_file(2, "a.txt", "lab lab lab...", 1);
    interface.add_file(3, "b.txt", "hala lay lay...", 1);
    interface.add_directory(4, "data", 1);
    interface.add_symbolic_link(5, 2, 4);

    interface.view(1);
    interface.view(5);

    return 0;
}
