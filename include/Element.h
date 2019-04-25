#ifndef ELEMENT_H_
#define ELEMENT_H_

#include <string>

class Element
{
public:
    inline Element(int _id, std::string _title, int _parent_id) noexcept;

private:
    int id;
    std::string title;
    int parent_id;

};

#include "Element-inl.h"

#endif