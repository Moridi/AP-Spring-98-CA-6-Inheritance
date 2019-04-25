#include "FileSystem.h"

#include <iostream>

using namespace std;

FileSystem::ElementSharedPointer FileSystem::get_element(int id) const throw()
{
    constexpr int FIRST_ELEMENT = 0;

    for (uint i = FIRST_ELEMENT; i < elements.size(); ++i)
        if (elements[i]->has_same_id(id))
            return elements[i];

    throw BadElementId();
}

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