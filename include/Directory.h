#ifndef DIRECTORY_H_
#define DIRECTORY_H_

#include "Element.h"

class Directory : public Element
{
public:
    inline Directory(int _id, std::string _title, int _parent_id) noexcept;
    virtual void view() override;

private:
    
};

#include "Directory-inl.h"

#endif