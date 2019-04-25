#include "FileSystem.h"

int main()
{
    FileSystem interface = FileSystem();
    interface.view(0);

    interface.add_directory(1, "Desktop", 0);
    interface.view(1);

    interface.add_file(2, "a.txt", "lab lab lab...", 1);
    interface.view(2);
    interface.add_file(3, "b.txt", "hala lay lay...", 1);
    interface.add_directory(4, "data", 1);
    // interface.add_link(5, "sampleLink", 1, 0);

    // interface.view(1);
    // interface.view(5);

    return 0;
}
