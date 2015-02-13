#ifndef INSERT_H
#define INSERT_H
#include "include/sorts.h"

class Insert:public Sorts
{
public:
    void sort();

    Insert();
    Insert( t_type* arr, unsigned int size );
    ~Insert();

};

#endif // INSERT_H
