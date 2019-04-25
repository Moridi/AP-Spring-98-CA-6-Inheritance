#ifndef FILE_SYSTEM_INL_H_
#define FILE_SYSTEM_INL_H_

#ifndef FILE_SYSTEM_H_
#error "FileSystem-inl.h" should be included only in "FileSystem.h" file.
#endif

#include "FileSystem.h"

#include <memory>

#include "File.h"
#include "Directory.h"
#include "Link.h"
#include "Exception.h"

FileSystem::FileSystem()
{
    constexpr int ROOT_ID = 0;
    constexpr char ROOT_NAME[] = "root";

    add_directory(ROOT_ID, ROOT_NAME, ROOT_ID);
}

FileSystem::ElementSharedPointer FileSystem::get_element(int id) const throw()
{
    constexpr int FIRST_ELEMENT = 0;

    for (uint i = FIRST_ELEMENT; i < elements.size(); ++i)
        if (elements[i]->has_same_id(id))
            return elements[i];

    throw BadElementId();
}

void FileSystem::check_id_validity(int id) const throw()
{
    constexpr int FIRST_ELEMENT = 0;

    for (uint i = FIRST_ELEMENT; i < elements.size(); ++i)
        if (elements[i]->has_same_id(id))
            throw IdAlreadyExists();
}

void FileSystem::check_parent_id_validity(int id) const throw()
{
    constexpr int FIRST_ELEMENT = 0;
    constexpr char DIRECTORY[] = "Directory";

    for (uint i = FIRST_ELEMENT; i < elements.size(); ++i)
        if (elements[i]->has_same_id(id))
        {
            if (elements[i]->get_type() != DIRECTORY)
                throw BadParentId();
            else
                break;
        }
}

#endif