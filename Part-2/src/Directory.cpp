#include "Directory.h"

#include <iostream>

using namespace std;

void Directory::view()
{
    constexpr int FIRST_ELEMENT = 0;

    cout << "Title: " << title << endl;
    
    for (uint i = FIRST_ELEMENT; i < elements.size(); ++i)
        cout << "Title: " << elements[i]->get_title() <<
                ", Type: " << elements[i]->get_type() << endl;
}

void Directory::add_element(ElementSharedPointer new_element)
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