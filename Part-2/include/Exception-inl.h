#ifndef EXCEPTION_INL_H_
#define EXCEPTION_INL_H_

#ifndef EXCEPTION_H_
#error "Exception-inl.h" should be included only in "Exception.h" file.
#endif

#include "Exception.h"

const char* BadElementId::what() const throw()
{
    return "Invalid element ID requested!";
}

const char* IdAlreadyExists::what() const throw()
{
    return "Requested ID already exists!";
}

const char* BadParentId::what() const throw()
{
    return "Parent ID is not referring to a directory!";
}

const char* BadTitle::what() const throw()
{
    return "Parent directory has the same child!";
}

const char* BadLinkedElement::what() const throw()
{
    return "Invalid element type requested!";
}

#endif