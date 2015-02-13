#include "include/insert.h"
#include "iostream"

Insert::Insert():Sorts(){}

Insert::Insert( t_type* arr, unsigned int size ):
    Sorts( arr, size ){}

Insert::~Insert()
{
//    Sorts::~Sorts();
}

void Insert::sort()
{
    t_type k;
    for ( unsigned int i = 0; i < m_size; ++i )
    {
        for ( int j = i; j > 0; --j )
        {
            if ( m_arr[ j ] < m_arr[ j - 1 ] )
            {
                k = m_arr[ j - 1 ];
                m_arr[ j - 1 ] =  m_arr[ j ];
                m_arr[ j ] = k;
            }
            else
            {
                break;
            }
        }
    }
    std::cout << "INSERT" << '\n';
}
