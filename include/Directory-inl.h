#ifndef DIRECTORY_INL_H_
#define DIRECTORY_INL_H_

#ifndef DIRECTORY_H_
#error "Directory-inl.h" should be included only in "Directory.h" file.
#endif

#include "Directory.h"

#include "Exception.h"

Directory::Directory(int _id, std::string _title, int _parent_id) noexcept
: Element(_id, _title, _parent_id)
{
}

std::string Directory::get_type() const
{
    return "Directory";
}

void Directory::check_new_element_validity(std::string title) throw()
{
    constexpr int FIRST_ELEMENT = 0;

    for (uint i = FIRST_ELEMENT; i < elements.size(); ++i)
        if (elements[i]->has_same_title(title))
            throw BadTitle();
}

#endif