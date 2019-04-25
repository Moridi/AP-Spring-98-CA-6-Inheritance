#ifndef DIRECTORY_INL_H_
#define DIRECTORY_INL_H_

#ifndef DIRECTORY_H_
#error "Directory-inl.h" should be included only in "Directory.h" file.
#endif

#include "Directory.h"

Directory::Directory(int _id, std::string _title, int _parent_id) noexcept
: Element(_id, _title, _parent_id)
{
}

std::string Directory::get_type() const
{
    return "Directory";
}

#endif