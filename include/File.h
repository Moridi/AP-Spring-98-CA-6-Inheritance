#ifndef FILE_H_
#define FILE_H_

#include "Element.h"

class File : public Element
{
public:
    inline File(int _id, std::string _title, int _parent_id) noexcept;
    virtual void view() override;
    inline virtual std::string get_type() const override;
private:
    
};

#include "File-inl.h"

#endif