#include "Directory.h"

#include <iostream>

using namespace std;

void Directory::view()
{
    cout << "Title: " << title << endl;
}

void Directory::add_element(ElementSharedPointer new_element) throw()
{
    try
    {
        check_new_element_validity(new_element->get_title());
        elements.push_back(new_element);
    }
    catch(const std::exception& exception)
    {
        std::cerr << exception.what();
    }
}