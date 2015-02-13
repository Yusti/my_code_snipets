#ifndef SHELL_H
#define SHELL_H

#include "include/sorts.h"

class Shell:public Sorts
{
public:
    void sort();

    Shell();
    Shell( t_type* arr, unsigned int size );
    ~Shell();

};

#endif // SHELL_H
