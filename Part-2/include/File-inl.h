#ifndef FILE_INL_H_
#define FILE_INL_H_

#ifndef FILE_H_
#error "File-inl.h" should be included only in "File.h" file.
#endif

#include "File.h"

#include "Exception.h"

File::File(int _id, std::string _title,
        int _parent_id, std::string _content) noexcept
: Element(_id, _title, _parent_id),
content(_content)
{
}

std::string File::get_type() const
{
    return "File";
}

#endif