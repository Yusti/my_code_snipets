#ifndef QUICK_H
#define QUICK_H

#include "include/sorts.h"

class Quick:public Sorts
{
public:
    void sort();
    void print();

    Quick();
    Quick( t_type* arr, unsigned int size );
    ~Quick();

private:
    void swap(unsigned i, unsigned j);
    void shuffle();
    unsigned quick( unsigned lo, unsigned hi );

};

#endif // QUICK_H
