#ifndef FILE_SYSTEM_H_
#define FILE_SYSTEM_H_

#include <string>
#include <vector>
#include <memory>

class Element;

class FileSystemInterface
{
public:
    typedef std::shared_ptr<Element> ElementSharedPointer;

    inline FileSystemInterface();

    void add_directory(int id, std::string title, int parent_id);
    void add_file(int id, std::string title, std::string content, int parent_id);
    void add_link(int id, std::string title, int element_id, int parent_id);

    void view(int id);

    void add_element(ElementSharedPointer new_element, int parent_id);

    inline ElementSharedPointer get_element(int id) const;
    inline void check_id_validity(int id) const;
    inline void check_parent_id_validity(int id) const;
    inline ElementSharedPointer get_linked_element(int element_id) const;

private:
    std::vector<ElementSharedPointer> elements;
};

#include "file_system_interface-inl.h"

#endif