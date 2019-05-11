#ifndef FILE_SYSTEM_INL_H_
#define FILE_SYSTEM_INL_H_

#ifndef FILE_SYSTEM_H_
#error "FileSystemInterface-inl.h" should be included only in "file_system_interface.h" file.
#endif

#include "file_system_interface.h"

#include <memory>

#include "File.h"
#include "Directory.h"
#include "Link.h"
#include "Exception.h"

FileSystemInterface::FileSystemInterface()
{
    constexpr int ROOT_ID = 0;
    constexpr char ROOT_NAME[] = "root";

    elements.push_back(std::make_shared<Directory>(
            Directory(ROOT_ID, ROOT_NAME, ROOT_ID)));
}

FileSystemInterface::ElementSharedPointer FileSystemInterface::get_element(int id) const
{
    constexpr int FIRST_ELEMENT = 0;

    for (uint i = FIRST_ELEMENT; i < elements.size(); ++i)
        if (elements[i]->has_same_id(id))
            return elements[i];

    throw BadElementId();
}

void FileSystemInterface::check_id_validity(int id) const
{
    constexpr int FIRST_ELEMENT = 0;

    for (uint i = FIRST_ELEMENT; i < elements.size(); ++i)
        if (elements[i]->has_same_id(id))
            throw IdAlreadyExists();
}

void FileSystemInterface::check_parent_id_validity(int id) const
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

FileSystemInterface::ElementSharedPointer FileSystemInterface::get_linked_element(
        int element_id) const
{
    constexpr char DIRECTORY[] = "Directory";
    constexpr char FILE[] = "File";

    ElementSharedPointer linked_element = get_element(element_id);
    std::string type = linked_element->get_type();
    if (type == DIRECTORY || type == FILE)
        return linked_element;
        
    throw BadLinkedElement();
}

#endif