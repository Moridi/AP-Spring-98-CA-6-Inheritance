#ifndef EXCEPTION_H_
#define EXCEPTION_H_

#include <exception>

class BadElementId : public std::exception
{
public:
    inline const char* what() const throw();
};

class IdAlreadyExists : public std::exception
{
public:
    inline const char* what() const throw();
};

class BadParentId : public std::exception
{
public:
    inline const char* what() const throw();
};

class BadTitle : public std::exception
{
public:
    inline const char* what() const throw();
};

class BadLinkedElement : public std::exception
{
public:
    inline const char* what() const throw();
};

#include "Exception-inl.h"

#endif