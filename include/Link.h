#ifndef LINK_H_
#define LINK_H_

#include "Element.h"

class Link : public Element
{
public:
    inline Link(int _id, std::string _title, int _parent_id) noexcept;
    virtual void view() override;
    inline virtual std::string get_type() const override;
private:
    
};

#include "Link-inl.h"

#endif