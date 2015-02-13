#ifndef SELECT_H
#define SELECT_H

#include "include/sorts.h"

class Select:public Sorts
{
public:
    void sort();

    Select();
    Select( t_type* arr, unsigned int size );
    ~Select();

};

#endif // SELECT_H
