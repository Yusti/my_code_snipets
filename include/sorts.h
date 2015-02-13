#ifndef SORTS_H
#define SORTS_H

typedef int t_type;

class Sorts
{
public:
    virtual void sort() = 0;
    bool is_sorted();

    Sorts();
    Sorts( t_type* arr, unsigned int size );
    virtual ~Sorts();
public:
    unsigned int m_size;
    t_type* m_arr;
};

#endif // SORTS_H
