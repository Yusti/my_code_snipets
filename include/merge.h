#ifndef MERGE_H
#define MERGE_H

#include "include/sorts.h"

class Merge:public Sorts
{
public:
    void sort();

    Merge();
    Merge( t_type* arr, unsigned int size );
    ~Merge();

private:
    void merge( t_type* main_array, t_type* supporting_array,
                unsigned int lo, unsigned int mid, unsigned int hi );
};

#endif // MERGE_H
