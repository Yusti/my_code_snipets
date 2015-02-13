#include "include/merge.h"
#include <iostream>
#include <stack>
#include <string.h>

Merge::Merge():Sorts(){}

Merge::Merge( t_type* arr, unsigned int size ):
    Sorts( arr, size ){}

Merge::~Merge(){}

void Merge::merge(t_type *main_array, t_type *supporting_array,
                  unsigned int lo, unsigned int mid, unsigned int hi)
{
    unsigned int i = lo;
    unsigned int j = mid;
    for ( unsigned int p = lo; p <= hi; ++p )
    {
        if ( i >= mid )
        {
            memcpy( ( supporting_array + p ), ( main_array + j ),
                    sizeof( unsigned int) * ( hi - j + 1 ));
            break;
        }

        if ( j > hi )
        {
            memcpy( ( supporting_array + p ), ( main_array + i ),
                    sizeof( unsigned int) * ( mid - i ) );
            break;
        }

        if (main_array[ i ] <= main_array[ j ] )
        {
            supporting_array[ p ] = main_array[ i ];
            ++i;
        }
        else
        {
            supporting_array[ p ] = main_array[ j ];
            ++j;
        }
    }

}

void Merge::sort()
{
    t_type* supported_arr = new t_type[ m_size ];
    unsigned int bound_level = 1;

    t_type* base_array = m_arr;
    t_type* auxilary_array = supported_arr;
    t_type* tempPtr;
    while( bound_level < m_size )
    {
        for ( unsigned int lo = 0; lo < m_size; lo += 2*bound_level )
        {
            merge( base_array, auxilary_array, lo,
                   std::min( lo + bound_level, m_size ),
                   std::min( lo + 2 * bound_level - 1, m_size ) );
        }

        tempPtr = base_array;
        base_array = auxilary_array;
        auxilary_array = tempPtr;

        bound_level *= 2;
    }

    memcpy( m_arr, base_array, m_size * sizeof( t_type ) );

    if ( supported_arr != NULL )
    {
        delete[] supported_arr;
        supported_arr = NULL;
    }
}
