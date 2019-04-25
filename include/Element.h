#ifndef ELEMENT_H_
#define ELEMENT_H_

#include <string>

class Element
{
public:
    inline Element(int _id, std::string _title, int _parent_id) noexcept;
    
    virtual void view() = 0;
    virtual std::string get_type() const = 0;

    inline std::string get_title() const;
    inline bool has_same_id(int _id) const;
    inline bool has_same_title(std::string _title);

protected:
    int id;
    std::string title;
    int parent_id;
};

#include "Element-inl.h"

#endif