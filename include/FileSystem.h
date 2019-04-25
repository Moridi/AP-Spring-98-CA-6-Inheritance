#ifndef FILE_SYSTEM_H_
#define FILE_SYSTEM_H_

#include <string>
#include <memory>
#include <vector>

class Element;

class FileSystem
{
public:
    typedef std::shared_ptr<Element> ElementSharedPointer;

    inline FileSystem() noexcept;

    void add_directory(int id, std::string title, int parent_id);
    void add_file(int id, std::string title, std::string content, int parent_id);
    void add_link(int id, std::string title, int element_id, int parent_id);

    void view(int id) const;

private:
    std::vector<ElementSharedPointer> elements;
};

#include "FileSystem-inl.h"

#endif