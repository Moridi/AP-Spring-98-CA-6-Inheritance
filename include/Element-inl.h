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

#endif