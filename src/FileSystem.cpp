#include "FileSystem.h"

#include <iostream>

using namespace std;

void FileSystem::view(int id)
{
    try
    {
        get_element(id)->view();
    }
    catch(const BadElementId& exception)
    {
        cerr << exception.what();
    }
}

void FileSystem::add_directory(int id, string title, int parent_id) throw()
{
    elements.push_back(make_shared<Directory>(
            Directory(id, title, parent_id)));
}