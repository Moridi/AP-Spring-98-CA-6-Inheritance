#ifndef ELEMENT_INL_H_
#define ELEMENT_INL_H_

#ifndef ELEMENT_H_
#error "Element-inl.h" should be included only in "Element.h" file.
#endif

#include "Element.h"

#include <string>

Element::Element(int _id, std::string _title, int _parent_id) noexcept
: id(_id),
title(_title),
parent_id(_parent_id)
{
}

bool Element::has_same_id(int _id) const
{
    return id == _id;
}

std::string Element::get_title() const
{
    return title;
}

bool Element::has_same_title(std::string _title)
{
    return title == _title;
}

#endif