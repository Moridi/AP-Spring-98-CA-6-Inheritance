#ifndef LINK_H_
#define LINK_H_

#include <memory>

#include "Element.h"

class Link : public Element
{
public:
    typedef std::shared_ptr<Element> ElementSharedPointer;

    inline Link(int _id, std::string _title,
            int _parent_id, ElementSharedPointer _element) noexcept;
    virtual void view() override;
    inline virtual std::string get_type() const override;

private:
    ElementSharedPointer element; 
};

#include "Link-inl.h"

#endif