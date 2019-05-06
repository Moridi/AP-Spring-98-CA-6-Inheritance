#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include <memory>
#include <vector>

#include "Element.h"

class Directory : public Element
{
public:
    typedef std::shared_ptr<Element> ElementSharedPointer;

    inline Directory(int _id, std::string _title, int _parent_id) noexcept;
    virtual void view() override;
    inline virtual std::string get_type() const override;
    inline void check_new_element_validity(std::string title);
    void add_element(ElementSharedPointer new_element);

private:
    std::vector<ElementSharedPointer> elements;
};

#include "Directory-inl.h"

#endif