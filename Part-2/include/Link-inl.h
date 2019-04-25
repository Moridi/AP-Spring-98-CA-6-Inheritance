#ifndef LINK_INL_H_
#define LINK_INL_H_

#ifndef LINK_H_
#error "Link-inl.h" should be included only in "Link.h" file.
#endif

#include "Link.h"

Link::Link(int _id, std::string _title, int _parent_id,
        ElementSharedPointer _element) noexcept
: Element(_id, _title, _parent_id),
element(_element)
{
}

std::string Link::get_type() const
{
    return "Link";
}

#endif