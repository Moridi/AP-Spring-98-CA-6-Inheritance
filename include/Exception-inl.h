#ifndef EXCEPTION_INL_H_
#define EXCEPTION_INL_H_

#ifndef EXCEPTION_H_
#error "Exception-inl.h" should be included only in "Exception.h" file.
#endif

#include "Exception.h"

inline const char* BadElementId::what() const throw()
{
    return "BadElementId exception occurred!";
}

#endif