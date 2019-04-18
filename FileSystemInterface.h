#ifndef FILE_SYSTEM_INTERFACE_H_
#define FILE_SYSTEM_INTERFACE_H_

#include <string>

class FileSystemInterface
{
public:
    FileSystemInterface();

    void add_directory(int id, std::string title, int parent_id);
    void add_file(int id, std::string title, std::string content, int parent_id);
    void add_symbolic_link(int id, int file_id, int parent_id);

    void view(int id);
};

#endif