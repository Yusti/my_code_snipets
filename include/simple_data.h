#ifndef SIMPLE_DATA_H
#define SIMPLE_DATA_H
#include "include/sorts.h"

class SimpleData:public Sorts
{
public:
    void sort();
    void print();

    SimpleData();
    SimpleData( t_type* arr, unsigned int size, unsigned int max_value);
    ~SimpleData();

private:
    unsigned int m_max_value;
};

#endif // SIMPLE_DATA_H
