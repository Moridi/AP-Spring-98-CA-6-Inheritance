#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <exception>

class BadElementId : public std::exception
{
public:
    inline const char* what() const throw();
};

class IdAlreadyExist : public std::exception
{
public:
    inline const char* what() const throw();
};

#include "Exception-inl.h"

#endif