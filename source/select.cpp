#include "include/select.h"
#include "iostream"

Select::Select():Sorts(){}

Select::Select( t_type* arr, unsigned int size ):
    Sorts( arr, size ){}

Select::~Select(){}

void Select::sort()
{
    for ( unsigned int i = 0; i < m_size; ++i )
    {
        t_type min = m_arr[ i ];
        unsigned int index_min = i;
        for ( unsigned int j = i + 1; j < m_size; ++j )
        {
            if( m_arr[ j ] < min )
            {
                min = m_arr[ j ];
                index_min = j;
            }
        }
        m_arr[ index_min ] = m_arr[ i ];
    }

    std::cout << "SELECT\n";
}

