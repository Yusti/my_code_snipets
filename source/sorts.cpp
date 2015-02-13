#include "include/sorts.h"
#include <string.h>

Sorts::Sorts():
    m_size(0),
    m_arr(0)
{
    //
}

Sorts::Sorts( t_type *arr, unsigned int size ):
    m_size(size)
{
    m_arr = new t_type[ size ];
    memcpy( m_arr, arr, size * sizeof ( t_type ) );
}

Sorts::~Sorts()
{
    if ( m_arr != 0 )
    {
        delete[] m_arr;
        m_arr = 0;
    }
}

bool Sorts::is_sorted()
{
    for ( unsigned int i = 0; i < m_size - 1; ++i )
    {
        if ( m_arr[ i ] > m_arr [ i + 1 ] )
        {
            return false;
        }
    }
    return true;
}
